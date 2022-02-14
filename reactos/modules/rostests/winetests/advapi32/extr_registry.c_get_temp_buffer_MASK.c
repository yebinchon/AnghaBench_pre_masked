
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;
typedef int UINT ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 char* FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static char *FUNC_3( int VAR_0 )
{
    static char *VAR_1[32];
    static UINT VAR_2;
    char *VAR_3;
    UINT VAR_4;

    VAR_4 = ++VAR_2 % (sizeof(VAR_1)/sizeof(VAR_1[0]));
    if (VAR_1[VAR_4])
        VAR_3 = FUNC_2( FUNC_0(), 0, VAR_1[VAR_4], VAR_0 );
    else
        VAR_3 = FUNC_1( FUNC_0(), 0, VAR_0 );
    if (VAR_3) VAR_1[VAR_4] = VAR_3;
    return VAR_3;
}
