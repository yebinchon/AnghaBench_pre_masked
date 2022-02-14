
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nCustHeaders; TYPE_2__* custHeaders; } ;
typedef TYPE_1__ http_request_t ;
struct TYPE_9__ {int wCount; int wFlags; void* lpszValue; void* lpszField; } ;
typedef TYPE_2__* LPHTTPHEADERW ;
typedef int INT ;
typedef int HTTPHEADERW ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int) ;
 void* FUNC_4 (void*) ;

__attribute__((used)) static DWORD FUNC_5(http_request_t *VAR_2, LPHTTPHEADERW VAR_3)
{
    INT VAR_4;
    LPHTTPHEADERW VAR_5 = ((void*)0);

    FUNC_0("--> %s: %s\n", FUNC_1(VAR_3->lpszField), FUNC_1(VAR_3->lpszValue));
    VAR_4 = VAR_2->nCustHeaders + 1;
    if (VAR_4 > 1)
 VAR_5 = FUNC_3(VAR_2->custHeaders, sizeof(HTTPHEADERW) * VAR_4);
    else
 VAR_5 = FUNC_2(sizeof(HTTPHEADERW) * VAR_4);

    if (!VAR_5)
        return VAR_0;

    VAR_2->custHeaders = VAR_5;
    VAR_2->custHeaders[VAR_4-1].lpszField = FUNC_4(VAR_3->lpszField);
    VAR_2->custHeaders[VAR_4-1].lpszValue = FUNC_4(VAR_3->lpszValue);
    VAR_2->custHeaders[VAR_4-1].wFlags = VAR_3->wFlags;
    VAR_2->custHeaders[VAR_4-1].wCount= VAR_3->wCount;
    VAR_2->nCustHeaders++;

    return VAR_1;
}
