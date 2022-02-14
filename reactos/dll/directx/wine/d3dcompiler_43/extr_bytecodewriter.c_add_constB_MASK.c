
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct constant {TYPE_1__* value; int regnum; } ;
struct bwriter_shader {int num_cb; struct constant** constB; } ;
struct TYPE_2__ {int b; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 struct constant** FUNC_2 (struct constant**,int) ;

BOOL FUNC_3(struct bwriter_shader *VAR_2, DWORD VAR_3, BOOL VAR_4) {
    struct constant *VAR_5;

    if(VAR_2->num_cb) {
        struct constant **VAR_6;
        VAR_6 = FUNC_2(VAR_2->constB,
                               sizeof(*VAR_2->constB) * (VAR_2->num_cb + 1));
        if(!VAR_6) {
            FUNC_0("Failed to grow the constants array\n");
            return VAR_0;
        }
        VAR_2->constB = VAR_6;
    } else {
        VAR_2->constB = FUNC_1(sizeof(*VAR_2->constB));
        if(!VAR_2->constB) {
            FUNC_0("Failed to allocate the constants array\n");
            return VAR_0;
        }
    }

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if(!VAR_5) {
        FUNC_0("Failed to allocate a new constant\n");
        return VAR_0;
    }
    VAR_5->regnum = VAR_3;
    VAR_5->value[0].b = VAR_4;
    VAR_2->constB[VAR_2->num_cb] = VAR_5;

    VAR_2->num_cb++;
    return VAR_1;
}
