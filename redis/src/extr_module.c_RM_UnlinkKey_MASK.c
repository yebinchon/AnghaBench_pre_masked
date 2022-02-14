
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int * value; int key; int db; } ;
typedef TYPE_1__ RedisModuleKey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(RedisModuleKey *VAR_3) {
    if (!(VAR_3->mode & VAR_2)) return VAR_0;
    if (VAR_3->value) {
        FUNC_0(VAR_3->db,VAR_3->key);
        VAR_3->value = ((void*)0);
    }
    return VAR_1;
}
