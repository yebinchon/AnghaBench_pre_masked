
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hModule; struct TYPE_5__* lpNextItem; } ;
typedef TYPE_1__ WINE_DRIVER ;
typedef TYPE_1__* LPWINE_DRIVER ;
typedef scalar_t__ HMODULE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned FUNC_2(HMODULE VAR_2, WINE_DRIVER** VAR_3)
{
    LPWINE_DRIVER VAR_4;
    unsigned VAR_5 = 0;

    FUNC_0( &VAR_1 );

    if (VAR_3) *VAR_3 = ((void*)0);
    for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->lpNextItem)
    {
 if (VAR_4->hModule == VAR_2)
        {
            if (VAR_3 && !*VAR_3) *VAR_3 = VAR_4;
     VAR_5++;
 }
    }

    FUNC_1( &VAR_1 );
    return VAR_5;
}
