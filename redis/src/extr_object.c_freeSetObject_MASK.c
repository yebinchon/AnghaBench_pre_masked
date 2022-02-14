
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int dict ;




 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(robj *VAR_0) {
    switch (VAR_0->encoding) {
    case 129:
        FUNC_0((dict*) VAR_0->ptr);
        break;
    case 128:
        FUNC_2(VAR_0->ptr);
        break;
    default:
        FUNC_1("Unknown set encoding type");
    }
}
