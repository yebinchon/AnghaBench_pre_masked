
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bin; } ;
typedef int RList ;
typedef TYPE_1__ RCore ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int ,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(RCore *VAR_1, int VAR_2) {
 RList *VAR_3 = ((void*)0);
 if (!VAR_1) {
  return 0;
 }
 if (!FUNC_0 (VAR_2)) {
  if (!(FUNC_1 (VAR_2) || FUNC_2 (VAR_2))) {
   FUNC_6 ("[Memory]\n");
  }
 }
 if (!(VAR_3 = FUNC_4 (VAR_1->bin))) {
  if (FUNC_0 (VAR_2)) {
   FUNC_5("[]");
  }
  return 0;
 }
 if (FUNC_0 (VAR_2)) {
  FUNC_5 ("[");
  FUNC_3 (VAR_3, 7, 0, VAR_0);
  FUNC_6 ("]");
  return 1;
 } else if (!(FUNC_1 (VAR_2) || FUNC_2 (VAR_2))) {
  FUNC_3 (VAR_3, 7, 0, VAR_2);
 }
 return 1;
}
