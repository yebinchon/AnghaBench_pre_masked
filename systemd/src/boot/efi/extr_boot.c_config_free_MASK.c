
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINTN ;
struct TYPE_3__ {size_t entry_count; int * entry_oneshot; int * options_edit; int * entry_default_pattern; int * entries; } ;
typedef TYPE_1__ Config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static VOID FUNC_2(Config *VAR_0) {
        UINTN VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->entry_count; VAR_1++)
                FUNC_1(VAR_0->entries[VAR_1]);
        FUNC_0(VAR_0->entries);
        FUNC_0(VAR_0->entry_default_pattern);
        FUNC_0(VAR_0->options_edit);
        FUNC_0(VAR_0->entry_oneshot);
}
