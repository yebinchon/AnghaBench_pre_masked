
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_8__ {int* p; int* end; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;





 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2, VAR_3;
 uint8 *VAR_4;
 uint8 VAR_5;

 FUNC_2(VAR_1, 21);
 FUNC_1(VAR_1, VAR_5);
 if (VAR_5 & 0x80)
  FUNC_1(VAR_1, VAR_5);

 while (VAR_1->p < VAR_1->end)
 {
  FUNC_0(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_3);

  if (VAR_3 <= 4)
   return;

  VAR_4 = VAR_1->p + VAR_3 - 4;

  switch (VAR_2)
  {
   case 128:
    FUNC_4(VAR_0, VAR_1);
    break;

   case 129:
    FUNC_3(VAR_0, VAR_1);
    break;

   case 130:



    break;

   default:
    FUNC_5("response tag 0x%x\n", VAR_2);
  }

  VAR_1->p = VAR_4;
 }
}
