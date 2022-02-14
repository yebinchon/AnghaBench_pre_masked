
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwFlags; int dnDevNode; } ;
struct TYPE_5__ {int * driver; int pwfx; TYPE_3__ drvdesc; scalar_t__ hwo; int * buffer; } ;
typedef int HWAVEOUT ;
typedef int HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,TYPE_1__*,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;
 int FUNC_10 (scalar_t__*,int,int ,scalar_t__,scalar_t__,int) ;

HRESULT FUNC_11(DirectSoundDevice *VAR_10, BOOL VAR_11)
{
 HRESULT VAR_12 = VAR_6;
 FUNC_5("(%p, %d)\n", VAR_10, VAR_11);

 if (VAR_10->driver)
 {
  FUNC_1(VAR_10->driver);
  if (VAR_10->drvdesc.dwFlags & VAR_2)
   FUNC_8(VAR_10->hwo);
  FUNC_4(VAR_10->driver);
  VAR_10->driver = ((void*)0);
  VAR_10->buffer = ((void*)0);
  VAR_10->hwo = 0;
 }
 else if (VAR_10->drvdesc.dwFlags & VAR_2)
  FUNC_8(VAR_10->hwo);


 if (VAR_9 != VAR_5 && !VAR_11)
  FUNC_9((HWAVEOUT)(DWORD_PTR)VAR_10->drvdesc.dnDevNode, VAR_1, (DWORD_PTR)&VAR_10->driver, 0);


 if (VAR_10->driver) {
  DWORD VAR_13 = VAR_10->drvdesc.dnDevNode;
  VAR_12 = FUNC_2(VAR_10->driver,&(VAR_10->drvdesc));
  VAR_10->drvdesc.dnDevNode = VAR_13;
  if (FUNC_0(VAR_12)) {
   FUNC_6("IDsDriver_GetDriverDesc failed: %08x\n", VAR_12);
   FUNC_4(VAR_10->driver);
   VAR_10->driver = ((void*)0);
  }
        }


 if (!VAR_10->driver)
  VAR_10->drvdesc.dwFlags = VAR_2 | VAR_3;

 if (VAR_10->drvdesc.dwFlags & VAR_2)
 {
  DWORD VAR_14 = VAR_0 | VAR_8;

  if (VAR_10->driver)
   VAR_14 |= VAR_7;

  VAR_12 = FUNC_7(FUNC_10(&(VAR_10->hwo), VAR_10->drvdesc.dnDevNode, VAR_10->pwfx, (DWORD_PTR)VAR_4, (DWORD_PTR)VAR_10, VAR_14));
  if (FUNC_0(VAR_12)) {
   FUNC_6("waveOutOpen failed\n");
   if (VAR_10->driver)
   {
    FUNC_4(VAR_10->driver);
    VAR_10->driver = ((void*)0);
   }
   return VAR_12;
  }
 }

 if (VAR_10->driver)
  VAR_12 = FUNC_3(VAR_10->driver);

 return VAR_12;
}
