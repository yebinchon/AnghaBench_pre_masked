
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seekto ;
typedef int ULARGE_INTEGER ;
typedef short OLE_HANDLE ;
typedef int * LPVOID ;
typedef int LPSTREAM ;
typedef scalar_t__ LPBYTE ;
typedef int LARGE_INTEGER ;
typedef int IPicture ;
typedef short HRESULT ;
typedef int HGLOBAL ;
typedef short DWORD ;


 short FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 short FUNC_4 (int *,short*) ;
 short FUNC_5 (int *,short*) ;
 short FUNC_6 (int *,short*) ;
 int FUNC_7 (int ) ;
 short FUNC_8 (int ,int ,int ,int *) ;
 short VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__,char*,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int,char*,...) ;
 short FUNC_12 (int ,int,int ,int *,int **) ;

__attribute__((used)) static void FUNC_13(void) {
 LPBYTE VAR_5;
 LPSTREAM VAR_6;
 IPicture* VAR_7 = ((void*)0);
 HRESULT VAR_8;
 LPVOID VAR_9 = ((void*)0);
 HGLOBAL VAR_10;
 OLE_HANDLE VAR_11;
 ULARGE_INTEGER VAR_12;
 LARGE_INTEGER VAR_13;
 short VAR_14;
 DWORD VAR_15;


 VAR_10 = FUNC_1 (0, 8);
 VAR_5 = FUNC_2 (VAR_10);
 FUNC_9(VAR_5,"lt\0\0",4);
 ((DWORD*)VAR_5)[1] = 0;
 VAR_8 = FUNC_0 (VAR_10, VAR_4, &VAR_6);
 FUNC_11 (VAR_8 == VAR_3, "CreatestreamOnHGlobal failed? doubt it... hres 0x%08x\n", VAR_8);

 FUNC_10(&VAR_13,0,sizeof(VAR_13));
 VAR_8 = FUNC_8(VAR_6,VAR_13,VAR_2,&VAR_12);
 FUNC_11 (VAR_8 == VAR_3, "istream seek failed? doubt it... hres 0x%08x\n", VAR_8);

 VAR_9 = ((void*)0);
 VAR_8 = FUNC_12(VAR_6, 8, VAR_4, &VAR_0, &VAR_9);
 VAR_7 = VAR_9;
 FUNC_11(VAR_8 == VAR_3,"empty picture not loaded, hres 0x%08x\n", VAR_8);
 FUNC_11(VAR_7 != ((void*)0),"empty picture not loaded, pic is NULL\n");

 VAR_8 = FUNC_6 (VAR_7, &VAR_14);
 FUNC_11 (VAR_8 == VAR_3,"empty picture get type failed with hres 0x%08x\n", VAR_8);
 FUNC_11 (VAR_14 == VAR_1,"type is %d, but should be PICTYPE_NONE(0)\n", VAR_14);

 VAR_15 = 0xdeadbeef;
 VAR_8 = FUNC_4 (VAR_7, &VAR_15);
 FUNC_11 (VAR_8 == VAR_3,"empty picture get attributes failed with hres 0x%08x\n", VAR_8);
 FUNC_11 (VAR_15 == 0,"attr is %d, but should be 0\n", VAR_15);

 VAR_8 = FUNC_5 (VAR_7, &VAR_11);
 FUNC_11 (VAR_8 == VAR_3,"empty picture get handle failed with hres 0x%08x\n", VAR_8);
 FUNC_11 (VAR_11 == 0, "empty picture get handle did not return 0, but 0x%08x\n", VAR_11);
 FUNC_3 (VAR_7);
 FUNC_7 (VAR_6);
}
