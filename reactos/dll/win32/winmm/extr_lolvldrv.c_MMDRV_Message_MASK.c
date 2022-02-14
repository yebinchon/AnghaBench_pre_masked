
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nIDMin; int nIDMax; int (* fnMessage32 ) (int,int ,int ,int ,int ) ;} ;
typedef TYPE_1__ WINE_MM_DRIVER_PART ;
struct TYPE_9__ {int wMaxId; int typestr; int bSupportMapper; } ;
typedef TYPE_2__ WINE_LLTYPE ;
typedef int UINT16 ;
typedef int UINT ;
struct TYPE_11__ {size_t type; int uDeviceID; size_t mmdIndex; int dwDriverInstance; } ;
struct TYPE_10__ {TYPE_1__* parts; } ;
typedef TYPE_3__* LPWINE_MM_DRIVER ;
typedef TYPE_4__* LPWINE_MLD ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 (char*,int,int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (int,int ,int ,int ,int )) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (int,int ,int ,int ,int ) ;

DWORD FUNC_6(LPWINE_MLD VAR_3, UINT VAR_4, DWORD_PTR VAR_5,
                     DWORD_PTR VAR_6)
{
    LPWINE_MM_DRIVER VAR_7;
    DWORD VAR_8;
    WINE_MM_DRIVER_PART* VAR_9;
    WINE_LLTYPE* VAR_10 = &VAR_2[VAR_3->type];
    int VAR_11;

    FUNC_1("(%s %u %u 0x%08lx 0x%08lx 0x%08lx)\n",
   VAR_2[VAR_3->type].typestr, VAR_3->uDeviceID, VAR_4,
   VAR_3->dwDriverInstance, VAR_5, VAR_6);

    if (VAR_3->uDeviceID == (UINT16)-1) {
 if (!VAR_10->bSupportMapper) {
     FUNC_2("uDev=-1 requested on non-mappable ll type %s\n",
   VAR_2[VAR_3->type].typestr);
     return VAR_1;
 }
 VAR_11 = -1;
    } else {
 if (VAR_3->uDeviceID >= VAR_10->wMaxId) {
     FUNC_2("uDev(%u) requested >= max (%d)\n", VAR_3->uDeviceID, VAR_10->wMaxId);
     return VAR_1;
 }
 VAR_11 = VAR_3->uDeviceID;
    }

    VAR_7 = &VAR_0[VAR_3->mmdIndex];
    VAR_9 = &VAR_7->parts[VAR_3->type];
    FUNC_4(VAR_9->fnMessage32);

    FUNC_1("Calling message(dev=%u msg=%u usr=0x%08lx p1=0x%08lx p2=0x%08lx)\n",
          VAR_3->uDeviceID, VAR_4, VAR_3->dwDriverInstance, VAR_5, VAR_6);
    VAR_8 = VAR_9->fnMessage32(VAR_3->uDeviceID, VAR_4, VAR_3->dwDriverInstance, VAR_5, VAR_6);
    FUNC_1("=> %s\n", FUNC_3(VAR_8));

    return VAR_8;
}
