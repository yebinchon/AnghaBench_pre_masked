
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int robj ;
typedef int moduleType ;
struct TYPE_4__ {int mode; int * value; int key; int db; scalar_t__ iter; } ;
typedef TYPE_1__ RedisModuleKey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;

int FUNC_4(RedisModuleKey *VAR_3, moduleType *VAR_4, void *VAR_5) {
    if (!(VAR_3->mode & VAR_2) || VAR_3->iter) return VAR_0;
    FUNC_0(VAR_3);
    robj *VAR_6 = FUNC_1(VAR_4,VAR_5);
    FUNC_3(VAR_3->db,VAR_3->key,VAR_6);
    FUNC_2(VAR_6);
    VAR_3->value = VAR_6;
    return VAR_1;
}
