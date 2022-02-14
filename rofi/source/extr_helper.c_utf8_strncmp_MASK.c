
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*,int,int ) ;
 char* FUNC_3 (char*,size_t) ;

int FUNC_4 ( const char* VAR_1, const char* VAR_2, size_t VAR_3 )
{
    char *VAR_4 = FUNC_2 ( VAR_1, -1, VAR_0 );
    char *VAR_5 = FUNC_2 ( VAR_2, -1, VAR_0 );
    *FUNC_3 ( VAR_4, VAR_3 ) = '\0';
    *FUNC_3 ( VAR_5, VAR_3 ) = '\0';
    int VAR_6 = FUNC_1 ( VAR_4, VAR_5 );
    FUNC_0 ( VAR_4 );
    FUNC_0 ( VAR_5 );
    return VAR_6;
}
