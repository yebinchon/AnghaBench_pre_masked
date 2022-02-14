
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qstr ;
typedef int mp_obj_t ;
struct TYPE_6__ {size_t alloc; TYPE_1__* table; } ;
typedef TYPE_2__ mp_map_t ;
struct TYPE_7__ {TYPE_2__ map; } ;
struct TYPE_5__ {int value; int key; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(mp_obj_t VAR_0) {
    FUNC_0("import all %p\n", VAR_0);


    mp_map_t *VAR_1 = &FUNC_2(VAR_0)->map;
    for (size_t VAR_2 = 0; VAR_2 < VAR_1->alloc; VAR_2++) {
        if (FUNC_1(VAR_1, VAR_2)) {



            const char *VAR_3 = FUNC_4(VAR_1->table[VAR_2].key);
            if (*VAR_3 != '_') {
                qstr VAR_4 = FUNC_3(VAR_1->table[VAR_2].key);
                FUNC_5(VAR_4, VAR_1->table[VAR_2].value);
            }
        }
    }
}
