
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int wSecond; int wMinute; int wHour; int wDay; scalar_t__ wMonth; scalar_t__ wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;

time_t FUNC_1(const SYSTEMTIME *VAR_1)
{
    if (VAR_1 == ((void*)0))
    {
        return (time_t)-1;
    }

    return FUNC_0(VAR_1->wYear - VAR_0,
                               VAR_1->wMonth - 1,
                               VAR_1->wDay, VAR_1->wHour,
                               VAR_1->wMinute,
                               VAR_1->wSecond);
}
