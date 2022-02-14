
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int function_table; } ;
struct TYPE_4__ {int count; int * hosts; int * redis; } ;
typedef TYPE_1__ RedisArray ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *,int,int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_5(RedisArray *VAR_1, zval *VAR_2, zval *VAR_3, int VAR_4, zval *VAR_5)
{
    zval VAR_6;
    int VAR_7;


    FUNC_3(VAR_2);


    for (VAR_7 = 0; VAR_7 < VAR_1->count; ++VAR_7) {

        FUNC_4(&VAR_0->function_table, &VAR_1->redis[VAR_7], VAR_3, &VAR_6, VAR_4, VAR_5);


        FUNC_2(VAR_2, FUNC_1(VAR_1->hosts[VAR_7]), FUNC_0(VAR_1->hosts[VAR_7]), &VAR_6);
    }
}
