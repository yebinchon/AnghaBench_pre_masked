
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plain_hashmap_entry {void* value; } ;
typedef int Hashmap ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,void const*) ;
 unsigned int FUNC_2 (int *,unsigned int,void const*) ;
 int FUNC_3 (int *) ;
 struct plain_hashmap_entry* FUNC_4 (int *,unsigned int) ;

int FUNC_5(Hashmap *VAR_2, const void *VAR_3, void *VAR_4) {
        struct plain_hashmap_entry *VAR_5;
        unsigned VAR_6, VAR_7;

        FUNC_0(VAR_2);

        VAR_6 = FUNC_1(VAR_2, VAR_3);
        VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_3);
        if (VAR_7 == VAR_1)
                return -VAR_0;

        VAR_5 = FUNC_4(VAR_2, VAR_7);
        VAR_5->value = VAR_4;
        FUNC_3(VAR_2);

        return 0;
}
