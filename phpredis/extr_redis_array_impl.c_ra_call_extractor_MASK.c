
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_3__ {int z_fun; } ;
typedef TYPE_1__ RedisArray ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ,int *,int *,int *,int,int *) ;
 int FUNC_6 (int *,int *,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

zend_string *
FUNC_9(RedisArray *VAR_3, const char *VAR_4, int VAR_5)
{
    zend_string *VAR_6 = ((void*)0);
    zval VAR_7, VAR_8;


    if (!FUNC_6(&VAR_3->z_fun, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0))) {
        FUNC_4(((void*)0), VAR_0, "Could not call extractor function");
        return ((void*)0);
    }

    FUNC_1(&VAR_7);

    FUNC_2(&VAR_8, VAR_4, VAR_5);
    FUNC_5(FUNC_0(VAR_2), ((void*)0), &VAR_3->z_fun, &VAR_7, 1, &VAR_8);

    if (FUNC_3(VAR_7) == VAR_1) {
        VAR_6 = FUNC_8(&VAR_7);
    }

    FUNC_7(&VAR_8);
    FUNC_7(&VAR_7);
    return VAR_6;
}
