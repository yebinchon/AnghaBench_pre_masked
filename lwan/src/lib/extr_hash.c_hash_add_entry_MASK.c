
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int dummy; } ;
struct hash {unsigned int (* hash_value ) (void const*) ;} ;


 struct hash_entry* FUNC_0 (struct hash*,void const*,unsigned int) ;
 unsigned int FUNC_1 (void const*) ;

__attribute__((used)) static struct hash_entry *FUNC_2(struct hash *VAR_0, const void *VAR_1)
{
    unsigned int VAR_2 = VAR_0->hash_value(VAR_1);

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
