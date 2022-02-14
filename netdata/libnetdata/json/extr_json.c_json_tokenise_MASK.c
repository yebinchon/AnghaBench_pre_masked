
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsmntok_t ;
typedef int jsmn_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t,int *,int) ;
 int VAR_3 ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int *,int) ;

jsmntok_t *FUNC_6(char *VAR_4, size_t VAR_5, size_t *VAR_6)
{
    int VAR_7 = VAR_3;
    if(!VAR_4 || !VAR_5) {
        FUNC_0("JSON: json string is empty.");
        return ((void*)0);
    }

    jsmn_parser VAR_8;
    FUNC_2(&VAR_8);

    jsmntok_t *VAR_9 = FUNC_4(sizeof(jsmntok_t) * VAR_7);
    if(!VAR_9) return ((void*)0);

    int VAR_10 = FUNC_3(&VAR_8, VAR_4, VAR_5, VAR_9, VAR_7);
    while (VAR_10 == VAR_1) {
        VAR_7 *= 2;
        jsmntok_t *VAR_11 = FUNC_5(VAR_9, sizeof(jsmntok_t) * VAR_7);
        if(!VAR_11) {
            FUNC_1(VAR_9);
            return ((void*)0);
        }
        VAR_9 = VAR_11;
        VAR_10 = FUNC_3(&VAR_8, VAR_4, VAR_5, VAR_9, VAR_7);
    }

    if (VAR_10 == VAR_0) {
        FUNC_0("JSON: Invalid json string.");
        FUNC_1(VAR_9);
        return ((void*)0);
    }
    else if (VAR_10 == VAR_2) {
        FUNC_0("JSON: Truncated JSON string.");
        FUNC_1(VAR_9);
        return ((void*)0);
    }

    if(VAR_6) *VAR_6 = (size_t)VAR_10;

    if(VAR_3 < VAR_7) VAR_3 = VAR_7;
    return VAR_9;
}
