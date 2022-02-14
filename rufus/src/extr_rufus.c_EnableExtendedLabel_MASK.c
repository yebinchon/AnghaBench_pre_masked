
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(BOOL VAR_9, BOOL VAR_10)
{
 static UINT VAR_11, VAR_12 = 0;
 HWND VAR_13 = FUNC_2(VAR_7, VAR_4);

 if ((VAR_6 >= VAR_3) || ((VAR_5 == VAR_1) && FUNC_3(VAR_8)))
  VAR_9 = VAR_2;

 if (VAR_10) {
  if (!VAR_9 && (VAR_12 != 1)) {
   VAR_11 = FUNC_4(VAR_4);
   FUNC_0(VAR_7, VAR_4, VAR_0);
   VAR_12 = 1;
  } else if (VAR_9 && !FUNC_5(VAR_13) && (VAR_12 != 2)) {
   if (VAR_12 != 0)
    FUNC_0(VAR_7, VAR_4, VAR_11);
   VAR_12 = 2;
  }
 }
 FUNC_1(VAR_13, VAR_9);
}
