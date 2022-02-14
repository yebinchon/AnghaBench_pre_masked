
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (int*,int) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static char *FUNC_2( size_t VAR_0 )
{
    static char *VAR_1[32];
    static int VAR_2;
    char *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0( &VAR_2, 1 ) % (sizeof(VAR_1)/sizeof(VAR_1[0]));
    if ((VAR_3 = FUNC_1( VAR_1[VAR_4], VAR_0 ))) VAR_1[VAR_4] = VAR_3;
    return VAR_3;
}
