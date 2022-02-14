
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int refcount; int type; } ;
typedef TYPE_1__ robj ;






 int VAR_0 ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(robj *VAR_1) {
    if (VAR_1->refcount == 1) {
        switch(VAR_1->type) {
        case 129: FUNC_5(VAR_1); break;
        case 133: FUNC_1(VAR_1); break;
        case 131: FUNC_3(VAR_1); break;
        case 128: FUNC_6(VAR_1); break;
        case 134: FUNC_0(VAR_1); break;
        case 132: FUNC_2(VAR_1); break;
        case 130: FUNC_4(VAR_1); break;
        default: FUNC_7("Unknown object type"); break;
        }
        FUNC_8(VAR_1);
    } else {
        if (VAR_1->refcount <= 0) FUNC_7("decrRefCount against refcount <= 0");
        if (VAR_1->refcount != VAR_0) VAR_1->refcount--;
    }
}
