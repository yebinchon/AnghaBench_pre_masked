
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gpointer ;
typedef int gchar ;
typedef int gboolean ;
typedef int GString ;
typedef int GMatchInfo ;
typedef int GHashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static gboolean FUNC_5 ( const GMatchInfo *VAR_1, GString *VAR_2, gpointer VAR_3 )
{
    gchar *VAR_4;

    int VAR_5 = FUNC_3(VAR_1);

    if ( VAR_5 == 5 ) {
        VAR_4 = FUNC_2 ( VAR_1, 4);
        if ( VAR_4 != ((void*)0) ) {

            gchar *VAR_6 = FUNC_1 ( (GHashTable *) VAR_3, VAR_4 );
            if ( VAR_6 != ((void*)0) ) {

                FUNC_4 ( VAR_2, VAR_6 );
            }

            FUNC_0 ( VAR_4 );
        }
    }

    else if ( VAR_5 == 4 ) {
        VAR_4 = FUNC_2 ( VAR_1, 2);
        if ( VAR_4 != ((void*)0) ) {

            gchar *VAR_7 = FUNC_1 ( (GHashTable *) VAR_3, VAR_4 );
            if ( VAR_7 != ((void*)0) ) {

                gchar *VAR_8 = FUNC_2 (VAR_1, 1);
                FUNC_4 ( VAR_2, VAR_8 );
                FUNC_0 (VAR_8 );

                FUNC_4 ( VAR_2, VAR_7 );

                gchar *VAR_9 = FUNC_2 (VAR_1, 3);
                FUNC_4 ( VAR_2, VAR_9 );
                FUNC_0 (VAR_9 );
            }

            FUNC_0 ( VAR_4 );
        }
    }


    return VAR_0;
}
