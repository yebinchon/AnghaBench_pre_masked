
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int if_index; } ;
struct TYPE_6__ {TYPE_1__ ent; } ;
struct TYPE_7__ {TYPE_2__ if_info; } ;
typedef int * PDWORD ;
typedef int NTSTATUS ;
typedef TYPE_3__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;

DWORD FUNC_4(const char *VAR_1, PDWORD VAR_2)
{
    IFInfo VAR_3;
    HANDLE VAR_4;
    NTSTATUS VAR_5 = FUNC_3( &VAR_4, VAR_0 );

    if( FUNC_0(VAR_5) ) {
        VAR_5 = FUNC_2( VAR_4, (char *)VAR_1, &VAR_3 );

        if( FUNC_0(VAR_5) ) {
            *VAR_2 = VAR_3.if_info.ent.if_index;
        }

        FUNC_1( VAR_4 );
    }

    return VAR_5;
}
