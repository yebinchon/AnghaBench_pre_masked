
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMonth; scalar_t__ wDay; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(const SYSTEMTIME *VAR_2)
{
    if (VAR_2->wMonth < 1 || VAR_2->wMonth > 12 )
        return VAR_0;
    if (VAR_2->wDay == 0 || VAR_2->wDay > FUNC_0(VAR_2->wMonth, VAR_2->wYear))
        return VAR_0;

    return VAR_1;
}
