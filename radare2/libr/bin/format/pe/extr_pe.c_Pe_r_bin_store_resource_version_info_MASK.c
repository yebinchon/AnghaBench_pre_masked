
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stringFileInfo; scalar_t__ varFileInfo; scalar_t__ Value; } ;
typedef int Sdb ;
typedef TYPE_1__ PE_VS_VERSIONINFO ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static Sdb* FUNC_5(PE_VS_VERSIONINFO* VAR_0) {
 Sdb* VAR_1 = ((void*)0);
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_1 = FUNC_3 ();
 if (!VAR_1) {
  return ((void*)0);
 }
 if (VAR_0->Value) {
  FUNC_4 (VAR_1, "fixed_file_info", FUNC_0 (VAR_0->Value));
 }
 if (VAR_0->varFileInfo) {
  FUNC_4 (VAR_1, "var_file_info", FUNC_2 (VAR_0->varFileInfo));
 }
 if (VAR_0->stringFileInfo) {
  FUNC_4 (VAR_1, "string_file_info", FUNC_1 (VAR_0->stringFileInfo));
 }
 return VAR_1;
}
