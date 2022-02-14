
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* array; } ;
struct TYPE_6__ {int flags; scalar_t__ type; size_t len; scalar_t__ proto; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(RedisModuleCallReply *VAR_3, int VAR_4){



    if (!VAR_4 && VAR_3->flags & VAR_0) return;

    if (!(VAR_3->flags & VAR_1)) {
        if (VAR_3->type == VAR_2) {
            size_t VAR_5;
            for (VAR_5 = 0; VAR_5 < VAR_3->len; VAR_5++)
                FUNC_2(VAR_3->val.array+VAR_5,1);
            FUNC_1(VAR_3->val.array);
        }
    }





    if (!(VAR_3->flags & VAR_0)) {
        if (VAR_3->proto) FUNC_0(VAR_3->proto);
        FUNC_1(VAR_3);
    }
}
