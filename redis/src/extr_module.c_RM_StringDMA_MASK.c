
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; scalar_t__ encoding; char* ptr; } ;
struct TYPE_5__ {TYPE_2__* value; int key; int db; } ;
typedef TYPE_1__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ,TYPE_2__*) ;
 size_t FUNC_1 (char*) ;

char *FUNC_2(RedisModuleKey *VAR_3, size_t *VAR_4, int VAR_5) {




    char *VAR_6 = "<dma-empty-string>";
    if (VAR_3->value == ((void*)0)) {
        *VAR_4 = 0;
        return VAR_6;
    }

    if (VAR_3->value->type != VAR_1) return ((void*)0);



    if ((VAR_5 & VAR_2) || VAR_3->value->encoding != VAR_0)
        VAR_3->value = FUNC_0(VAR_3->db, VAR_3->key, VAR_3->value);

    *VAR_4 = FUNC_1(VAR_3->value->ptr);
    return VAR_3->value->ptr;
}
