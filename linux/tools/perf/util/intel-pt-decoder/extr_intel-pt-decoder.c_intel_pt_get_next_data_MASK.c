
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {scalar_t__ next_len; scalar_t__ next_buf; scalar_t__ len; scalar_t__ buf; } ;


 int FUNC_0 (struct intel_pt_decoder*,int) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_decoder *VAR_0,
      bool VAR_1)
{
 if (!VAR_0->next_buf)
  return FUNC_0(VAR_0, VAR_1);

 VAR_0->buf = VAR_0->next_buf;
 VAR_0->len = VAR_0->next_len;
 VAR_0->next_buf = 0;
 VAR_0->next_len = 0;
 return 0;
}
