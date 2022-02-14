
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {int count; struct array* ptr; } ;
typedef struct array WCHAR ;
typedef int UINT ;
typedef scalar_t__ CIMTYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct array*) ;

void FUNC_2( struct array *VAR_2, CIMTYPE VAR_3 )
{
    UINT VAR_4, VAR_5;

    if (!VAR_2) return;
    if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
    {
        VAR_5 = FUNC_0( VAR_3 );
        for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) FUNC_1( *(WCHAR **)((char *)VAR_2->ptr + VAR_4 * VAR_5) );
    }
    FUNC_1( VAR_2->ptr );
    FUNC_1( VAR_2 );
}
