
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct constant {TYPE_1__* value; int regnum; } ;
struct bwriter_shader {int num_cf; struct constant** constF; } ;
struct TYPE_2__ {float f; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 struct constant** FUNC_2 (struct constant**,int) ;

BOOL FUNC_3(struct bwriter_shader *VAR_2, DWORD VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7) {
    struct constant *VAR_8;

    if(VAR_2->num_cf) {
        struct constant **VAR_9;
        VAR_9 = FUNC_2(VAR_2->constF,
                               sizeof(*VAR_2->constF) * (VAR_2->num_cf + 1));
        if(!VAR_9) {
            FUNC_0("Failed to grow the constants array\n");
            return VAR_0;
        }
        VAR_2->constF = VAR_9;
    } else {
        VAR_2->constF = FUNC_1(sizeof(*VAR_2->constF));
        if(!VAR_2->constF) {
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
    VAR_8->value[0].f = VAR_4;
    VAR_8->value[1].f = VAR_5;
    VAR_8->value[2].f = VAR_6;
    VAR_8->value[3].f = VAR_7;
    VAR_2->constF[VAR_2->num_cf] = VAR_8;

    VAR_2->num_cf++;
    return VAR_1;
}
