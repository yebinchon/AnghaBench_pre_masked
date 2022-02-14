
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_10__ {int mode; TYPE_1__* value; int key; int db; } ;
typedef TYPE_2__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (int ,int ,size_t) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;

int FUNC_10(RedisModuleKey *VAR_4, size_t VAR_5) {
    if (!(VAR_4->mode & VAR_3)) return VAR_1;
    if (VAR_4->value && VAR_4->value->type != VAR_0) return VAR_1;
    if (VAR_5 > 512*1024*1024) return VAR_1;



    if (VAR_4->value == ((void*)0) && VAR_5 == 0) return VAR_2;

    if (VAR_4->value == ((void*)0)) {

        robj *VAR_6 = FUNC_0(VAR_0,FUNC_7(((void*)0), VAR_5));
        FUNC_9(VAR_4->db,VAR_4->key,VAR_6);
        VAR_4->value = VAR_6;
        FUNC_2(VAR_6);
    } else {

        VAR_4->value = FUNC_1(VAR_4->db, VAR_4->key, VAR_4->value);
        size_t VAR_7 = FUNC_6(VAR_4->value->ptr);
        if (VAR_5 > VAR_7) {
            VAR_4->value->ptr = FUNC_5(VAR_4->value->ptr,VAR_5);
        } else if (VAR_5 < VAR_7) {
            FUNC_8(VAR_4->value->ptr,0,VAR_5-1);

            if (FUNC_6(VAR_4->value->ptr) < FUNC_4(VAR_4->value->ptr))
                VAR_4->value->ptr = FUNC_3(VAR_4->value->ptr);
        }
    }
    return VAR_2;
}
