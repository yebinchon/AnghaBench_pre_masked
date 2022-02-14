
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int amd29k_instr_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

ut64 FUNC_4(ut64 VAR_3, amd29k_instr_t* VAR_4) {
 if (!VAR_4) {
  return VAR_2;
 }
 int VAR_5 = FUNC_0 (VAR_4, 0);
 int VAR_6 = FUNC_0 (VAR_4, 1);
 int VAR_7 = FUNC_0 (VAR_4, 2);
 int VAR_8 = FUNC_0 (VAR_4, 3);
 int VAR_9 = FUNC_0 (VAR_4, 4);
 int VAR_10 = FUNC_0 (VAR_4, 5);

 int VAR_11 = FUNC_1 (VAR_4, 0);
 int VAR_12 = FUNC_1 (VAR_4, 1);
 if (FUNC_2 (VAR_0)) {
  return VAR_3 + ((int) VAR_11);
 } else if (FUNC_3 (VAR_1, VAR_0)) {
  return VAR_3 + ((int) VAR_12);
 }
 return VAR_2;
}
