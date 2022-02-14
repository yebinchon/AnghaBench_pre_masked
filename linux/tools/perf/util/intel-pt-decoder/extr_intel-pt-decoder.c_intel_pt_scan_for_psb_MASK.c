
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int buf; unsigned char* pkt_step; scalar_t__ len; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_pt_decoder*,int) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 unsigned char* FUNC_5 (int,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct intel_pt_decoder *VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4;

 FUNC_3("Scanning for PSB\n");
 while (1) {
  if (!VAR_2->len) {
   VAR_4 = FUNC_0(VAR_2, 0);
   if (VAR_4)
    return VAR_4;
  }

  VAR_3 = FUNC_5(VAR_2->buf, VAR_2->len, VAR_1,
         VAR_0);
  if (!VAR_3) {
   int VAR_5;

   VAR_5 = FUNC_4(VAR_2);
   if (VAR_5) {
    VAR_4 = FUNC_2(VAR_2, VAR_5);
    if (VAR_4)
     return VAR_4;
   } else {
    VAR_2->pos += VAR_2->len;
    VAR_2->len = 0;
   }
   continue;
  }

  VAR_2->pkt_step = VAR_3 - VAR_2->buf;
  return FUNC_1(VAR_2);
 }
}
