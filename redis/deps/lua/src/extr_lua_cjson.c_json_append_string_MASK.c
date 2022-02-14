
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf_t ;
typedef int lua_State ;


 char** VAR_0 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_1, strbuf_t *VAR_2, int VAR_3)
{
    const char *VAR_4;
    int VAR_5;
    const char *VAR_6;
    size_t VAR_7;

    VAR_6 = FUNC_0(VAR_1, VAR_3, &VAR_7);





    FUNC_3(VAR_2, VAR_7 * 6 + 2);

    FUNC_1(VAR_2, '\"');
    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
        VAR_4 = VAR_0[(unsigned char)VAR_6[VAR_5]];
        if (VAR_4)
            FUNC_2(VAR_2, VAR_4);
        else
            FUNC_1(VAR_2, VAR_6[VAR_5]);
    }
    FUNC_1(VAR_2, '\"');
}
