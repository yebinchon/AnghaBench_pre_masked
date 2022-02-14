
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef int GString ;
typedef TYPE_1__ GList ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_9 (int ) ;
 int * VAR_6 ;
 int FUNC_10 (int ) ;
 unsigned int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int * VAR_8 ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15 ()
{
    for ( unsigned int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ ) {
        FUNC_9 ( VAR_6[VAR_9] );
    }
    FUNC_14 ();
    if ( VAR_5 != ((void*)0) ) {
        FUNC_7 ( VAR_5 );
        VAR_5 = ((void*)0);
    }

    FUNC_2 ();

    FUNC_10 ( VAR_1 );


    FUNC_1 ();
    FUNC_3 ( VAR_6 );

    FUNC_3 ( VAR_2 );
    FUNC_3 ( VAR_3 );

    if ( VAR_4 ) {
        for ( GList *VAR_10 = FUNC_4 ( VAR_4 );
              VAR_10 != ((void*)0); VAR_10 = FUNC_6 ( VAR_10 ) ) {
            FUNC_8 ( (GString *) VAR_10->data, VAR_0 );
        }
        FUNC_5 ( VAR_4 );
    }

    if ( VAR_8 ) {
        FUNC_13 ( VAR_8 );
        VAR_8 = ((void*)0);
    }
    FUNC_0 ();
    FUNC_11 ( );
    FUNC_12 ( );
}
