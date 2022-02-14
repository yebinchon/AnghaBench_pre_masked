
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int seekto ;
typedef int ULARGE_INTEGER ;
struct TYPE_5__ {int LowPart; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef int * LPVOID ;
typedef int LPSTREAM ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IPicture ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,short*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__,int ,int *) ;
 short VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int ,int,int ,int *,int **) ;

__attribute__((used)) static void FUNC_11(void) {
 LPBYTE VAR_5;
 LPSTREAM VAR_6;
 IPicture* VAR_7 = ((void*)0);
 HRESULT VAR_8;
 LPVOID VAR_9 = ((void*)0);
 HGLOBAL VAR_10;
 ULARGE_INTEGER VAR_11;
 LARGE_INTEGER VAR_12;
 short VAR_13;


 VAR_10 = FUNC_1 (0, 200);
 VAR_5 = FUNC_2 (VAR_10);
 VAR_5 += 42;
 FUNC_7(VAR_5,"lt\0\0",4);
 ((DWORD*)VAR_5)[1] = 0;
 VAR_8 = FUNC_0 (VAR_10, VAR_4, &VAR_6);
 FUNC_9 (VAR_8 == VAR_3, "CreatestreamOnHGlobal failed? doubt it... hres 0x%08x\n", VAR_8);

 FUNC_8(&VAR_12,0,sizeof(VAR_12));
 VAR_12.u.LowPart = 42;
 VAR_8 = FUNC_6(VAR_6,VAR_12,VAR_2,&VAR_11);
 FUNC_9 (VAR_8 == VAR_3, "istream seek failed? doubt it... hres 0x%08x\n", VAR_8);

 VAR_9 = ((void*)0);
 VAR_8 = FUNC_10(VAR_6, 8, VAR_4, &VAR_0, &VAR_9);
 VAR_7 = VAR_9;
 FUNC_9(VAR_8 == VAR_3,"empty picture not loaded, hres 0x%08x\n", VAR_8);
 FUNC_9(VAR_7 != ((void*)0),"empty picture not loaded, pic is NULL\n");

 VAR_8 = FUNC_4 (VAR_7, &VAR_13);
 FUNC_9 (VAR_8 == VAR_3,"empty picture get type failed with hres 0x%08x\n", VAR_8);
 FUNC_9 (VAR_13 == VAR_1,"type is %d, but should be PICTYPE_NONE(0)\n", VAR_13);

 FUNC_3 (VAR_7);
 FUNC_5 (VAR_6);
}
