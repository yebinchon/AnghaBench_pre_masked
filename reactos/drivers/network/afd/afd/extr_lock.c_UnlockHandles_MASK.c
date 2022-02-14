
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ Handle; } ;
typedef int PVOID ;
typedef TYPE_1__* PAFD_HANDLE ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

VOID FUNC_2( PAFD_HANDLE VAR_1, UINT VAR_2 ) {
    UINT VAR_3;

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ ) {
        if( VAR_1[VAR_3].Handle )
            FUNC_1( (PVOID)VAR_1[VAR_3].Handle );
    }

    FUNC_0(VAR_1, VAR_0);
    VAR_1 = ((void*)0);
}
