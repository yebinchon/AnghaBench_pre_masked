
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_10__ {int code; } ;
struct TYPE_9__ {int g_codes; TYPE_1__* g_start; int g_sections; scalar_t__ entrypoint; } ;
struct TYPE_8__ {int index; } ;
typedef int RList ;
typedef TYPE_1__ RBinWasmStartEntry ;
typedef int RBinWasmSection ;
typedef TYPE_2__ RBinWasmObj ;
typedef TYPE_3__ RBinWasmCodeEntry ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ,int ) ;

ut32 FUNC_5 (RBinWasmObj *VAR_1) {
 RList *VAR_2 = ((void*)0);
 RBinWasmStartEntry *VAR_3 = ((void*)0);
 RBinWasmSection *VAR_4 = ((void*)0);
 RBinWasmCodeEntry *VAR_5 = ((void*)0);

 if (!VAR_1 || !VAR_1->g_sections) {
  return 0;
 }
 if (VAR_1->entrypoint) {
  return VAR_1->entrypoint;
 }
 if (VAR_1->g_start) {
  VAR_3 = VAR_1->g_start;
 } else if (!(VAR_2 = FUNC_0 (VAR_1->g_sections, VAR_0))) {
  return 0;
 } else if (!(VAR_4 = (RBinWasmSection *)FUNC_2 (VAR_2))) {
  FUNC_3 (VAR_2);
  return 0;
 } else {
  VAR_3 = FUNC_1 (VAR_1, VAR_4);
  VAR_1->g_start = VAR_3;
 }
 if (!VAR_3) {
  FUNC_3 (VAR_2);
  return 0;
 }

 if (!VAR_1->g_codes) {
  FUNC_3 (VAR_2);
  return 0;
 }
 VAR_5 = FUNC_4 (VAR_1->g_codes, VAR_3->index);
 FUNC_3 (VAR_2);
 return (ut32) (VAR_5 ? VAR_5->code : 0);
}
