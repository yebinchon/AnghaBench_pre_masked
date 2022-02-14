
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nIDMin; int nIDMax; size_t (* fnMessage32 ) (int ,size_t,long,long,long) ;} ;
typedef TYPE_2__ WINE_MM_DRIVER_PART ;
typedef int WINE_MLD ;
typedef int UINT16 ;
typedef size_t UINT ;
struct TYPE_13__ {int uDeviceID; size_t type; size_t mmdIndex; scalar_t__ dwDriverInstance; } ;
struct TYPE_12__ {size_t drvname; TYPE_1__* parts; } ;
struct TYPE_11__ {size_t typestr; int nMapper; int wMaxId; TYPE_7__* lpMlds; } ;
struct TYPE_10__ {int drvname; scalar_t__ bIsMapper; TYPE_2__* parts; } ;
struct TYPE_8__ {int nIDMin; int nIDMax; } ;
typedef TYPE_3__* LPWINE_MM_DRIVER ;
typedef void* LPWINE_MLD ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_7__*,int) ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 int VAR_5 ;
 int FUNC_6 (size_t) ;
 TYPE_4__* VAR_6 ;
 size_t FUNC_7 (int ,size_t,long,long,long) ;
 size_t FUNC_8 (int ,size_t,long,long,long) ;
 size_t FUNC_9 (int ,size_t,long,long,long) ;

__attribute__((used)) static BOOL FUNC_10(LPWINE_MM_DRIVER VAR_7, UINT VAR_8, UINT VAR_9)
{
    WINE_MM_DRIVER_PART* VAR_10 = &VAR_7->parts[VAR_8];
    DWORD VAR_11;
    UINT VAR_12 = 0;
    int VAR_13, VAR_14;
    FUNC_5("(%p, %04x, %04x)\n", VAR_7, VAR_8, VAR_9);

    VAR_10->nIDMin = VAR_10->nIDMax = 0;



    if (VAR_10->fnMessage32) {
        VAR_11 = VAR_10->fnMessage32(0, VAR_1, 0L, 0L, 0L);
        FUNC_5("DRVM_INIT => %s\n", FUNC_6(VAR_11));




        VAR_12 = VAR_10->fnMessage32(0, VAR_9, 0L, 0L, 0L);
    }
    else return VAR_2;

    FUNC_5("Got %u dev for (%s:%s)\n", VAR_12, VAR_7->drvname, VAR_6[VAR_8].typestr);

    if (FUNC_2(VAR_12))
        return VAR_2;


    if (VAR_7->bIsMapper) {

 if (VAR_6[VAR_8].nMapper != -1)
     FUNC_0("Two mappers for type %s (%d, %s)\n",
  VAR_6[VAR_8].typestr, VAR_6[VAR_8].nMapper, VAR_7->drvname);
 if (VAR_12 > 1)
     FUNC_0("Strange: mapper with %d > 1 devices\n", VAR_12);
 VAR_6[VAR_8].nMapper = VAR_4;
    } else {
 if (VAR_12 == 0)
     return VAR_2;
 VAR_10->nIDMin = VAR_6[VAR_8].wMaxId;
 VAR_6[VAR_8].wMaxId += VAR_12;
 VAR_10->nIDMax = VAR_6[VAR_8].wMaxId;
    }
    FUNC_5("Setting min=%d max=%d (ttop=%d) for (%s:%s)\n",
   VAR_10->nIDMin, VAR_10->nIDMax, VAR_6[VAR_8].wMaxId,
   VAR_7->drvname, VAR_6[VAR_8].typestr);

    if (VAR_6[VAR_8].lpMlds)
        VAR_6[VAR_8].lpMlds = (LPWINE_MLD)
 FUNC_4(FUNC_1(), 0, VAR_6[VAR_8].lpMlds - 1,
      sizeof(WINE_MLD) * (VAR_6[VAR_8].wMaxId + 1)) + 1;
    else
        VAR_6[VAR_8].lpMlds = (LPWINE_MLD)
 FUNC_3(FUNC_1(), 0,
      sizeof(WINE_MLD) * (VAR_6[VAR_8].wMaxId + 1)) + 1;


    if (VAR_6[VAR_8].nMapper != -1) {
 FUNC_5("%s:Trans[%d] -> %s\n", VAR_6[VAR_8].typestr, -1, VAR_3[VAR_6[VAR_8].nMapper].drvname);
 VAR_6[VAR_8].lpMlds[-1].uDeviceID = (UINT16)-1;
 VAR_6[VAR_8].lpMlds[-1].type = VAR_8;
 VAR_6[VAR_8].lpMlds[-1].mmdIndex = VAR_6[VAR_8].nMapper;
 VAR_6[VAR_8].lpMlds[-1].dwDriverInstance = 0;
    }
    for (VAR_13 = VAR_14 = 0; VAR_13 <= VAR_4; VAR_13++) {
 while (VAR_3[VAR_13].parts[VAR_8].nIDMin <= VAR_14 && VAR_14 < VAR_3[VAR_13].parts[VAR_8].nIDMax) {
     FUNC_5("%s:Trans[%d] -> %s\n", VAR_6[VAR_8].typestr, VAR_14, VAR_3[VAR_13].drvname);
     VAR_6[VAR_8].lpMlds[VAR_14].uDeviceID = VAR_14;
     VAR_6[VAR_8].lpMlds[VAR_14].type = VAR_8;
     VAR_6[VAR_8].lpMlds[VAR_14].mmdIndex = VAR_13;
     VAR_6[VAR_8].lpMlds[VAR_14].dwDriverInstance = 0;
     VAR_14++;
 }
    }
    return VAR_5;
}
