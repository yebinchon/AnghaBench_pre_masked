
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wDayOfWeek; scalar_t__ wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int DOUBLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static SYSTEMTIME FUNC_8(DOUBLE VAR_0)
{
    SYSTEMTIME VAR_1;

    VAR_1.wYear = FUNC_7(VAR_0);
    VAR_1.wMonth = FUNC_3(VAR_0) + 1;
    VAR_1.wDayOfWeek = FUNC_6(VAR_0);
    VAR_1.wDay = FUNC_0(VAR_0);
    VAR_1.wHour = FUNC_1(VAR_0);
    VAR_1.wMinute = FUNC_2(VAR_0);
    VAR_1.wSecond = FUNC_5(VAR_0);
    VAR_1.wMilliseconds = FUNC_4(VAR_0);

    return VAR_1;
}
