
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nMapper; size_t wMaxId; TYPE_1__* lpMlds; scalar_t__ bSupportMapper; } ;
typedef TYPE_2__ WINE_LLTYPE ;
typedef size_t UINT16 ;
typedef size_t UINT ;
struct TYPE_9__ {size_t type; size_t uDeviceID; void* dwDriverInstance; int mmdIndex; } ;
struct TYPE_7__ {int mmdIndex; } ;
typedef TYPE_3__* LPWINE_MLD ;
typedef void* DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_3__*,size_t,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* VAR_2 ;

DWORD FUNC_2(LPWINE_MLD VAR_3, UINT VAR_4, DWORD_PTR VAR_5, DWORD VAR_6)
{
    DWORD VAR_7 = VAR_0;
    DWORD_PTR VAR_8;
    WINE_LLTYPE* VAR_9 = &VAR_2[VAR_3->type];
    FUNC_1("(%p, %04x, 0x%08lx, 0x%08x)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    VAR_3->dwDriverInstance = (DWORD_PTR)&VAR_8;

    if (VAR_3->uDeviceID == (UINT)-1 || VAR_3->uDeviceID == (UINT16)-1) {
 FUNC_1("MAPPER mode requested !\n");

 if (VAR_9->bSupportMapper) {
     if (VAR_9->nMapper == -1) {

  FUNC_1("No mapper loaded, doing it by hand\n");
  for (VAR_3->uDeviceID = 0; VAR_3->uDeviceID < VAR_9->wMaxId; VAR_3->uDeviceID++) {
      if ((VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6)) == VAR_1) {

   VAR_8 = VAR_3->dwDriverInstance;
   break;
      }
  }
     } else {
  VAR_3->uDeviceID = (UINT16)-1;
  VAR_3->mmdIndex = VAR_9->lpMlds[-1].mmdIndex;
  FUNC_1("Setting mmdIndex to %u\n", VAR_3->mmdIndex);
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
     }
 }
    } else {
 if (VAR_3->uDeviceID < VAR_9->wMaxId) {
     VAR_3->mmdIndex = VAR_9->lpMlds[VAR_3->uDeviceID].mmdIndex;
     FUNC_1("Setting mmdIndex to %u\n", VAR_3->mmdIndex);
     VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 }
    }
    if (VAR_7 == VAR_1)
 VAR_3->dwDriverInstance = VAR_8;
    return VAR_7;
}
