
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMonth; int wDay; int wYear; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int FILETIME ;


 int FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static const char *FUNC_2(const FILETIME *VAR_0)
{
    static char VAR_1[64];
    SYSTEMTIME VAR_2;

    FUNC_0(VAR_0, &VAR_2);
    FUNC_1(VAR_1, "%02d-%02d-%04d %02d:%02d:%02d.%03d", VAR_2.wMonth, VAR_2.wDay,
     VAR_2.wYear, VAR_2.wHour, VAR_2.wMinute, VAR_2.wSecond, VAR_2.wMilliseconds);
    return VAR_1;
}
