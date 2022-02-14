
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int Date_prototype; } ;
typedef TYPE_2__ js_State ;
struct TYPE_15__ {double number; } ;
struct TYPE_17__ {TYPE_1__ u; } ;
typedef TYPE_3__ js_Object ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ,int ) ;
 int FUNC_1 (double,double,double) ;
 int FUNC_2 (double,double,double,double) ;
 double FUNC_3 () ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 double FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 double FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int,int ) ;
 int FUNC_13 (TYPE_2__*,int) ;
 double FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(js_State *VAR_2)
{
 int VAR_3 = FUNC_7(VAR_2);
 js_Object *VAR_4;
 double VAR_5;

 if (VAR_3 == 1)
  VAR_5 = FUNC_3();
 else if (VAR_3 == 2) {
  FUNC_12(VAR_2, 1, VAR_1);
  if (FUNC_8(VAR_2, 1))
   VAR_5 = FUNC_14(FUNC_13(VAR_2, 1));
  else
   VAR_5 = FUNC_4(FUNC_11(VAR_2, 1));
 } else {
  double VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  VAR_6 = FUNC_11(VAR_2, 1);
  if (VAR_6 < 100) VAR_6 += 1900;
  VAR_7 = FUNC_11(VAR_2, 2);
  VAR_8 = FUNC_9(VAR_2, 3, 1);
  VAR_9 = FUNC_9(VAR_2, 4, 0);
  VAR_10 = FUNC_9(VAR_2, 5, 0);
  VAR_11 = FUNC_9(VAR_2, 6, 0);
  VAR_12 = FUNC_9(VAR_2, 7, 0);
  VAR_5 = FUNC_0(FUNC_1(VAR_6, VAR_7, VAR_8), FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12));
  VAR_5 = FUNC_4(FUNC_5(VAR_5));
 }

 VAR_4 = FUNC_6(VAR_2, VAR_0, VAR_2->Date_prototype);
 VAR_4->u.number = VAR_5;

 FUNC_10(VAR_2, VAR_4);
}
