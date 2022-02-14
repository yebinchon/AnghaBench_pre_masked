
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zsl; int dict; } ;
typedef TYPE_1__ zset ;
struct TYPE_6__ {int encoding; TYPE_1__* ptr; } ;
typedef TYPE_2__ robj ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(robj *VAR_0) {
    zset *VAR_1;
    switch (VAR_0->encoding) {
    case 129:
        VAR_1 = VAR_0->ptr;
        FUNC_0(VAR_1->dict);
        FUNC_3(VAR_1->zsl);
        FUNC_2(VAR_1);
        break;
    case 128:
        FUNC_2(VAR_0->ptr);
        break;
    default:
        FUNC_1("Unknown sorted set encoding");
    }
}
