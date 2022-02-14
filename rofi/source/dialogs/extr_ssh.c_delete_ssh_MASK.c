
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3 ( const char *VAR_2 )
{
    if ( !VAR_2 || !VAR_2[0] ) {
        return;
    }
    char *VAR_3 = FUNC_0 ( VAR_1, VAR_0, ((void*)0) );
    FUNC_2 ( VAR_3, VAR_2 );
    FUNC_1 ( VAR_3 );
}
