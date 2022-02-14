
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {size_t len; int scheme; int str; } ;
typedef int DWORD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,int ,size_t) ;

__attribute__((used)) static DWORD FUNC_2( const WCHAR *VAR_1 )
{
    unsigned int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
    {
        if (!FUNC_1( VAR_1, VAR_0[VAR_2].str, VAR_0[VAR_2].len ) &&
            (VAR_1[VAR_0[VAR_2].len] == ' ' || !VAR_1[VAR_0[VAR_2].len])) return VAR_0[VAR_2].scheme;
    }
    return 0;
}
