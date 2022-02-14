
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {scalar_t__ data; } ;


 int FUNC_0 (long*) ;
 int FUNC_1 (struct encoder_packet*,int ,int) ;
 scalar_t__ FUNC_2 (long*) ;

void FUNC_3(struct encoder_packet *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->data) {
  long *VAR_1 = ((long *)VAR_0->data) - 1;
  if (FUNC_2(VAR_1) == 0)
   FUNC_0(VAR_1);
 }

 FUNC_1(VAR_0, 0, sizeof(struct encoder_packet));
}
