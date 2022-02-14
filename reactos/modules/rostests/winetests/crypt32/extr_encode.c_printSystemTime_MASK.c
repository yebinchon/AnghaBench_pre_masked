
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMonth; int wDay; int wYear; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static const char *FUNC_1(const SYSTEMTIME *VAR_0)
{
    static char VAR_1[64];

    FUNC_0(VAR_1, "%02d-%02d-%04d %02d:%02d:%02d.%03d", VAR_0->wMonth, VAR_0->wDay,
     VAR_0->wYear, VAR_0->wHour, VAR_0->wMinute, VAR_0->wSecond, VAR_0->wMilliseconds);
    return VAR_1;
}
