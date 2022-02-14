
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_20__ {int yExt; int xExt; TYPE_6__* hmeta; } ;
struct TYPE_21__ {TYPE_4__ wmf; } ;
struct TYPE_23__ {int picType; TYPE_5__ u; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_22__ {int ref; int loadtime_magic; TYPE_7__ desc; TYPE_13__ IPicture_iface; int himetricHeight; int himetricWidth; int bIsDirty; scalar_t__ loadtime_format; int * hbmXor; int * hbmMask; int keepOrigFormat; int fOwn; scalar_t__ hDCCur; int * pCP; TYPE_3__ IConnectionPointContainer_iface; TYPE_2__ IPersistStream_iface; TYPE_1__ IDispatch_iface; } ;
typedef TYPE_6__ OLEPictureImpl ;
typedef TYPE_7__* LPPICTDESC ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int *,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_13__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_8 ;





 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (char*,...) ;
 int VAR_11 ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static HRESULT FUNC_10(LPPICTDESC VAR_12, BOOL VAR_13, OLEPictureImpl **VAR_14)
{
  OLEPictureImpl *VAR_15;
  HRESULT VAR_16;

  if (VAR_12)
      FUNC_8("(%p) type = %d\n", VAR_12, VAR_12->picType);




  VAR_15 = FUNC_2(FUNC_1(), VAR_3, sizeof(OLEPictureImpl));
  if (!VAR_15)
    return VAR_0;




  VAR_15->IPicture_iface.lpVtbl = &VAR_8;
  VAR_15->IDispatch_iface.lpVtbl = &VAR_6;
  VAR_15->IPersistStream_iface.lpVtbl = &VAR_7;
  VAR_15->IConnectionPointContainer_iface.lpVtbl = &VAR_5;

  VAR_15->pCP = ((void*)0);
  VAR_16 = FUNC_0((IUnknown*)&VAR_15->IPicture_iface, &VAR_4,
                        &VAR_15->pCP);
  if (VAR_16 != VAR_10)
  {
    FUNC_3(FUNC_1(), 0, VAR_15);
    return VAR_16;
  }





  VAR_15->ref = 1;
  VAR_15->hDCCur = 0;

  VAR_15->fOwn = VAR_13;


  VAR_15->keepOrigFormat = VAR_11;

  VAR_15->hbmMask = ((void*)0);
  VAR_15->hbmXor = ((void*)0);
  VAR_15->loadtime_magic = 0xdeadbeef;
  VAR_15->loadtime_format = 0;
  VAR_15->bIsDirty = VAR_2;

  if (VAR_12) {
      VAR_15->desc = *VAR_12;

      switch(VAR_12->picType) {
      case 132:
 FUNC_5(VAR_15);
 break;

      case 129:
 FUNC_8("metafile handle %p\n", VAR_12->u.wmf.hmeta);
 VAR_15->himetricWidth = VAR_12->u.wmf.xExt;
 VAR_15->himetricHeight = VAR_12->u.wmf.yExt;
 break;

      case 128:

 VAR_15->himetricWidth = VAR_15->himetricHeight = 0;
 break;

      case 130:
        FUNC_7(VAR_15);
        break;

      case 131:
        FUNC_6(VAR_15);
        break;

      default:
        FUNC_9("Unsupported type %d\n", VAR_12->picType);
        FUNC_4(&VAR_15->IPicture_iface);
        return VAR_1;
      }
  } else {
      VAR_15->desc.picType = VAR_9;
  }

  FUNC_8("returning %p\n", VAR_15);
  *VAR_14 = VAR_15;
  return VAR_10;
}
