
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mmask_t ;
struct TYPE_4__ {scalar_t__ picker; } ;
struct TYPE_3__ {int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (short,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 () ;

__attribute__((used)) static bool FUNC_17(mmask_t *VAR_12)
{
 short VAR_13;

 if (VAR_7.picker) {
  if (!FUNC_10(((void*)0), VAR_9, VAR_10)) {
   FUNC_3(VAR_9, "newterm!\n");
   return VAR_5;
  }
 } else if (!FUNC_6()) {
  FUNC_3(VAR_9, "initscr!\n");
  FUNC_0(FUNC_4("TERM"));
  return VAR_5;
 }

 FUNC_1();
 FUNC_11();
 FUNC_12();

 FUNC_7(VAR_11, VAR_6);

 FUNC_9(VAR_1 | VAR_0, VAR_12);




 FUNC_8(0);
 FUNC_2(VAR_5);
 FUNC_15();
 FUNC_16();


 for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13)
  FUNC_5(VAR_13 + 1, VAR_8[VAR_13].color, -1);

 FUNC_14();
 FUNC_13(25);
 return VAR_6;
}
