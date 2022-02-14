
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vtbl_method_t ;
struct TYPE_3__ {int Release; int AddRef; int QueryInterface; } ;
typedef TYPE_1__ IUnknownVtbl ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int ** VAR_7 ;

__attribute__((used)) static BOOL FUNC_2(IUnknownVtbl *VAR_8, DWORD VAR_9)
{
    const void **VAR_10 = (const void **)(VAR_8 + 1);
    DWORD VAR_11, VAR_12;

    if (VAR_9 - 3 > VAR_0 * VAR_2)
    {
        FUNC_0( "%u methods not supported\n", VAR_9 );
        return VAR_1;
    }
    VAR_8->QueryInterface = VAR_5;
    VAR_8->AddRef = VAR_4;
    VAR_8->Release = VAR_6;
    for (VAR_11 = 0; VAR_11 < (VAR_9 - 3 + VAR_0 - 1) / VAR_0; VAR_11++)
    {
        const vtbl_method_t *VAR_13 = VAR_7[VAR_11];
        if (!VAR_13 && !(VAR_13 = FUNC_1( VAR_11 ))) return VAR_1;
        for (VAR_12 = 0; VAR_12 < VAR_0 && VAR_12 < VAR_9 - 3 - VAR_11 * VAR_0; VAR_12++) *VAR_10++ = &VAR_13[VAR_12];
    }
    return VAR_3;
}
