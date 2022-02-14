
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINTN ;
struct TYPE_3__ {int entry_count; int ** entries; } ;
typedef int ConfigEntry ;
typedef TYPE_1__ Config ;


 int ** FUNC_0 (int) ;
 int ** FUNC_1 (int **,int,int) ;

__attribute__((used)) static VOID FUNC_2(Config *VAR_0, ConfigEntry *VAR_1) {
        if ((VAR_0->entry_count & 15) == 0) {
                UINTN VAR_2;

                VAR_2 = VAR_0->entry_count + 16;
                if (VAR_0->entry_count == 0)
                        VAR_0->entries = FUNC_0(sizeof(VOID *) * VAR_2);
                else
                        VAR_0->entries = FUNC_1(VAR_0->entries,
                                                         sizeof(VOID *) * VAR_0->entry_count, sizeof(VOID *) * VAR_2);
        }
        VAR_0->entries[VAR_0->entry_count++] = VAR_1;
}
