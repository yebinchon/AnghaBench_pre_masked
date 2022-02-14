
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwMciTimeFormat; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static DWORD FUNC_5(WINE_MCIMIDI* VAR_3, DWORD VAR_4)
{
    DWORD VAR_5 = 0;

    switch (VAR_3->dwMciTimeFormat) {
    case 131:
 VAR_5 = VAR_4;
 break;
    case 130:
 VAR_5 =
     (FUNC_0(FUNC_1(VAR_4)) * 125) / 3 + FUNC_2(FUNC_1(VAR_4)) * VAR_2 +
     FUNC_0(FUNC_3(VAR_4)) * VAR_1 + FUNC_2(FUNC_3(VAR_4)) * VAR_0;
 break;
    case 129:
 VAR_5 =
     FUNC_0(FUNC_1(VAR_4)) * 40 + FUNC_2(FUNC_1(VAR_4)) * VAR_2 +
     FUNC_0(FUNC_3(VAR_4)) * VAR_1 + FUNC_2(FUNC_3(VAR_4)) * VAR_0;
 break;
    case 128:
 VAR_5 =
     (FUNC_0(FUNC_1(VAR_4)) * 100) / 3 + FUNC_2(FUNC_1(VAR_4)) * VAR_2 +
     FUNC_0(FUNC_3(VAR_4)) * VAR_1 + FUNC_2(FUNC_3(VAR_4)) * VAR_0;
 break;
    default:
 FUNC_4("Bad time format %u!\n", VAR_3->dwMciTimeFormat);
    }



    return VAR_5;
}
