
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {scalar_t__ value; } ;
struct hash {int (* hash_value ) (void const*) ;} ;


 struct hash_entry* FUNC_0 (struct hash const*,void const*,int ) ;
 int FUNC_1 (void const*) ;

void *FUNC_2(const struct hash *VAR_0, const void *VAR_1)
{
    const struct hash_entry *VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_0->hash_value(VAR_1));
    if (VAR_2)
        return (void *)VAR_2->value;
    return ((void*)0);
}
