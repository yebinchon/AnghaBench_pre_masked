
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key; } ;
struct plain_hashmap_entry {TYPE_1__ b; void* value; } ;
typedef int Hashmap ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *,void const*) ;
 unsigned int FUNC_1 (int *,unsigned int,void const*) ;
 struct plain_hashmap_entry* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;

void *FUNC_4(Hashmap *VAR_1, const void *VAR_2, void **VAR_3) {
        struct plain_hashmap_entry *VAR_4;
        unsigned VAR_5, VAR_6;
        void *VAR_7;

        if (!VAR_1) {
                if (VAR_3)
                        *VAR_3 = ((void*)0);
                return ((void*)0);
        }

        VAR_5 = FUNC_0(VAR_1, VAR_2);
        VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_2);
        if (VAR_6 == VAR_0) {
                if (VAR_3)
                        *VAR_3 = ((void*)0);
                return ((void*)0);
        }

        VAR_4 = FUNC_2(VAR_1, VAR_6);
        VAR_7 = VAR_4->value;
        if (VAR_3)
                *VAR_3 = (void*) VAR_4->b.key;

        FUNC_3(VAR_1, VAR_6);

        return VAR_7;
}
