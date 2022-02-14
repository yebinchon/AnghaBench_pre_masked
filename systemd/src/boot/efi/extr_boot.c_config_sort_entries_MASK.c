
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINTN ;
struct TYPE_3__ {size_t entry_count; int ** entries; } ;
typedef int ConfigEntry ;
typedef TYPE_1__ Config ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static VOID FUNC_1(Config *VAR_2) {
        UINTN VAR_3;

        for (VAR_3 = 1; VAR_3 < VAR_2->entry_count; VAR_3++) {
                BOOLEAN VAR_4;
                UINTN VAR_5;

                VAR_4 = VAR_0;
                for (VAR_5 = 0; VAR_5 < VAR_2->entry_count - VAR_3; VAR_5++) {
                        ConfigEntry *VAR_6;

                        if (FUNC_0(VAR_2->entries[VAR_5], VAR_2->entries[VAR_5+1]) <= 0)
                                continue;

                        VAR_6 = VAR_2->entries[VAR_5];
                        VAR_2->entries[VAR_5] = VAR_2->entries[VAR_5+1];
                        VAR_2->entries[VAR_5+1] = VAR_6;
                        VAR_4 = VAR_1;
                }
                if (!VAR_4)
                        break;
        }
}
