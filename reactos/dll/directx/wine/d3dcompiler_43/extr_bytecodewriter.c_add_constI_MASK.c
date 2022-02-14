
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct constant {TYPE_1__* value; int regnum; } ;
struct bwriter_shader {int num_ci; struct constant** constI; } ;
struct TYPE_2__ {void* i; } ;
typedef void* INT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 struct constant** FUNC_2 (struct constant**,int) ;

BOOL FUNC_3(struct bwriter_shader *VAR_2, DWORD VAR_3, INT VAR_4, INT VAR_5, INT VAR_6, INT VAR_7) {
    struct constant *VAR_8;

    if(VAR_2->num_ci) {
        struct constant **VAR_9;
        VAR_9 = FUNC_2(VAR_2->constI,
                               sizeof(*VAR_2->constI) * (VAR_2->num_ci + 1));
        if(!VAR_9) {
            FUNC_0("Failed to grow the constants array\n");
            return VAR_0;
        }
        VAR_2->constI = VAR_9;
    } else {
        VAR_2->constI = FUNC_1(sizeof(*VAR_2->constI));
        if(!VAR_2->constI) {
            FUNC_0("Failed to allocate the constants array\n");
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if(!VAR_8) {
        FUNC_0("Failed to allocate a new constant\n");
        return VAR_0;
    }
    VAR_8->regnum = VAR_3;
    VAR_8->value[0].i = VAR_4;
    VAR_8->value[1].i = VAR_5;
    VAR_8->value[2].i = VAR_6;
    VAR_8->value[3].i = VAR_7;
    VAR_2->constI[VAR_2->num_ci] = VAR_8;

    VAR_2->num_ci++;
    return VAR_1;
}
