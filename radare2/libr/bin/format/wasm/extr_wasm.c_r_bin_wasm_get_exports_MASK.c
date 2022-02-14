
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * g_exports; int g_sections; } ;
typedef int RList ;
typedef int RBinWasmSection ;
typedef TYPE_1__ RBinWasmObj ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;

RList *FUNC_5 (RBinWasmObj *VAR_1) {
 RBinWasmSection *VAR_2 = ((void*)0);
 RList *VAR_3 = ((void*)0);

 if (!VAR_1 || !VAR_1->g_sections) {
  return ((void*)0);
 }
 if (VAR_1->g_exports) {
  return VAR_1->g_exports;
 }
 if (!(VAR_3 = FUNC_1 (VAR_1->g_sections, VAR_0))) {
  return FUNC_4 ();
 }

 if (!(VAR_2 = (RBinWasmSection *)FUNC_2 (VAR_3))) {
  FUNC_3 (VAR_3);
  return FUNC_4 ();
 }
 VAR_1->g_exports = FUNC_0 (VAR_1, VAR_2);
 FUNC_3 (VAR_3);
 return VAR_1->g_exports;
}
