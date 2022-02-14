
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__ bmBits; } ;
typedef scalar_t__ OLE_YSIZE_HIMETRIC ;
typedef scalar_t__ OLE_XSIZE_HIMETRIC ;
typedef scalar_t__ OLE_HANDLE ;
typedef int * LPVOID ;
typedef int LPSTREAM ;
typedef int IPicture ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ BITMAP ;


 int FUNC_0 (int ,int,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,short*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 short VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (int ,unsigned int,int ,int *,int **) ;

__attribute__((used)) static void
FUNC_12(LPSTREAM VAR_4, unsigned int VAR_5)
{
 IPicture* VAR_6 = ((void*)0);
 HRESULT VAR_7;
 LPVOID VAR_8 = ((void*)0);
 OLE_HANDLE VAR_9, VAR_10;
 OLE_XSIZE_HIMETRIC VAR_11;
 OLE_YSIZE_HIMETRIC VAR_12;
 short VAR_13;
 DWORD VAR_14;
 ULONG VAR_15;

 VAR_8 = ((void*)0);
 VAR_7 = FUNC_11(VAR_4, VAR_5, VAR_3, &VAR_0, &VAR_8);
 VAR_6 = VAR_8;

 FUNC_10(VAR_7 == VAR_2,"OLP (NULL,..) does not return 0, but 0x%08x\n",VAR_7);
 FUNC_10(VAR_6 != ((void*)0),"OLP (NULL,..) returns NULL, instead of !NULL\n");
 if (VAR_6 == ((void*)0))
  return;

 VAR_8 = ((void*)0);
 VAR_7 = FUNC_1 (VAR_6, &VAR_0, &VAR_8);

 FUNC_10(VAR_7 == VAR_2,"IPicture_QI does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_8 != ((void*)0),"IPicture_QI does return NULL, instead of a ptr\n");

 FUNC_2 ((IPicture*)VAR_8);

 VAR_9 = 0;
 VAR_7 = FUNC_4 (VAR_6, &VAR_9);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_Handle does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_9 != 0, "IPicture_get_Handle returns a NULL handle, but it should be non NULL\n");

        if (VAR_9)
        {
            BITMAP VAR_16;
            FUNC_0(FUNC_9(VAR_9), sizeof(BITMAP), &VAR_16);
            FUNC_10(VAR_16.bmBits != 0, "not a dib\n");
        }

 VAR_11 = 0;
 VAR_7 = FUNC_7 (VAR_6, &VAR_11);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_Width does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_11 != 0, "IPicture_get_Width returns 0, but it should not be 0.\n");

 VAR_12 = 0;
 VAR_7 = FUNC_5 (VAR_6, &VAR_12);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_Height does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_12 != 0, "IPicture_get_Height returns 0, but it should not be 0.\n");

 VAR_13 = 0;
 VAR_7 = FUNC_6 (VAR_6, &VAR_13);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_Type does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_13 == VAR_1, "IPicture_get_Type returns %d, but it should be PICTYPE_BITMAP(%d).\n", VAR_13, VAR_1);

 VAR_14 = 0;
 VAR_7 = FUNC_3 (VAR_6, &VAR_14);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_Attributes does not return S_OK, but 0x%08x\n", VAR_7);
 FUNC_10(VAR_14 == 0, "IPicture_get_Attributes returns %d, but it should be 0.\n", VAR_14);

 VAR_10 = 0;
 VAR_7 = FUNC_8 (VAR_6, &VAR_10);
 FUNC_10(VAR_7 == VAR_2,"IPicture_get_hPal does not return S_OK, but 0x%08x\n", VAR_7);

 FUNC_10(VAR_10 == 0, "IPicture_get_hPal returns %d, but it should be 0.\n", VAR_10);

 VAR_15 = FUNC_2 (VAR_6);
 FUNC_10 (VAR_15 == 0, "refcount after release is %d, but should be 0?\n", VAR_15);
}
