
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_pair {char* key; int key_len; char* value; int value_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
    char *VAR_2,
    struct config_pair *VAR_3)
{
    char *VAR_4 = VAR_2;
    int VAR_5 = VAR_1;


    VAR_4 = FUNC_2(VAR_2, '#');
    if (VAR_4) *VAR_4 = 0;


    VAR_4 = VAR_2;
    while (FUNC_1(*VAR_4)) VAR_4++;
    VAR_3->key = VAR_4;

    VAR_4 = FUNC_2(VAR_4, '=');
    if (VAR_4 == ((void*)0)) {
        FUNC_0("missing '='\n");
        VAR_5 = VAR_0;
        goto out;
    }


    VAR_3->key_len = VAR_4 - VAR_3->key;
    while (VAR_3->key_len && FUNC_1(VAR_3->key[VAR_3->key_len-1]))
        VAR_3->key_len--;

    if (VAR_3->key_len <= 0) {
        FUNC_0("empty key\n");
        VAR_5 = VAR_0;
        goto out;
    }


    VAR_4++;
    while (FUNC_1(*VAR_4)) VAR_4++;

    if (*VAR_4 == 0) {
        FUNC_0("end of line looking for value\n");
        VAR_5 = VAR_0;
        goto out;
    }

    if (*VAR_4 == '\"') {

        VAR_3->value = VAR_4 + 1;
        VAR_4 = FUNC_2(VAR_3->value, '\"');
        if (VAR_4 == ((void*)0)) {
            FUNC_0("no matching '\"'\n");
            VAR_5 = VAR_0;
            goto out;
        }
        VAR_3->value_len = VAR_4 - VAR_3->value;
    } else {
        VAR_3->value = VAR_4;
        VAR_3->value_len = FUNC_3(VAR_3->value);


        while (VAR_3->value_len && FUNC_1(VAR_3->value[VAR_3->value_len-1]))
            VAR_3->value_len--;
    }


    ((char*)VAR_3->key)[VAR_3->key_len] = 0;
    ((char*)VAR_3->value)[VAR_3->value_len] = 0;
out:
    return VAR_5;
}
