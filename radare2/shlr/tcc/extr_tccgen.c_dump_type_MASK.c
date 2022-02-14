
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int t; TYPE_1__* ref; } ;
struct TYPE_4__ {int asm_label; int r; int v; } ;
typedef TYPE_2__ CType ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ,int *) ;

void FUNC_2(CType *VAR_1, int VAR_2) {
 if (VAR_2 <= 0) {
  return;
 }
 FUNC_0 ("------------------------\n");
 int VAR_3 = VAR_1->t & VAR_0;
 FUNC_0 ("BTYPE = %d ", VAR_3);
 switch (VAR_3) {
 case 128: FUNC_0 ("[UNION]\n");
  break;
 case 129: FUNC_0 ("[STRUCT]\n");
  break;
 case 130: FUNC_0 ("[PTR]\n");
  break;
 case 135: FUNC_0 ("[ENUM]\n");
  break;
 case 132: FUNC_0 ("[INT64_T]\n");
  break;
 case 133: FUNC_0 ("[INT32_T]\n");
  break;
 case 134: FUNC_0 ("[INT16_T]\n");
  break;
 case 131: FUNC_0 ("[INT8_T]\n");
  break;
 default:
  FUNC_0 ("\n");
  break;
 }
 if (VAR_1->ref) {
  FUNC_0 ("v = %d\n", VAR_1->ref->v);
  char *VAR_4 = ((void*)0);
  VAR_4 = FUNC_1 (VAR_1->ref->v, ((void*)0));
  if (VAR_4) {
   FUNC_0 ("var = %s\n", VAR_4);
  }
  if (VAR_1->ref->asm_label) {
   FUNC_0 ("asm_label = %s\n", VAR_1->ref->asm_label);
  }
  FUNC_0 ("r = %d\n", VAR_1->ref->r);
  FUNC_0 ("associated type:\n");

 }
}
