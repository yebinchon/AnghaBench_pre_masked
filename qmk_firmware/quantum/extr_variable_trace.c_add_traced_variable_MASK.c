
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; unsigned int size; char const* func; int line; int * last_value; int * addr; } ;
typedef TYPE_1__ traced_variable_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(const char* VAR_3, void* VAR_4, unsigned VAR_5, const char* VAR_6, int VAR_7) {
    FUNC_2(VAR_6, VAR_7);
    if (VAR_5 > VAR_0) {



        FUNC_3("Traced variable \"%s\" exceeds the maximum size %d\n", VAR_3, VAR_5);

        VAR_5 = VAR_0;
    }
    int VAR_8 = -1;
    for (int VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
        if (VAR_8 == -1 && VAR_2[VAR_9].addr == ((void*)0)) {
            VAR_8 = VAR_9;
        } else if (FUNC_1(VAR_3, VAR_2[VAR_9].name) == 0) {
            VAR_8 = VAR_9;
            break;
        }
    }

    if (VAR_8 == -1) {
        FUNC_3("You can only trace %d variables at the same time\n", VAR_1);
        return;
    }

    traced_variable_t* VAR_10 = &VAR_2[VAR_8];
    VAR_10->name = VAR_3;
    VAR_10->addr = VAR_4;
    VAR_10->size = VAR_5;
    VAR_10->func = VAR_6;
    VAR_10->line = VAR_7;
    FUNC_0(&VAR_10->last_value[0], VAR_4, VAR_5);
}
