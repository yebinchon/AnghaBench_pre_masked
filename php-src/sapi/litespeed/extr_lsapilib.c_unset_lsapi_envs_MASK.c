
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char*** FUNC_0 () ;
 char** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    char **VAR_2;



    VAR_2 = VAR_0;

    while( VAR_2 != ((void*)0) && *VAR_2 != ((void*)0) )
    {
        if (!FUNC_1(*VAR_2, "LSAPI_", 6) || !FUNC_1( *VAR_2, "PHP_LSAPI_", 10 )
            || (!FUNC_1( *VAR_2, "PHPRC=", 6 )&&(!VAR_1)))
        {
            char ** VAR_3 = VAR_2;
            do
                *VAR_3 = VAR_3[1];
            while( *VAR_3++ );
        }
        else
            ++VAR_2;
    }
}
