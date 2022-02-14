
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_value {size_t len; char* value; } ;


 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static void FUNC_1(struct lwan_value *VAR_0, size_t VAR_1)
{
    if (VAR_1 > VAR_0->len) {
        char *VAR_2 = FUNC_0(VAR_0->value, VAR_0->len);

        if (VAR_2)
            VAR_0->value = VAR_2;
    }
}
