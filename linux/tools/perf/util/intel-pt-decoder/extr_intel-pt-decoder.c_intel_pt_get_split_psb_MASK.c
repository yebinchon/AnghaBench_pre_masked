
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int pos; scalar_t__ len; scalar_t__ temp_buf; scalar_t__ buf; scalar_t__ next_len; scalar_t__ next_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_pt_decoder*,int) ;
 int FUNC_1 (struct intel_pt_decoder*,int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_decoder *VAR_2,
      int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_2->pos += VAR_2->len;
 VAR_2->len = 0;

 VAR_5 = FUNC_0(VAR_2, 0);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return 0;

 VAR_2->pos -= VAR_3;
 VAR_2->next_buf = VAR_2->buf + VAR_4;
 VAR_2->next_len = VAR_2->len - VAR_4;
 FUNC_2(VAR_2->temp_buf, VAR_1, VAR_0);
 VAR_2->buf = VAR_2->temp_buf;
 VAR_2->len = VAR_0;

 return 0;
}
