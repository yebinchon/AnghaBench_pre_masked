
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 char* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static char *FUNC_6() {

 if (!VAR_2) {

  VAR_2 = FUNC_2 (96096);
  if (!VAR_2) {
   return ((void*)0);
  }
 }
 FUNC_3 (VAR_2, 0, 96096);
 if (!FUNC_1 (VAR_2, 96096 - 1, VAR_1)) {
  return ((void*)0);
 }
 if (FUNC_0 (VAR_1)) {
  return ((void*)0);
 }
 VAR_2[FUNC_5 (VAR_2) - 1] = 0;
 return FUNC_4 (VAR_2);
}
