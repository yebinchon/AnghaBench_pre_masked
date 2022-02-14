
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINTN ;
struct TYPE_3__ {void* non_unique; int title_show; } ;
typedef TYPE_1__ ConfigEntry ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 void* VAR_1 ;

__attribute__((used)) static BOOLEAN FUNC_1(ConfigEntry **VAR_2, UINTN VAR_3) {
        BOOLEAN VAR_4 = VAR_0;
        UINTN VAR_5, VAR_6;

        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
                VAR_2[VAR_5]->non_unique = VAR_0;

        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
                for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
                        if (VAR_5 == VAR_6)
                                continue;
                        if (FUNC_0(VAR_2[VAR_5]->title_show, VAR_2[VAR_6]->title_show) != 0)
                                continue;

                        VAR_4 = VAR_2[VAR_5]->non_unique = VAR_2[VAR_6]->non_unique = VAR_1;
                }

        return VAR_4;
}
