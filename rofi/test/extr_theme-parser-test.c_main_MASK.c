
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Suite ;
typedef int SRunner ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int * FUNC_7 () ;

int FUNC_8 ( int VAR_5, char ** VAR_6 )
{
    FUNC_0 ( VAR_5, VAR_6 );

    if ( FUNC_2 ( VAR_3, "C" ) == ((void*)0) ) {
        FUNC_1 ( VAR_4, "Failed to set locale.\n" );
        return VAR_1;
    }


    Suite *VAR_7;
    SRunner *VAR_8;

    VAR_7 = FUNC_7();
    VAR_8 = FUNC_3(VAR_7);

    FUNC_6(VAR_8, VAR_0);
    int VAR_9 = FUNC_5(VAR_8);
    FUNC_4(VAR_8);

    return (VAR_9 == 0) ? VAR_2 : VAR_1;
}
