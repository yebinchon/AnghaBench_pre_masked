
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int reobject ;
struct TYPE_22__ {int lindex; int tymed; void* dwAspect; int * ptd; int cfFormat; } ;
struct TYPE_21__ {int reOle; } ;
struct TYPE_17__ {void* cy; void* cx; } ;
struct TYPE_20__ {int cbStruct; scalar_t__ dwUser; scalar_t__ dwFlags; void* dvaspect; TYPE_2__ sizel; int * polesite; int * pstg; int * poleobj; int clsid; int cp; } ;
struct TYPE_19__ {int cy; int cx; } ;
struct TYPE_16__ {scalar_t__ hBitmap; scalar_t__ hEnhMetaFile; } ;
struct TYPE_18__ {int tymed; int * pUnkForRelease; TYPE_1__ u; } ;
typedef TYPE_3__ STGMEDIUM ;
typedef TYPE_4__ SIZEL ;
typedef TYPE_5__ REOBJECT ;
typedef TYPE_6__ ME_TextEditor ;
typedef int LPVOID ;
typedef int * LPSTORAGE ;
typedef int * LPOLEOBJECT ;
typedef int * LPOLECLIENTSITE ;
typedef int * LPOLECACHE ;
typedef int * LPDATAOBJECT ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HENHMETAFILE ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_7__ FORMATETC ;
typedef int DWORD ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_6__*,int *) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_7__*,TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,TYPE_7__*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int ,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*,TYPE_5__*,int ) ;
 void* FUNC_13 (int ,int,int) ;
 scalar_t__ FUNC_14 (int *,int *,int *,void**) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static HRESULT FUNC_15(ME_TextEditor *VAR_13, HENHMETAFILE VAR_14, HBITMAP VAR_15,
                                    const SIZEL* VAR_16)
{
  LPOLEOBJECT VAR_17 = ((void*)0);
  LPSTORAGE VAR_18 = ((void*)0);
  LPOLECLIENTSITE VAR_19 = ((void*)0);
  LPDATAOBJECT VAR_20 = ((void*)0);
  LPOLECACHE VAR_21 = ((void*)0);
  STGMEDIUM VAR_22;
  FORMATETC VAR_23;
  CLSID VAR_24;
  HRESULT VAR_25 = VAR_4;
  DWORD VAR_26;

  if (VAR_14)
  {
      VAR_22.tymed = VAR_11;
      VAR_22.u.hEnhMetaFile = VAR_14;
      VAR_23.cfFormat = VAR_1;
  }
  else if (VAR_15)
  {
      VAR_22.tymed = VAR_12;
      VAR_22.u.hBitmap = VAR_15;
      VAR_23.cfFormat = VAR_0;
  }
  VAR_22.pUnkForRelease = ((void*)0);

  VAR_23.ptd = ((void*)0);
  VAR_23.dwAspect = VAR_3;
  VAR_23.lindex = -1;
  VAR_23.tymed = VAR_22.tymed;

  if (!VAR_13->reOle)
  {
    if (!FUNC_0(((void*)0), VAR_13, (LPVOID *)&VAR_13->reOle))
      return VAR_25;
  }

  if (FUNC_14(&VAR_2, ((void*)0), &VAR_7, (void**)&VAR_17) == VAR_9 &&
      FUNC_10(VAR_13->reOle, &VAR_19) == VAR_9 &&
      FUNC_9(VAR_17, VAR_19) == VAR_9 &&
      FUNC_6(VAR_17, &VAR_24) == VAR_9 &&
      FUNC_7(VAR_17, &VAR_6, (void**)&VAR_21) == VAR_9 &&
      FUNC_3(VAR_21, &VAR_23, 0, &VAR_26) == VAR_9 &&
      FUNC_7(VAR_17, &VAR_5, (void**)&VAR_20) == VAR_9 &&
      FUNC_2(VAR_20, &VAR_23, &VAR_22, VAR_10) == VAR_9)
  {
    REOBJECT VAR_27;

    VAR_27.cbStruct = sizeof(VAR_27);
    VAR_27.cp = VAR_8;
    VAR_27.clsid = VAR_24;
    VAR_27.poleobj = VAR_17;
    VAR_27.pstg = VAR_18;
    VAR_27.polesite = VAR_19;

    VAR_27.sizel.cx = FUNC_13(VAR_16->cx, 254, 144);
    VAR_27.sizel.cy = FUNC_13(VAR_16->cy, 254, 144);
    VAR_27.dvaspect = VAR_3;
    VAR_27.dwFlags = 0;
    VAR_27.dwUser = 0;

    FUNC_12(VAR_13, &VAR_27, 0);
    VAR_25 = VAR_9;
  }

  if (VAR_17) FUNC_8(VAR_17);
  if (VAR_19) FUNC_5(VAR_19);
  if (VAR_18) FUNC_11(VAR_18);
  if (VAR_20) FUNC_1(VAR_20);
  if (VAR_21) FUNC_4(VAR_21);

  return VAR_25;
}
