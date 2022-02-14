
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; char const* func; int line; int * last_value; int * addr; int * name; } ;
typedef TYPE_1__ traced_variable_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,...) ;

void FUNC_4(const char* VAR_2, int VAR_3) {
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        traced_variable_t* VAR_5 = &VAR_1[VAR_4];
        if (VAR_5->addr != ((void*)0) && VAR_5->name != ((void*)0)) {
            if (FUNC_0(VAR_5->last_value, VAR_5->addr, VAR_5->size) != 0) {






                FUNC_3("Traced variable \"%s\" has been modified\n", VAR_5->name);
                FUNC_3("Between %s:%d\n", VAR_5->func, VAR_5->line);
                FUNC_3("And %s:%d\n", VAR_2, VAR_3);

                FUNC_3("Previous value ");
                for (int VAR_6 = 0; VAR_6 < VAR_5->size; VAR_6++) {
                    FUNC_2(VAR_5->last_value[VAR_6]);
                }
                FUNC_3("\nNew value ");
                uint8_t* VAR_7 = (uint8_t*)(VAR_5->addr);
                for (int VAR_8 = 0; VAR_8 < VAR_5->size; VAR_8++) {
                    FUNC_2(VAR_7[VAR_8]);
                }
                FUNC_3("\n");
                FUNC_1(VAR_5->last_value, VAR_7, VAR_5->size);
            }
        }

        VAR_5->func = VAR_2;
        VAR_5->line = VAR_3;
    }
}
