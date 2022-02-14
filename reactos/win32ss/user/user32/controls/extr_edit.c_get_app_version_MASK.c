
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwOSVersionInfoSize; int dwMajorVersion; int dwMinorVersion; } ;
typedef TYPE_1__ OSVERSIONINFOW ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static DWORD FUNC_3(void)
{
    static DWORD VAR_0;
    if (!VAR_0)
    {
        DWORD VAR_1;
        OSVERSIONINFOW VAR_2;
        DWORD VAR_3 = FUNC_0(0);

 VAR_2.dwOSVersionInfoSize = sizeof(OSVERSIONINFOW);
        FUNC_1( &VAR_2 );
        VAR_1 = FUNC_2( VAR_2.dwMinorVersion, VAR_2.dwMajorVersion );


        VAR_0 = VAR_3 < VAR_1 ? VAR_3 : VAR_1;
    }
    return VAR_0;
}
