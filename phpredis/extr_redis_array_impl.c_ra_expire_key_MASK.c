
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_2__ {int function_table; } ;


 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *,int *,int *,int,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static zend_bool
FUNC_4(const char *VAR_1, int VAR_2, zval *VAR_3, long VAR_4) {

    zval VAR_5, VAR_6, VAR_7[2];

    if (VAR_4 > 0)
    {

        FUNC_1(&VAR_5, "EXPIRE", 6);
        FUNC_1(&VAR_7[0], VAR_1, VAR_2);
        FUNC_0(&VAR_7[1], VAR_4);
        FUNC_2(&VAR_0->function_table, VAR_3, &VAR_5, &VAR_6, 2, VAR_7);
        FUNC_3(&VAR_5);
        FUNC_3(&VAR_7[0]);
        FUNC_3(&VAR_6);
    }

    return 1;
}
