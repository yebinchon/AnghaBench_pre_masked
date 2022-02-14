
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {int list_compress_depth; int list_max_ziplist_size; } ;
struct TYPE_10__ {int mode; TYPE_1__* value; int key; int db; } ;
typedef TYPE_2__ RedisModuleKey ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_3__ VAR_3 ;

int FUNC_5(RedisModuleKey *VAR_4, int VAR_5) {
    robj *VAR_6;


    if (!(VAR_4->mode & VAR_2) || VAR_4->value)
        return VAR_0;

    switch(VAR_5) {
    case 129:
        VAR_6 = FUNC_1();
        FUNC_4(VAR_6->ptr, VAR_3.list_max_ziplist_size,
                            VAR_3.list_compress_depth);
        break;
    case 128:
        VAR_6 = FUNC_2();
        break;
    case 130:
        VAR_6 = FUNC_0();
        break;
    default: return VAR_0;
    }
    FUNC_3(VAR_4->db,VAR_4->key,VAR_6);
    VAR_4->value = VAR_6;
    return VAR_1;
}
