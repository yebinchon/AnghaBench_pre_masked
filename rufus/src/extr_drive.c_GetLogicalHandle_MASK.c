
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 (char*,int ,int ,int ) ;
 char* FUNC_1 (int ,int ,int ,int ) ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

HANDLE FUNC_4(DWORD VAR_2, uint64_t VAR_3, BOOL VAR_4, BOOL VAR_5, BOOL VAR_6)
{
 HANDLE VAR_7 = VAR_1;
 char* VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_0);

 if (VAR_8 == ((void*)0)) {
  FUNC_3("No logical drive found (unpartitioned?)");
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_8, VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_8);
 return VAR_7;
}
