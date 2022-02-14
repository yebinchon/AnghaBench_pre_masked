
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef int LPBYTE ;
typedef TYPE_1__ FILETIME ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static DWORD FUNC_1( LPBYTE VAR_0, DWORD VAR_1, const FILETIME *VAR_2 )
{
    FUNC_0( VAR_0, VAR_1, VAR_2->dwLowDateTime );
    FUNC_0( VAR_0, VAR_1 + 4, VAR_2->dwHighDateTime );
    return 8;
}
