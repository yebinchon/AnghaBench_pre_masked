
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cFormatTags; TYPE_1__* aFormatTag; } ;
typedef TYPE_2__ WINE_ACMDRIVERID ;
struct TYPE_4__ {scalar_t__ dwFormatTag; } ;
typedef unsigned int* LPDWORD ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_0(const WINE_ACMDRIVERID* VAR_2, DWORD VAR_3, LPDWORD VAR_4)
{
    unsigned VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->cFormatTags; VAR_5++) {
 if (VAR_2->aFormatTag[VAR_5].dwFormatTag == VAR_3) {
     if (VAR_4) *VAR_4 = VAR_5;
     return VAR_1;
 }
    }
    return VAR_0;
}
