
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_base_entry {int dummy; } ;
typedef int HashmapBase ;


 unsigned int VAR_0 ;
 struct hashmap_base_entry* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *,void const*) ;
 unsigned int FUNC_2 (int *,unsigned int,void const*) ;
 void* FUNC_3 (int *,struct hashmap_base_entry*) ;
 int FUNC_4 (int *,unsigned int) ;

void *FUNC_5(HashmapBase *VAR_1, const void *VAR_2) {
        struct hashmap_base_entry *VAR_3;
        unsigned VAR_4, VAR_5;
        void *VAR_6;

        if (!VAR_1)
                return ((void*)0);

        VAR_4 = FUNC_1(VAR_1, VAR_2);
        VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2);
        if (VAR_5 == VAR_0)
                return ((void*)0);

        VAR_3 = FUNC_0(VAR_1, VAR_5);
        VAR_6 = FUNC_3(VAR_1, VAR_3);
        FUNC_4(VAR_1, VAR_5);

        return VAR_6;
}
