
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {unsigned int wait_scp_header; unsigned int scp_resp_header; unsigned int scp_resp_count; unsigned int wait_num_data; int scp_resp_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,unsigned int*) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4;

 if (FUNC_0(VAR_1, &VAR_3) < 0)
  return -VAR_0;

 if ((VAR_3 & 0x00ffffff) == VAR_2->wait_scp_header) {
  VAR_2->scp_resp_header = VAR_3;
  VAR_2->scp_resp_count = VAR_3 >> 27;
  VAR_4 = VAR_2->wait_num_data;
  FUNC_1(VAR_1, VAR_2->scp_resp_data,
        &VAR_2->scp_resp_count, VAR_4);
  return 0;
 }

 return -VAR_0;
}
