
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int hemf; } ;
struct TYPE_13__ {int hicon; } ;
struct TYPE_12__ {int hmeta; } ;
struct TYPE_11__ {int * hbitmap; } ;
struct TYPE_15__ {TYPE_4__ emf; TYPE_3__ icon; TYPE_2__ wmf; TYPE_1__ bmp; } ;
struct TYPE_16__ {int picType; TYPE_5__ u; } ;
struct TYPE_17__ {struct TYPE_17__* data; TYPE_6__ desc; int * hbmXor; int * hbmMask; scalar_t__ fOwn; scalar_t__ pCP; } ;
typedef TYPE_7__ OLEPictureImpl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,TYPE_7__*) ;
 int FUNC_7 (scalar_t__) ;






 int FUNC_8 (char*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_9(OLEPictureImpl* VAR_0)
{
  FUNC_8("(%p)\n", VAR_0);

  if (VAR_0->pCP)
    FUNC_7(VAR_0->pCP);

  if(VAR_0->fOwn) {
    switch(VAR_0->desc.picType) {
    case 133:
      FUNC_2(VAR_0->desc.u.bmp.hbitmap);
      if (VAR_0->hbmMask != ((void*)0)) FUNC_2(VAR_0->hbmMask);
      if (VAR_0->hbmXor != ((void*)0)) FUNC_2(VAR_0->hbmXor);
      break;
    case 130:
      FUNC_1(VAR_0->desc.u.wmf.hmeta);
      break;
    case 131:
      FUNC_3(VAR_0->desc.u.icon.hicon);
      break;
    case 132:
      FUNC_0(VAR_0->desc.u.emf.hemf);
      break;
    case 129:
    case 128:

      break;
    default:
      FUNC_4("Unsupported type %d - unable to delete\n", VAR_0->desc.picType);
      break;
    }
  }
  FUNC_6(FUNC_5(), 0, VAR_0->data);
  FUNC_6(FUNC_5(), 0, VAR_0);
}
