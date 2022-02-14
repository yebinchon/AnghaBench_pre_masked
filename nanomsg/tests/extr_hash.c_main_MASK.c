
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nn_hash_item {int dummy; } ;
struct nn_hash {int dummy; } ;


 struct nn_hash_item* FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nn_hash_item*) ;
 int FUNC_3 (struct nn_hash*,struct nn_hash_item*) ;
 struct nn_hash_item* FUNC_4 (struct nn_hash*,int) ;
 int FUNC_5 (struct nn_hash*) ;
 int FUNC_6 (struct nn_hash*,int,struct nn_hash_item*) ;
 int FUNC_7 (struct nn_hash_item*) ;
 int FUNC_8 (struct nn_hash*) ;

int FUNC_9 ()
{
    struct nn_hash VAR_0;
    uint32_t VAR_1;
    struct nn_hash_item *VAR_2;
    struct nn_hash_item *VAR_3 = ((void*)0);

    FUNC_5 (&VAR_0);


    for (VAR_1 = 0; VAR_1 != 10000; ++VAR_1) {
        VAR_2 = FUNC_0 (sizeof (struct nn_hash_item), "item");
        FUNC_1 (VAR_2);
        if (VAR_1 == 5000)
            VAR_3 = VAR_2;
        FUNC_7 (VAR_2);
        FUNC_6 (&VAR_0, VAR_1, VAR_2);
    }


    FUNC_1 (FUNC_4 (&VAR_0, 5000) == VAR_3);


    for (VAR_1 = 0; VAR_1 != 10000; ++VAR_1) {
        VAR_2 = FUNC_4 (&VAR_0, VAR_1);
        FUNC_3 (&VAR_0, VAR_2);
        FUNC_2 (VAR_2);
    }
    FUNC_8 (&VAR_0);

    return 0;
}
