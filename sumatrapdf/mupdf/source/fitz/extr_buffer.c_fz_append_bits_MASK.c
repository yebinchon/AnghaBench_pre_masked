
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int unused_bits; int len; unsigned int* data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;






 if (VAR_3 == 0)
  return;
 VAR_4 = (VAR_1->unused_bits - VAR_3);




 if (VAR_4 < 0)
 {
  int VAR_5 = (7-VAR_4)>>3;
  FUNC_0(VAR_0, VAR_1, VAR_1->len + VAR_5);
 }


 if (VAR_1->unused_bits)
 {
  VAR_1->data[VAR_1->len-1] |= (VAR_4 >= 0 ? (((unsigned int)VAR_2)<<VAR_4) : (((unsigned int)VAR_2)>>-VAR_4));
  if (VAR_4 >= 0)
  {

   VAR_1->unused_bits -= VAR_3;
   return;
  }


  VAR_3 = -VAR_4;
 }


 while (VAR_3 >= 8)
 {
  VAR_3 -= 8;
  VAR_1->data[VAR_1->len++] = VAR_2>>VAR_3;
 }


 if (VAR_3 > 0)
 {
  VAR_3 = 8-VAR_3;
  VAR_1->data[VAR_1->len++] = VAR_2<<VAR_3;
 }
 VAR_1->unused_bits = VAR_3;
}
