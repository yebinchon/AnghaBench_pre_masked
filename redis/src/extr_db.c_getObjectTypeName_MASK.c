
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; TYPE_3__* ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_7__ {TYPE_1__* type; } ;
typedef TYPE_3__ moduleValue ;
struct TYPE_5__ {char* name; } ;
char* FUNC_0(robj *VAR_0) {
    char* VAR_1;
    if (VAR_0 == ((void*)0)) {
        VAR_1 = "none";
    } else {
        switch(VAR_0->type) {
        case 129: VAR_1 = "string"; break;
        case 133: VAR_1 = "list"; break;
        case 131: VAR_1 = "set"; break;
        case 128: VAR_1 = "zset"; break;
        case 134: VAR_1 = "hash"; break;
        case 130: VAR_1 = "stream"; break;
        case 132: {
            moduleValue *VAR_2 = VAR_0->ptr;
            VAR_1 = VAR_2->type->name;
        }; break;
        default: VAR_1 = "unknown"; break;
        }
    }
    return VAR_1;
}
