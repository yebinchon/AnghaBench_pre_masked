
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nIDMin; scalar_t__ nIDMax; } ;
typedef TYPE_1__ WINE_MM_DRIVER_PART ;
typedef size_t UINT ;
struct TYPE_9__ {TYPE_1__* parts; } ;
struct TYPE_8__ {size_t mmdIndex; } ;
typedef TYPE_2__* LPWINE_MLD ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 TYPE_2__* FUNC_0 (int ,size_t,scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__,size_t) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (char*,int ,size_t,char,size_t) ;

LPWINE_MLD FUNC_3(HANDLE VAR_1, UINT VAR_2,
     BOOL VAR_3, UINT VAR_4)
{
    LPWINE_MLD VAR_5;
    FUNC_2("(%p, %04x, %c, %04x)\n",
          VAR_1, VAR_2, VAR_3 ? 'Y' : 'N', VAR_4);

    if ((VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3)) != ((void*)0)) {
 WINE_MM_DRIVER_PART* VAR_6 = &VAR_0[VAR_5->mmdIndex].parts[VAR_4];
 if (VAR_6->nIDMin < VAR_6->nIDMax)
     return FUNC_1(VAR_6->nIDMin, VAR_4);
    }
    return ((void*)0);
}
