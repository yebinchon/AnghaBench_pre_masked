
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int Sdb ;
typedef int RStack ;
typedef int RCore ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int,int ) ;

void FUNC_7(RCore *VAR_0, RStack *VAR_1, Sdb *VAR_2, ut64 VAR_3) {
 if (!FUNC_5 (VAR_2, FUNC_0(VAR_3), ((void*)0))) {
  ut64* VAR_4 = (ut64*) FUNC_3 (1 * sizeof (ut64));
  if (!VAR_4) {
   FUNC_1 ("Failed to allocate memory for address stack\n");
   return;
  }
  *VAR_4 = VAR_3;
  if (!FUNC_4 (VAR_1, (void*)VAR_4)) {
   FUNC_1 ("Failed to push address on stack\n");
   FUNC_2 (VAR_4);
   return;
  }
  FUNC_6 (VAR_2, FUNC_0 (VAR_3), 1, 0);
 }
}
