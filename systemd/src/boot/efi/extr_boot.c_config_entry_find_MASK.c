
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINTN ;
struct TYPE_5__ {size_t entry_count; TYPE_1__** entries; } ;
struct TYPE_4__ {int id; } ;
typedef int INTN ;
typedef TYPE_2__ Config ;
typedef int CHAR16 ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static INTN FUNC_1(Config *VAR_0, CHAR16 *VAR_1) {
        UINTN VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_0->entry_count; VAR_2++)
                if (FUNC_0(VAR_0->entries[VAR_2]->id, VAR_1) == 0)
                        return (INTN) VAR_2;

        return -1;
}
