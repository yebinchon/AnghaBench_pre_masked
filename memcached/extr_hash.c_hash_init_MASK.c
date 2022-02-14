
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum hashfunc_type { ____Placeholder_hashfunc_type } hashfunc_type ;
struct TYPE_2__ {char* hash_algorithm; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

int FUNC_0(enum hashfunc_type VAR_4) {
    switch(VAR_4) {
        case 129:
            VAR_1 = VAR_2;
            VAR_3.hash_algorithm = "jenkins";
            break;
        case 128:
            VAR_1 = VAR_0;
            VAR_3.hash_algorithm = "murmur3";
            break;
        default:
            return -1;
    }
    return 0;
}
