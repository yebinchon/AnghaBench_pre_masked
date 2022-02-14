
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int IVdsServiceLoader ;
typedef int IVdsService ;
typedef int IEnumVdsObject ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int,int *,void**) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int *,int *,int ,int ,int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int *,char*,int **) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int **) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int *,int ,char*,int ) ;

BOOL FUNC_17(DWORD VAR_11)
{
 BOOL VAR_12 = VAR_4;
 HRESULT VAR_13;
 wchar_t VAR_14[24];
 IVdsServiceLoader *VAR_15;
 IVdsService *VAR_16;
 IEnumVdsObject *VAR_17;

 FUNC_1(VAR_11);
 FUNC_16(VAR_14, FUNC_0(VAR_14), L"\\\\?\\PhysicalDrive%lu", VAR_11);


 FUNC_5(FUNC_3(((void*)0), VAR_3));
 FUNC_5(FUNC_4(((void*)0), -1, ((void*)0), ((void*)0), VAR_6,
  VAR_7, ((void*)0), 0, ((void*)0)));


 VAR_13 = FUNC_2(&VAR_2, ((void*)0), VAR_0 | VAR_1,
  &VAR_5, (void **)&VAR_15);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not create VDS Loader Instance: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_6(VAR_15, L"", &VAR_16);
 FUNC_7(VAR_15);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not load VDS Service: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_12(VAR_16);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("VDS Service is not ready: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_9(VAR_16, VAR_10, &VAR_17);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not query VDS Service Providers: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_8(VAR_16);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not clean up VDS mountpoints: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_11(VAR_16);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not refresh VDS layout: %s", FUNC_14());
  goto out;
 }


 VAR_13 = FUNC_10(VAR_16);
 if (VAR_13 != VAR_8) {
  FUNC_13(VAR_13);
  FUNC_15("Could not refresh VDS layout: %s", FUNC_14());
  goto out;
 }
 VAR_12 = VAR_9;

 out:
  return VAR_12;
}
