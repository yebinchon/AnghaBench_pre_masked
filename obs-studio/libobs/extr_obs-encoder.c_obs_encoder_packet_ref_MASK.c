
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {scalar_t__ data; } ;


 int FUNC_0 (long*) ;

void FUNC_1(struct encoder_packet *VAR_0,
       struct encoder_packet *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->data) {
  long *VAR_2 = ((long *)VAR_1->data) - 1;
  FUNC_0(VAR_2);
 }

 *VAR_0 = *VAR_1;
}
