
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int encoding; } ;
typedef TYPE_1__ robj ;
typedef int rio ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(rio *VAR_15, robj *VAR_16) {
    switch (VAR_16->type) {
    case 129:
        return FUNC_0(VAR_15,VAR_12);
    case 133:
        if (VAR_16->encoding == VAR_2)
            return FUNC_0(VAR_15,VAR_7);
        else
            FUNC_1("Unknown list encoding");
    case 131:
        if (VAR_16->encoding == VAR_1)
            return FUNC_0(VAR_15,VAR_10);
        else if (VAR_16->encoding == VAR_0)
            return FUNC_0(VAR_15,VAR_9);
        else
            FUNC_1("Unknown set encoding");
    case 128:
        if (VAR_16->encoding == VAR_4)
            return FUNC_0(VAR_15,VAR_14);
        else if (VAR_16->encoding == VAR_3)
            return FUNC_0(VAR_15,VAR_13);
        else
            FUNC_1("Unknown sorted set encoding");
    case 134:
        if (VAR_16->encoding == VAR_4)
            return FUNC_0(VAR_15,VAR_6);
        else if (VAR_16->encoding == VAR_0)
            return FUNC_0(VAR_15,VAR_5);
        else
            FUNC_1("Unknown hash encoding");
    case 130:
        return FUNC_0(VAR_15,VAR_11);
    case 132:
        return FUNC_0(VAR_15,VAR_8);
    default:
        FUNC_1("Unknown object type");
    }
    return -1;
}
