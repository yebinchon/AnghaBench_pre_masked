
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int gimple_stmt_iterator ;
typedef int gimple ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,char*) ;
 int VAR_4 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_22(tree VAR_6)
{
 basic_block VAR_7;
 gimple_stmt_iterator VAR_8;
 tree VAR_9;
 gimple VAR_10;
 tree VAR_11;


 VAR_7 = FUNC_20(FUNC_2(VAR_3));


 for (VAR_8 = FUNC_17(VAR_7); !FUNC_14(VAR_8); FUNC_16(&VAR_8)) {
  gimple VAR_12 = FUNC_18(VAR_8);
  tree VAR_13;


  if (!FUNC_10(VAR_12))
   continue;
  VAR_13 = FUNC_9(VAR_12);






  if (FUNC_12(VAR_12) != VAR_6)
   continue;

  if (FUNC_5(VAR_13) == VAR_0)
   return;
 }


 if (VAR_5)
  FUNC_19(FUNC_1(VAR_6),
   "%s variable will be forcibly initialized",
   (VAR_2 && FUNC_3(VAR_6)) ? "byref"
        : "userspace");


 VAR_11 = FUNC_6(VAR_6);
 if (FUNC_0(VAR_11))
  VAR_9 = FUNC_7(VAR_11, ((void*)0));
 else
  VAR_9 = FUNC_8(VAR_11, VAR_4);


 VAR_10 = FUNC_11(VAR_6, VAR_9);
 VAR_8 = FUNC_13(FUNC_20(FUNC_2(VAR_3)));
 FUNC_15(&VAR_8, VAR_10, VAR_1);
 FUNC_21(VAR_10);
}
