
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_key_value_array {int dummy; } ;
struct lwan_key_value {char* key; void* value; } ;
struct lwan_array {struct lwan_key_value* elements; int base; } ;
typedef int k ;


 scalar_t__ FUNC_0 (struct lwan_key_value*) ;
 struct lwan_key_value* FUNC_1 (struct lwan_key_value*,int ,struct lwan_key_value*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void *
FUNC_2(const struct lwan_key_value_array *VAR_1, const char *VAR_2)
{
    const struct lwan_array *VAR_3 = (const struct lwan_array *)VAR_1;

    if (FUNC_0(VAR_3->elements)) {
        struct lwan_key_value VAR_4 = { .key = (char *)VAR_2 };
        struct lwan_key_value *VAR_5;

        VAR_5 = FUNC_1(&VAR_4, VAR_3->base, VAR_3->elements, sizeof(VAR_4), VAR_0);
        if (FUNC_0(VAR_5))
            return VAR_5->value;
    }

    return ((void*)0);
}
