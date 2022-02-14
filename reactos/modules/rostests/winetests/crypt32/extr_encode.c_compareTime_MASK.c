
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wYear; scalar_t__ wMonth; scalar_t__ wDay; scalar_t__ wHour; scalar_t__ wMinute; scalar_t__ wSecond; scalar_t__ wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int FILETIME ;


 int FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_6(const SYSTEMTIME *VAR_0, const FILETIME *VAR_1)
{
    SYSTEMTIME VAR_2;

    FUNC_0(VAR_1, &VAR_2);
    FUNC_3((VAR_0->wYear == VAR_2.wYear &&
     VAR_0->wMonth == VAR_2.wMonth &&
     VAR_0->wDay == VAR_2.wDay &&
     VAR_0->wHour == VAR_2.wHour &&
     VAR_0->wMinute == VAR_2.wMinute &&
     VAR_0->wSecond == VAR_2.wSecond &&
     FUNC_1(VAR_0->wMilliseconds - VAR_2.wMilliseconds) <= 1) ||



     FUNC_2(VAR_0->wYear == VAR_2.wYear &&
     VAR_0->wMonth == VAR_2.wMonth &&
     VAR_0->wDay == VAR_2.wDay &&
     FUNC_1(VAR_0->wHour - VAR_2.wHour) <= 1),
     "Got unexpected value for time decoding:\nexpected %s, got %s\n",
     FUNC_5(VAR_0), FUNC_4(VAR_1));
}
