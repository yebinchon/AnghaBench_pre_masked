
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* LPVOID ;
typedef scalar_t__ HMODULE ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static HMODULE FUNC_2(void)
{
  if (VAR_8) return VAR_8;
  VAR_8 = FUNC_1("OLE32.DLL");
  if (!VAR_8) return 0;
  VAR_1 = (LPVOID)FUNC_0(VAR_8, "CoGetMarshalSizeMax");
  VAR_3 = (LPVOID)FUNC_0(VAR_8, "CoMarshalInterface");
  VAR_7 = (LPVOID)FUNC_0(VAR_8, "CoUnmarshalInterface");
  VAR_6 = (LPVOID)FUNC_0(VAR_8, "CoReleaseMarshalData");
  VAR_0 = (LPVOID)FUNC_0(VAR_8, "CoGetClassObject");
  VAR_2 = (LPVOID)FUNC_0(VAR_8, "CoGetPSClsid");
  VAR_4 = (LPVOID)FUNC_0(VAR_8, "CoTaskMemAlloc");
  VAR_5 = (LPVOID)FUNC_0(VAR_8, "CoTaskMemFree");
  return VAR_8;
}
