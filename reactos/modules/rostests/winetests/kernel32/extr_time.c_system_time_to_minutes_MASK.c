
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef int SYSTEMTIME ;
typedef int LONGLONG ;
typedef TYPE_1__ FILETIME ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static LONGLONG FUNC_4(const SYSTEMTIME *VAR_0)
{
    BOOL VAR_1;
    FILETIME VAR_2;
    LONGLONG VAR_3;

    FUNC_1(0xdeadbeef);
    VAR_1 = FUNC_2(VAR_0, &VAR_2);
    FUNC_3(VAR_1, "SystemTimeToFileTime error %u\n", FUNC_0());

    VAR_3 = ((LONGLONG)VAR_2.dwHighDateTime << 32) + VAR_2.dwLowDateTime;
    VAR_3 /= (LONGLONG)600000000;
    return VAR_3;
}
