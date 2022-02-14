
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uses_minint; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_9(void)
{
 BOOL VAR_16 = FUNC_6(VAR_13) && (!VAR_13.uses_minint);

 if ((!VAR_14) && ((VAR_12 == ((void*)0)) || (VAR_7 != VAR_2) || (VAR_8 != VAR_3) || FUNC_5(VAR_13) ||
  ((VAR_11 & VAR_6) && (FUNC_1(FUNC_3(VAR_10, VAR_4)) == 1)) )) {
  FUNC_0(VAR_10, VAR_5, VAR_1);
  FUNC_7(FUNC_2(VAR_9, 0));
  return;
 }

 VAR_15 = (VAR_16 || FUNC_4(VAR_13) || VAR_14)?VAR_0:VAR_1;
 if (FUNC_8(FUNC_3(VAR_10, VAR_5)))
  FUNC_0(VAR_10, VAR_5, VAR_15);
 FUNC_7(FUNC_2(VAR_9, VAR_16?1:0));
}
