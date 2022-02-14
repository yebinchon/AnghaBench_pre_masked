
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {void** x; } ;
typedef TYPE_1__ NDBOX ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (TYPE_1__*,int) ;
 void* FUNC_3 (void*,void*) ;
 void* FUNC_4 (void*,void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 void* FUNC_9 (TYPE_1__*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int) ;

NDBOX *
FUNC_12(NDBOX *VAR_0, NDBOX *VAR_1)
{
 int VAR_2;
 NDBOX *VAR_3;
 int VAR_4;
 int VAR_5;


 if (VAR_0 == VAR_1)
  return VAR_0;


 if (FUNC_1(VAR_0) < FUNC_1(VAR_1))
 {
  NDBOX *VAR_6 = VAR_1;

  VAR_1 = VAR_0;
  VAR_0 = VAR_6;
 }
 VAR_4 = FUNC_1(VAR_0);

 VAR_5 = FUNC_0(VAR_4);
 VAR_3 = FUNC_11(VAR_5);
 FUNC_8(VAR_3, VAR_5);
 FUNC_6(VAR_3, VAR_4);


 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++)
 {
  VAR_3->x[VAR_2] = FUNC_4(
         FUNC_4(FUNC_2(VAR_0, VAR_2), FUNC_9(VAR_0, VAR_2)),
         FUNC_4(FUNC_2(VAR_1, VAR_2), FUNC_9(VAR_1, VAR_2))
   );
  VAR_3->x[VAR_2 + FUNC_1(VAR_0)] = FUNC_3(
         FUNC_3(FUNC_2(VAR_0, VAR_2), FUNC_9(VAR_0, VAR_2)),
         FUNC_3(FUNC_2(VAR_1, VAR_2), FUNC_9(VAR_1, VAR_2))
   );
 }

 for (; VAR_2 < FUNC_1(VAR_0); VAR_2++)
 {
  VAR_3->x[VAR_2] = FUNC_4(0,
         FUNC_4(FUNC_2(VAR_0, VAR_2), FUNC_9(VAR_0, VAR_2))
   );
  VAR_3->x[VAR_2 + VAR_4] = FUNC_3(0,
         FUNC_3(FUNC_2(VAR_0, VAR_2), FUNC_9(VAR_0, VAR_2))
   );
 }





 if (FUNC_10(VAR_3))
 {
  VAR_5 = FUNC_5(VAR_4);
  FUNC_8(VAR_3, VAR_5);
  FUNC_7(VAR_3);
 }

 return VAR_3;
}
