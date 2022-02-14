
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct column {scalar_t__ name; } ;
typedef struct column WCHAR ;
typedef size_t UINT ;


 int FUNC_0 (struct column*) ;

void FUNC_1( struct column *VAR_0, UINT VAR_1 )
{
    UINT VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) { FUNC_0( (WCHAR *)VAR_0[VAR_2].name ); }
    FUNC_0( VAR_0 );
}
