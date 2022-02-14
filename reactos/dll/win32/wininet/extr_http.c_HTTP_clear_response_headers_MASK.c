
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t nCustHeaders; int headers_section; TYPE_1__* custHeaders; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_5__ {int wFlags; int lpszValue; int lpszField; } ;
typedef size_t DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( http_request_t *VAR_1 )
{
    DWORD VAR_2;

    FUNC_0( &VAR_1->headers_section );

    for( VAR_2=0; VAR_2<VAR_1->nCustHeaders; VAR_2++)
    {
        if( !VAR_1->custHeaders[VAR_2].lpszField )
            continue;
        if( !VAR_1->custHeaders[VAR_2].lpszValue )
            continue;
        if ( VAR_1->custHeaders[VAR_2].wFlags & VAR_0 )
            continue;
        FUNC_1( VAR_1, VAR_2 );
        VAR_2--;
    }

    FUNC_2( &VAR_1->headers_section );
}
