
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_2__ {int function_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,long) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,int *,int,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static zend_bool
FUNC_7(const char *VAR_2, int VAR_3, zval *VAR_4, zval *VAR_5, long VAR_6) {

    zval VAR_7, VAR_8, VAR_9, VAR_10[3];


    FUNC_1(&VAR_7, "GET", 3);
    FUNC_1(&VAR_10[0], VAR_2, VAR_3);
    FUNC_5(&VAR_1->function_table, VAR_4, &VAR_7, &VAR_9, 1, VAR_10);
    FUNC_6(&VAR_7);

    if(FUNC_4(VAR_9) != VAR_0) {

        FUNC_6(&VAR_10[0]);
        FUNC_6(&VAR_9);
        return 0;
    }


    if (VAR_6 > 0) {
        FUNC_1(&VAR_8, "SETEX", 5);
        FUNC_0(&VAR_10[1], VAR_6);
        FUNC_1(&VAR_10[2], FUNC_3(VAR_9), FUNC_2(VAR_9));
        FUNC_6(&VAR_9);
        FUNC_5(&VAR_1->function_table, VAR_5, &VAR_8, &VAR_9, 3, VAR_10);

        FUNC_6(&VAR_10[2]);
    } else {
        FUNC_1(&VAR_8, "SET", 3);
        FUNC_1(&VAR_10[1], FUNC_3(VAR_9), FUNC_2(VAR_9));
        FUNC_6(&VAR_9);
        FUNC_5(&VAR_1->function_table, VAR_5, &VAR_8, &VAR_9, 2, VAR_10);

        FUNC_6(&VAR_10[1]);
    }
    FUNC_6(&VAR_8);
    FUNC_6(&VAR_10[0]);
    FUNC_6(&VAR_9);

    return 1;
}
