
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFileDateLS; int dwFileDateMS; int dwFileSubtype; int dwFileType; int dwFileOS; int dwFileFlags; int dwFileFlagsMask; int dwProductVersionLS; int dwProductVersionMS; int dwFileVersionLS; int dwFileVersionMS; int dwStrucVersion; int dwSignature; } ;
typedef int Sdb ;
typedef TYPE_1__ PE_VS_FIXEDFILEINFO ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int ,int ) ;

__attribute__((used)) static Sdb* FUNC_2(PE_VS_FIXEDFILEINFO* VAR_0) {
 Sdb* VAR_1 = ((void*)0);
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_1 = FUNC_0 ();
 if (!VAR_1) {
  return ((void*)0);
 }
 FUNC_1 (VAR_1, "Signature", VAR_0->dwSignature, 0);
 FUNC_1 (VAR_1, "StrucVersion", VAR_0->dwStrucVersion, 0);
 FUNC_1 (VAR_1, "FileVersionMS", VAR_0->dwFileVersionMS, 0);
 FUNC_1 (VAR_1, "FileVersionLS", VAR_0->dwFileVersionLS, 0);
 FUNC_1 (VAR_1, "ProductVersionMS", VAR_0->dwProductVersionMS, 0);
 FUNC_1 (VAR_1, "ProductVersionLS", VAR_0->dwProductVersionLS, 0);
 FUNC_1 (VAR_1, "FileFlagsMask", VAR_0->dwFileFlagsMask, 0);
 FUNC_1 (VAR_1, "FileFlags", VAR_0->dwFileFlags, 0);
 FUNC_1 (VAR_1, "FileOS", VAR_0->dwFileOS, 0);
 FUNC_1 (VAR_1, "FileType", VAR_0->dwFileType, 0);
 FUNC_1 (VAR_1, "FileSubtype", VAR_0->dwFileSubtype, 0);
 FUNC_1 (VAR_1, "FileDateMS", VAR_0->dwFileDateMS, 0);
 FUNC_1 (VAR_1, "FileDateLS", VAR_0->dwFileDateLS, 0);
 return VAR_1;
}
