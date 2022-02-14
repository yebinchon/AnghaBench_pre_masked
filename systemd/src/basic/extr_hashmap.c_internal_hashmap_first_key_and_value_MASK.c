
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_base_entry {scalar_t__ key; } ;
typedef int HashmapBase ;


 unsigned int VAR_0 ;
 struct hashmap_base_entry* FUNC_0 (int *,unsigned int) ;
 void* FUNC_1 (int *,struct hashmap_base_entry*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;

void *FUNC_4(HashmapBase *VAR_1, bool VAR_2, void **VAR_3) {
        struct hashmap_base_entry *VAR_4;
        void *VAR_5, *VAR_6;
        unsigned VAR_7;

        VAR_7 = FUNC_2(VAR_1);
        if (VAR_7 == VAR_0) {
                if (VAR_3)
                        *VAR_3 = ((void*)0);
                return ((void*)0);
        }

        VAR_4 = FUNC_0(VAR_1, VAR_7);
        VAR_5 = (void*) VAR_4->key;
        VAR_6 = FUNC_1(VAR_1, VAR_4);

        if (VAR_2)
                FUNC_3(VAR_1, VAR_7);

        if (VAR_3)
                *VAR_3 = VAR_5;

        return VAR_6;
}
