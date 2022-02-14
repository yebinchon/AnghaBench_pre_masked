
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRSRC ;
typedef int HMODULE ;
typedef int * HGLOBAL ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,scalar_t__,int ) ;
 int FUNC_7 (char*,char const*,...) ;

unsigned char* FUNC_8(HMODULE VAR_0, char* VAR_1, char* VAR_2, const char* VAR_3, DWORD* VAR_4, BOOL VAR_5)
{
 HGLOBAL VAR_6;
 HRSRC VAR_7;
 unsigned char* VAR_8 = ((void*)0);

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_7("Could not locate resource '%s': %s\n", VAR_3, FUNC_4());
  goto out;
 }
 VAR_6 = FUNC_1(VAR_0, VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_7("Could not load resource '%s': %s\n", VAR_3, FUNC_4());
  goto out;
 }
 *VAR_4 = FUNC_3(VAR_0, VAR_7);

 if (VAR_5) {
  VAR_8 = (unsigned char*)FUNC_5(*VAR_4);
  if (VAR_8 == ((void*)0)) {
   FUNC_7("Coult not allocate resource '%s'\n", VAR_3);
   goto out;
  }
  FUNC_6(VAR_8, FUNC_2(VAR_6), *VAR_4);
 } else {
  VAR_8 = (unsigned char*)FUNC_2(VAR_6);
 }

out:
 return VAR_8;
}
