
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {int ref; int sizeCalled; int clearCalled; int recordcopy; int IRecordInfo_iface; } ;
struct TYPE_15__ {int cbElements; } ;
struct TYPE_14__ {int cElements; scalar_t__ lLbound; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__ SAFEARRAY ;
typedef int * PVOID ;
typedef TYPE_3__ IRecordInfoImpl ;
typedef int IRecordInfo ;
typedef int HRESULT ;
typedef int GUID ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int,char*,...) ;
 TYPE_2__* FUNC_9 (int ,int,TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_2__*,int **) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
  IRecordInfoImpl* VAR_14;
  SAFEARRAYBOUND VAR_15[4];
  SAFEARRAY *VAR_16;
  HRESULT VAR_17;
  UINT VAR_18;

  if (!&FUNC_9)
  {
    FUNC_11("SafeArrayCreateEx not supported\n");
    return;
  }

  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_15); VAR_18++)
  {
    VAR_15[VAR_18].lLbound = 0;
    VAR_15[VAR_18].cElements = 8;
  }


  VAR_16 = FUNC_9(VAR_11, 1, ((void*)0), ((void*)0));
  FUNC_8(VAR_16 == ((void*)0), "CreateEx NULL bounds didn't fail\n");


  VAR_16 = FUNC_9(VAR_9, 1, VAR_15, (PVOID)&VAR_2);
  FUNC_8(VAR_16 != ((void*)0), "CreateEx (ITypeInfo) failed\n");

  if (VAR_16)
  {
    GUID VAR_19;

    VAR_17 = FUNC_6(VAR_16, &VAR_19);
    FUNC_8(VAR_17 == VAR_7, "Failed to get array IID, hres %#x.\n", VAR_17);
    FUNC_8(FUNC_3(&VAR_19, &VAR_2), "CreateEx (ITypeInfo) bad IID\n");
    VAR_17 = FUNC_7(VAR_16, &VAR_3);
    FUNC_8(VAR_17 == VAR_7, "Failed to set IID, hres = %8x\n", VAR_17);
    VAR_17 = FUNC_6(VAR_16, &VAR_19);
    FUNC_8(VAR_17 == VAR_7 && FUNC_3(&VAR_19, &VAR_3), "Set bad IID\n");
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
  }

  VAR_16 = FUNC_9(VAR_9, 1, VAR_15, ((void*)0));
  FUNC_8(VAR_16 != ((void*)0), "CreateEx (NULL) failed\n");

  if (VAR_16)
  {
    GUID VAR_20;

    VAR_17 = FUNC_6(VAR_16, &VAR_20);
    FUNC_8(VAR_17 == VAR_7, "Failed to get array IID, hres %#x.\n", VAR_17);
    FUNC_8(FUNC_3(&VAR_20, &VAR_1), "CreateEx (NULL) bad IID\n");
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
  }

  VAR_16 = FUNC_9(VAR_12, 1, VAR_15, ((void*)0));
  FUNC_8(VAR_16 != ((void*)0), "CreateEx (NULL-Unk) failed\n");

  if (VAR_16)
  {
    GUID VAR_21;

    VAR_17 = FUNC_6(VAR_16, &VAR_21);
    FUNC_8(VAR_17 == VAR_7, "Failed to get array IID, hres %#x.\n", VAR_17);
    FUNC_8(FUNC_3(&VAR_21, &VAR_3), "CreateEx (NULL-Unk) bad IID\n");
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
  }


  VAR_16 = FUNC_9(VAR_10, 1, VAR_15, ((void*)0));
  FUNC_8(VAR_16 == ((void*)0), "CreateEx (NULL-Rec) succeeded\n");

  VAR_14 = FUNC_1();


  VAR_13 = VAR_8;
  VAR_16 = FUNC_9(VAR_10, 1, VAR_15, &VAR_14->IRecordInfo_iface);
  FUNC_8(VAR_16 != ((void*)0), "CreateEx (Fail Size) failed\n");
  FUNC_8(VAR_14->ref == VAR_6 + 1, "Wrong iRec refcount %d\n", VAR_14->ref);
  FUNC_8(VAR_14->sizeCalled == 1, "GetSize called %d times\n", VAR_14->sizeCalled);
  FUNC_8(VAR_14->clearCalled == 0, "Clear called %d times\n", VAR_14->clearCalled);
  if (VAR_16)
  {
    FUNC_8(VAR_16->cbElements == VAR_5, "Altered size to %d\n", VAR_16->cbElements);
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
    FUNC_8(VAR_14->clearCalled == VAR_15[0].cElements, "Destroy->Clear called %d times\n", VAR_14->clearCalled);
    FUNC_8(VAR_14->ref == VAR_6, "got %d, expected %d\n", VAR_14->ref, VAR_6);
  }


  VAR_13 = VAR_0;
  VAR_14->ref = VAR_6;
  VAR_14->sizeCalled = 0;
  VAR_14->clearCalled = 0;
  VAR_16 = FUNC_9(VAR_10, 1, VAR_15, &VAR_14->IRecordInfo_iface);
  FUNC_8(VAR_16 != ((void*)0), "CreateEx (Rec) failed\n");
  FUNC_8(VAR_14->ref == VAR_6 + 1, "Wrong iRec refcount %d\n", VAR_14->ref);
  FUNC_8(VAR_14->sizeCalled == 1, "GetSize called %d times\n", VAR_14->sizeCalled);
  FUNC_8(VAR_14->clearCalled == 0, "Clear called %d times\n", VAR_14->clearCalled);
  if (VAR_16 && &FUNC_10)
  {
    IRecordInfo* VAR_22 = ((void*)0);
    SAFEARRAY *VAR_23;

    VAR_17 = FUNC_10(VAR_16, &VAR_22);
    FUNC_8(VAR_17 == VAR_7,"GRI failed\n");
    FUNC_8(VAR_22 == &VAR_14->IRecordInfo_iface, "Different saRec\n");
    FUNC_8(VAR_14->ref == VAR_6 + 2, "Didn't AddRef %d\n", VAR_14->ref);
    FUNC_2(VAR_22);

    FUNC_8(VAR_16->cbElements == VAR_4,"Elemsize is %d\n", VAR_16->cbElements);


    VAR_23 = FUNC_9(VAR_10, 1, VAR_15, &VAR_14->IRecordInfo_iface);
    VAR_14->recordcopy = 0;
    VAR_14->clearCalled = 0;

    VAR_17 = FUNC_4(VAR_16, VAR_23);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
    FUNC_8(VAR_14->recordcopy == VAR_15[0].cElements, "got %d\n", VAR_14->recordcopy);
    FUNC_8(VAR_14->clearCalled == 0, "got %d\n", VAR_14->clearCalled);

    VAR_17 = FUNC_5(VAR_23);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);

    VAR_14->clearCalled = 0;
    VAR_14->sizeCalled = 0;
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
    FUNC_8(VAR_14->sizeCalled == 0, "Destroy->GetSize called %d times\n", VAR_14->sizeCalled);
    FUNC_8(VAR_14->clearCalled == VAR_15[0].cElements, "Destroy->Clear called %d times\n", VAR_14->clearCalled);
    FUNC_8(VAR_14->ref == VAR_6, "Wrong iRec refcount %d\n", VAR_14->ref);
  }
  else
  {
    VAR_17 = FUNC_5(VAR_16);
    FUNC_8(VAR_17 == VAR_7, "got 0x%08x\n", VAR_17);
  }

  FUNC_2(&VAR_14->IRecordInfo_iface);
}
