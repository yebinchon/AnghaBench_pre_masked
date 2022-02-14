
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int if_descrlen; int if_descr; } ;
struct TYPE_6__ {TYPE_1__ ent; } ;
struct TYPE_7__ {TYPE_2__ if_info; } ;
typedef int NTSTATUS ;
typedef TYPE_3__ IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,int ) ;

const char *FUNC_7(DWORD VAR_1)
{
    IFInfo VAR_2;
    HANDLE VAR_3;
    char *VAR_4 = ((void*)0);
    NTSTATUS VAR_5 = FUNC_6( &VAR_3, VAR_0 );

    if( FUNC_2(VAR_5) ) {
        VAR_5 = FUNC_4( VAR_3, VAR_1, &VAR_2 );

        if( FUNC_2(VAR_5) ) {
            VAR_4 = FUNC_1( FUNC_0(), 0,
                                       VAR_2.if_info.ent.if_descrlen + 1 );
            if( VAR_4 ) {
              FUNC_5(VAR_4, VAR_2.if_info.ent.if_descr, VAR_2.if_info.ent.if_descrlen);
              VAR_4[VAR_2.if_info.ent.if_descrlen] = '\0';
            }
        }

        FUNC_3( VAR_3 );
    }

    return VAR_4;
}
