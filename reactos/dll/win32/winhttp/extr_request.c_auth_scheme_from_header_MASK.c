
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {size_t len; int scheme; int str; } ;
typedef int DWORD ;


 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static DWORD FUNC_1( WCHAR *VAR_2 )
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if (!FUNC_0( VAR_2, VAR_0[VAR_3].str, VAR_0[VAR_3].len ) &&
            (VAR_2[VAR_0[VAR_3].len] == ' ' || !VAR_2[VAR_0[VAR_3].len])) return VAR_0[VAR_3].scheme;
    }
    return 0;
}
