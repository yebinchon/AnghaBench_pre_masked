
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMonth; int wYear; int wDayOfWeek; int wDay; int wHour; int wMinute; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int DOUBLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline DOUBLE FUNC_5(int VAR_4, SYSTEMTIME VAR_5)
{
    DOUBLE VAR_6;
    int VAR_7;

    if(VAR_5.wMonth == 0)
        return VAR_3;

    if(VAR_5.wYear != 0)
        VAR_4 = VAR_5.wYear;

    VAR_6 = FUNC_3(VAR_4);
    VAR_6 += (DOUBLE)FUNC_0(VAR_5.wMonth-1, FUNC_1(VAR_6)) * VAR_0;

    if(VAR_5.wYear == 0) {
        VAR_7 = VAR_5.wDayOfWeek-FUNC_4(VAR_6);
        if(VAR_7 < 0)
            VAR_7 += 7;
        VAR_6 += VAR_7 * VAR_0;

        VAR_6 += (DOUBLE)(VAR_5.wDay-1) * 7 * VAR_0;
        if(FUNC_2(VAR_6) != VAR_5.wMonth-1)
            VAR_6 -= 7 * VAR_0;
    }
    else
        VAR_6 += VAR_5.wDay * VAR_0;

    VAR_6 += VAR_5.wHour * VAR_1;
    VAR_6 += VAR_5.wMinute * VAR_2;

    return VAR_6;
}
