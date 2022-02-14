
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {scalar_t__ Handle; int Events; scalar_t__ Status; } ;
typedef int PVOID ;
typedef TYPE_1__* PAFD_HANDLE ;
typedef int NTSTATUS ;
typedef int AFD_HANDLE ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int) ;

PAFD_HANDLE FUNC_5( PAFD_HANDLE VAR_6, UINT VAR_7 ) {
    UINT VAR_8;
    NTSTATUS VAR_9 = VAR_4;

    PAFD_HANDLE VAR_10 = FUNC_1(VAR_3,
                                                    VAR_7 * sizeof(AFD_HANDLE),
                                                    VAR_5);

    for( VAR_8 = 0; VAR_10 && VAR_8 < VAR_7; VAR_8++ ) {
        VAR_10[VAR_8].Status = 0;
        VAR_10[VAR_8].Events = VAR_6[VAR_8].Events;
        VAR_10[VAR_8].Handle = 0;
        if( !VAR_6[VAR_8].Handle ) continue;
        if( FUNC_2(VAR_9) ) {
                VAR_9 = FUNC_3
                    ( (PVOID)VAR_6[VAR_8].Handle,
                      VAR_0,
                      ((void*)0),
                       VAR_1,
                       (PVOID*)&VAR_10[VAR_8].Handle,
                       ((void*)0) );
        }

        if( !FUNC_2(VAR_9) )
        {
            FUNC_0(VAR_2,("Failed to reference handles (0x%x)\n", VAR_9));
            VAR_10[VAR_8].Handle = 0;
        }
    }

    if( !FUNC_2(VAR_9) ) {
        FUNC_4( VAR_10, VAR_7 );
        return ((void*)0);
    }

    return VAR_10;
}
