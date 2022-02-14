
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t nCustHeaders; TYPE_2__* custHeaders; } ;
typedef TYPE_1__ http_request_t ;
struct TYPE_7__ {int lpszValue; int lpszField; } ;
typedef int HTTPHEADERW ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(http_request_t *VAR_2, DWORD VAR_3)
{
    if( VAR_2->nCustHeaders <= 0 )
        return VAR_0;
    if( VAR_3 >= VAR_2->nCustHeaders )
        return VAR_0;
    VAR_2->nCustHeaders--;

    FUNC_0(VAR_2->custHeaders[VAR_3].lpszField);
    FUNC_0(VAR_2->custHeaders[VAR_3].lpszValue);

    FUNC_1( &VAR_2->custHeaders[VAR_3], &VAR_2->custHeaders[VAR_3+1],
             (VAR_2->nCustHeaders - VAR_3)* sizeof(HTTPHEADERW) );
    FUNC_2( &VAR_2->custHeaders[VAR_2->nCustHeaders], 0, sizeof(HTTPHEADERW) );

    return VAR_1;
}
