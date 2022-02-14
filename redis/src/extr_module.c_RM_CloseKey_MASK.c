
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int ctx; int key; int db; } ;
typedef TYPE_1__ RedisModuleKey ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(RedisModuleKey *VAR_2) {
    if (VAR_2 == ((void*)0)) return;
    int VAR_3 = FUNC_1(VAR_2->ctx);
    if ((VAR_2->mode & VAR_1) && VAR_3)
        FUNC_4(VAR_2->db,VAR_2->key);

    FUNC_0(VAR_2);
    FUNC_3(VAR_2->key);
    FUNC_2(VAR_2->ctx,VAR_0,VAR_2);
    FUNC_5(VAR_2);
}
