
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int threads; } ;
struct TYPE_6__ {int message; } ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,long) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int,int ,TYPE_1__**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,TYPE_1__**) ;
 int FUNC_7 (char*,int ) ;
 int VAR_4 ;
 long FUNC_8 (int ) ;
 int VAR_5 ;

void FUNC_9 ( void )
{
    FUNC_1 ( "Setup Threadpool, start" );
    if ( VAR_3.threads == 0 ) {
        VAR_3.threads = 1;
        long VAR_6 = FUNC_8 ( VAR_2 );
        if ( VAR_6 > 0 ) {
            VAR_3.threads = FUNC_0 ( VAR_6, 128l );
        }
    }

    GError *VAR_7 = ((void*)0);
    VAR_5 = FUNC_4 ( VAR_4, ((void*)0), VAR_3.threads, VAR_1, &VAR_7 );
    if ( VAR_7 == ((void*)0) ) {

        FUNC_5 ( 60000 );

        FUNC_6 ( VAR_5, VAR_3.threads, &VAR_7 );
    }

    if ( VAR_7 != ((void*)0) ) {
        FUNC_7 ( "Failed to setup thread pool: '%s'", VAR_7->message );
        FUNC_3 ( VAR_7 );
        FUNC_2 ( VAR_0 );
    }
    FUNC_1 ( "Setup Threadpool, done" );
}
