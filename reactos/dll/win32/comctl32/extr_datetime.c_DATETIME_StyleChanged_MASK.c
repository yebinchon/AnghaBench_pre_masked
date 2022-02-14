
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_6__ {int dwStyle; int hwndSelf; scalar_t__ hUpdown; scalar_t__ hwndCheckbut; scalar_t__ dateValid; } ;
struct TYPE_5__ {int styleOld; int styleNew; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef int LRESULT ;
typedef int HINSTANCE ;
typedef TYPE_2__ DATETIME_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int,int,int,int ,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int,int,int,int,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (scalar_t__,int ,int,int ) ;
 int FUNC_6 (char*,scalar_t__,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static LRESULT
FUNC_7(DATETIME_INFO *VAR_13, WPARAM VAR_14, const STYLESTRUCT *VAR_15)
{
    FUNC_6("(styletype=%lx, styleOld=0x%08x, styleNew=0x%08x)\n",
          VAR_14, VAR_15->styleOld, VAR_15->styleNew);

    if (VAR_14 != VAR_5) return 0;

    VAR_13->dwStyle = VAR_15->styleNew;

    if ( !(VAR_15->styleOld & VAR_2) && (VAR_15->styleNew & VAR_2) ) {
        VAR_13->hwndCheckbut = FUNC_1 (0, VAR_9, 0, VAR_11 | VAR_12 | VAR_1,
               2, 2, 13, 13, VAR_13->hwndSelf, 0,
      (HINSTANCE)FUNC_3 (VAR_13->hwndSelf, VAR_4), 0);
        FUNC_5 (VAR_13->hwndCheckbut, VAR_0, VAR_13->dateValid ? 1 : 0, 0);
    }
    if ( (VAR_15->styleOld & VAR_2) && !(VAR_15->styleNew & VAR_2) ) {
        FUNC_2(VAR_13->hwndCheckbut);
        VAR_13->hwndCheckbut = 0;
    }
    if ( !(VAR_15->styleOld & VAR_3) && (VAR_15->styleNew & VAR_3) ) {
 VAR_13->hUpdown = FUNC_0 (VAR_11 | VAR_10 | VAR_12, 120, 1, 20, 20,
      VAR_13->hwndSelf, 1, 0, 0, VAR_7, VAR_8, 0);
    }
    if ( (VAR_15->styleOld & VAR_3) && !(VAR_15->styleNew & VAR_3) ) {
 FUNC_2(VAR_13->hUpdown);
 VAR_13->hUpdown = 0;
    }

    FUNC_4(VAR_13->hwndSelf, ((void*)0), VAR_6);
    return 0;
}
