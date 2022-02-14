
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_5__ {int entry_count; TYPE_1__** entries; } ;
struct TYPE_4__ {char key; } ;
typedef TYPE_2__ Config ;
typedef char CHAR16 ;



__attribute__((used)) static UINTN FUNC_0(Config *VAR_0, UINTN VAR_1, CHAR16 VAR_2) {
        UINTN VAR_3;

        if (VAR_2 == 0)
                return -1;


        if (VAR_2 >= '1' && VAR_2 <= '9') {
                VAR_3 = VAR_2 - '0';
                if (VAR_3 > VAR_0->entry_count)
                        VAR_3 = VAR_0->entry_count;
                return VAR_3-1;
        }


        for (VAR_3 = VAR_1; VAR_3 < VAR_0->entry_count; VAR_3++)
                if (VAR_0->entries[VAR_3]->key == VAR_2)
                        return VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
                if (VAR_0->entries[VAR_3]->key == VAR_2)
                        return VAR_3;

        return -1;
}
