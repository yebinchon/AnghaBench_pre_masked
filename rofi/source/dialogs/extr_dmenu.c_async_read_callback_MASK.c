
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gsize ;
typedef scalar_t__ gpointer ;
struct TYPE_5__ {int cancel; int separator; int data_input_stream; } ;
typedef int GObject ;
typedef int GError ;
typedef int GDataInputStream ;
typedef int GAsyncResult ;
typedef TYPE_1__ DmenuModePrivateData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int ,int *,int,int ,int ,void (*) (int *,int *,scalar_t__),TYPE_1__*) ;
 char* FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13 ( GObject *VAR_2, GAsyncResult *VAR_3, gpointer VAR_4 )
{
    GDataInputStream *VAR_5 = (GDataInputStream *) VAR_2;
    DmenuModePrivateData *VAR_6 = (DmenuModePrivateData *) VAR_4;
    gsize VAR_7;
    char *VAR_8 = FUNC_4 ( VAR_5, VAR_3, &VAR_7, ((void*)0) );
    if ( VAR_8 != ((void*)0) ) {

        FUNC_2 ( VAR_5, ((void*)0), ((void*)0) );
        FUNC_9 ( VAR_6, VAR_8, VAR_7 );
        FUNC_7 ( VAR_8 );
        FUNC_11 ();

        FUNC_3 ( VAR_6->data_input_stream, &( VAR_6->separator ), 1, VAR_0, VAR_6->cancel,
                                              FUNC_13, VAR_6 );
        return;
    }
    else {
        GError *VAR_9 = ((void*)0);


        FUNC_2 ( VAR_5, ((void*)0), &VAR_9 );
        if ( VAR_9 == ((void*)0) ) {

            FUNC_9 ( VAR_6, "", 0 );
            FUNC_11 ();

            FUNC_3 ( VAR_6->data_input_stream, &( VAR_6->separator ), 1, VAR_0, VAR_6->cancel,
                                                  FUNC_13, VAR_6 );
            return;
        }
        else {
            FUNC_6 ( VAR_9 );
        }
    }
    if ( !FUNC_1 ( VAR_6->cancel ) ) {

        FUNC_5 ( "Clearing overlay" );
        FUNC_12 ( FUNC_10 (), ((void*)0) );
        FUNC_8 ( FUNC_0 ( VAR_5 ), VAR_0, VAR_6->cancel, VAR_1, VAR_6 );
    }
}
