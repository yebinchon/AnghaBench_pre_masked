
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_8__ {int* p; int* end; } ;
typedef TYPE_1__* STREAM ;





 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(STREAM VAR_0)
{
 uint16 VAR_1, VAR_2;
 uint8 *VAR_3;
 uint8 VAR_4;

 FUNC_2(VAR_0, 21);
 FUNC_1(VAR_0, VAR_4);
 if (VAR_4 & 0x80)
  FUNC_1(VAR_0, VAR_4);

 while (VAR_0->p < VAR_0->end)
 {
  FUNC_0(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_2);

  if (VAR_2 <= 4)
   return;

  VAR_3 = VAR_0->p + VAR_2 - 4;

  switch (VAR_1)
  {
   case 128:
    FUNC_4(VAR_0);
    break;

   case 129:
    FUNC_3(VAR_0);
    break;

   case 130:



    break;

   default:
    FUNC_5("response tag 0x%x\n", VAR_1);
  }

  VAR_0->p = VAR_3;
 }
}
