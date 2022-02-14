
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_7__ {int * p; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;




 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(RDPCLIENT * VAR_0, STREAM VAR_1, uint16 VAR_2)
{
 int VAR_3;
 uint8 *VAR_4, *VAR_5;
 uint16 VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_1->p;

 FUNC_0(VAR_1, VAR_6);
 FUNC_1(VAR_1, 2);

 for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
 {
  if (VAR_1->p > VAR_5 + VAR_2)
   return;

  FUNC_0(VAR_1, VAR_7);
  FUNC_0(VAR_1, VAR_8);

  VAR_4 = VAR_1->p + VAR_8 - 4;

  switch (VAR_7)
  {
   case 128:
    FUNC_3(VAR_0, VAR_1);
    break;

   case 129:
    FUNC_2(VAR_0, VAR_1);
    break;
  }

  VAR_1->p = VAR_4;
 }
}
