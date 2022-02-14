
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int if_index; } ;
struct TYPE_10__ {TYPE_1__ ent; } ;
struct TYPE_11__ {TYPE_2__ if_info; } ;
typedef int NTSTATUS ;
typedef TYPE_3__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_3__**,int*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;

NTSTATUS FUNC_5( HANDLE VAR_2, DWORD VAR_3, IFInfo *VAR_4 ) {
    IFInfo *VAR_5;
    DWORD VAR_6;
    NTSTATUS VAR_7 = FUNC_3( VAR_2, &VAR_5, &VAR_6 );
    int VAR_8;

    if( FUNC_2(VAR_7) )
    {
        for( VAR_8 = 0; VAR_8 < VAR_6; VAR_8++ ) {
            if( VAR_5[VAR_8].if_info.ent.if_index == VAR_3 ) {
                FUNC_4( VAR_4, &VAR_5[VAR_8], sizeof(*VAR_4) );
                break;
            }
        }

        FUNC_1(FUNC_0(), 0, VAR_5);

        return VAR_8 < VAR_6 ? VAR_0 : VAR_1;
    }

    return VAR_7;
}
