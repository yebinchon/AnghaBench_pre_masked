
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwMciTimeFormat; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int DWORD ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static DWORD FUNC_2(WINE_MCIMIDI* VAR_3, DWORD VAR_4)
{
    DWORD VAR_5 = 0, VAR_6 = VAR_4;
    DWORD VAR_7, VAR_8, VAR_9, VAR_10;

    switch (VAR_3->dwMciTimeFormat) {
    case 131:
 VAR_5 = VAR_6;
 break;
    case 130:
    case 129:
    case 128:
 VAR_7 = VAR_6 / VAR_0;
 VAR_8 = (VAR_6 -= VAR_7 * VAR_0) / VAR_1;
 VAR_9 = (VAR_6 -= VAR_8 * VAR_1) / VAR_2;
 switch (VAR_3->dwMciTimeFormat) {
 case 130:

     VAR_10 = (VAR_6 * 3) / 125; VAR_6 -= (VAR_10 * 125) / 3;
     break;
 case 129:

     VAR_10 = VAR_6 / 40; VAR_6 -= VAR_10 * 40;
     break;
 case 128:

     VAR_10 = (VAR_6 * 3) / 100; VAR_6 -= (VAR_10 * 100) / 3;
     break;
 default:
     FUNC_0("There must be some bad bad programmer\n");
     VAR_10 = 0;
 }


 VAR_5 = (VAR_10 << 24) | (VAR_9 << 16) | (VAR_8 << 8) | (VAR_7 << 0);
 break;
    default:
 FUNC_1("Bad time format %u!\n", VAR_3->dwMciTimeFormat);
    }



    return VAR_5;
}
