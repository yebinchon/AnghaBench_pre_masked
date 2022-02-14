
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_conn_list {int len; int * conns; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 struct hda_conn_list* FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     const hda_nid_t **VAR_3)
{
 bool VAR_4 = 0;

 for (;;) {
  int VAR_5;
  const struct hda_conn_list *VAR_6;


  VAR_6 = FUNC_0(VAR_1, VAR_2);
  if (VAR_6) {
   if (VAR_3)
    *VAR_3 = VAR_6->conns;
   return VAR_6->len;
  }
  if (FUNC_2(VAR_4))
   return -VAR_0;

  VAR_5 = FUNC_1(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_4 = 1;
 }
}
