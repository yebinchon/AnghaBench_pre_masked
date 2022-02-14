
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int if_info; } ;
struct TYPE_5__ {int bDescr; int * wszName; } ;
typedef TYPE_1__* PMIB_IFROW ;
typedef int NTSTATUS ;
typedef TYPE_2__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ) ;

DWORD FUNC_6(const char *VAR_2, PMIB_IFROW VAR_3)
{
    HANDLE VAR_4;
    IFInfo VAR_5;
    NTSTATUS VAR_6 = FUNC_5( &VAR_4, VAR_0 );

    FUNC_1("Called.\n");

    if( FUNC_0(VAR_6) ) {
        VAR_6 = FUNC_3( VAR_4, (char *)VAR_2, &VAR_5 );

        if( FUNC_0(VAR_6) ) {
            FUNC_4( &VAR_3->wszName[VAR_1],
                    &VAR_5.if_info,
                    sizeof(VAR_5.if_info) );
        }

        FUNC_1("entry->bDescr = %s\n", VAR_3->bDescr);

        FUNC_2( VAR_4 );
    }

    return VAR_6;
}
