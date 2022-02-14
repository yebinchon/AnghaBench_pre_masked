
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_llist ;
typedef int redisSlotRange ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (size_t,int) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static redisSlotRange *FUNC_5(zend_llist *VAR_0, size_t *VAR_1) {
    redisSlotRange *VAR_2, *VAR_3;
    size_t VAR_4 = 0;

    *VAR_1 = FUNC_2(VAR_0);
    VAR_2 = FUNC_1(*VAR_1 * sizeof(*VAR_2), 1);

    VAR_3 = FUNC_3(VAR_0);
    while (VAR_3) {
        FUNC_0(&VAR_2[VAR_4++], VAR_3, sizeof(*VAR_3));
        VAR_3 = FUNC_4(VAR_0);
     }

    return VAR_2;
}
