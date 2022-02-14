
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_7__ {int * p; } ;
typedef TYPE_1__* STREAM ;




 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(STREAM VAR_0, uint16 VAR_1)
{
 int VAR_2;
 uint8 *VAR_3, *VAR_4;
 uint16 VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_0->p;

 FUNC_0(VAR_0, VAR_5);
 FUNC_1(VAR_0, 2);

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
 {
  if (VAR_0->p > VAR_4 + VAR_1)
   return;

  FUNC_0(VAR_0, VAR_6);
  FUNC_0(VAR_0, VAR_7);

  VAR_3 = VAR_0->p + VAR_7 - 4;

  switch (VAR_6)
  {
   case 128:
    FUNC_3(VAR_0);
    break;

   case 129:
    FUNC_2(VAR_0);
    break;
  }

  VAR_0->p = VAR_3;
 }
}
