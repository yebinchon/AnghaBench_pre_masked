
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_1__ robj ;
struct TYPE_9__ {int mode; TYPE_1__* value; int key; int db; } ;
typedef TYPE_2__ RedisModuleKey ;






 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(RedisModuleKey *VAR_1) {
    if (!(VAR_1->mode & VAR_0) || VAR_1->value == ((void*)0)) return 0;
    int VAR_2;
    robj *VAR_3 = VAR_1->value;

    switch(VAR_3->type) {
    case 130: VAR_2 = FUNC_2(VAR_3) == 0; break;
    case 129: VAR_2 = FUNC_3(VAR_3) == 0; break;
    case 128: VAR_2 = FUNC_4(VAR_3) == 0; break;
    case 131 : VAR_2 = FUNC_1(VAR_3) == 0; break;
    default: VAR_2 = 0;
    }

    if (VAR_2) {
        FUNC_0(VAR_1->db,VAR_1->key);
        VAR_1->value = ((void*)0);
        return 1;
    } else {
        return 0;
    }
}
