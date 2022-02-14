
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ FORMSTR ;
typedef int FORMAT ;
typedef int DWORD ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static WCHAR *FUNC_5( FORMAT *VAR_0, FORMSTR *VAR_1, int *VAR_2 )
{
    WCHAR *VAR_3, *VAR_4 = ((void*)0);
    DWORD VAR_5;

    if (!(VAR_3 = FUNC_3((VAR_1->len + 1) * sizeof(WCHAR)))) return ((void*)0);
    FUNC_2(VAR_3, FUNC_1(VAR_0, VAR_1), VAR_1->len + 1);

    if ((VAR_5 = FUNC_0( VAR_3, ((void*)0), 0 )))
    {
        VAR_5++;
        if ((VAR_4 = FUNC_3( VAR_5 * sizeof(WCHAR) )))
            *VAR_2 = FUNC_0( VAR_3, VAR_4, VAR_5 );
    }
    FUNC_4( VAR_3 );
    return VAR_4;
}
