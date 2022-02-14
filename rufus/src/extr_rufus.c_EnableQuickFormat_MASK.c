
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {scalar_t__ DiskSize; } ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_6(BOOL VAR_14, BOOL VAR_15)
{
 static UINT VAR_16, VAR_17 = 0;
 HWND VAR_18 = FUNC_2(VAR_12, VAR_6);

 if ((VAR_9 == VAR_2) && FUNC_3(VAR_13))
  VAR_14 = VAR_3;


 if (((VAR_11 == VAR_4) && ((VAR_8.DiskSize > VAR_7) || (VAR_10))) || (VAR_11 == VAR_5)) {
  VAR_14 = VAR_3;

  VAR_15 = VAR_3;
  FUNC_0(VAR_12, VAR_6, VAR_0);
 }

 if (VAR_15) {
  if (!VAR_14 && (VAR_17 != 1)) {
   VAR_16 = FUNC_4(VAR_6);
   FUNC_0(VAR_12, VAR_6, VAR_1);
   VAR_17 = 1;
  } else if (VAR_14 && !FUNC_5(VAR_18) && (VAR_17 != 2)) {
   if (VAR_17 != 0)
    FUNC_0(VAR_12, VAR_6, VAR_16);
   VAR_17 = 2;
  }
 }
 FUNC_1(VAR_18, VAR_14);
}
