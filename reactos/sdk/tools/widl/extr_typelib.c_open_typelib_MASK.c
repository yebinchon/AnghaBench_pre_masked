
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
    char *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_2(VAR_2, ((void*)0));
    if(!VAR_3)
        return FUNC_1(VAR_2, VAR_1 | VAR_0 );

    VAR_4 = FUNC_1(VAR_3, VAR_1 | VAR_0 );
    FUNC_0(VAR_3);
    return VAR_4;
}
