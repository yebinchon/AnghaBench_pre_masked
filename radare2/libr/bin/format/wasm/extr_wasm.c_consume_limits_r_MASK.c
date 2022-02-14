
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct r_bin_wasm_resizable_limits_t {int maximum; scalar_t__ flags; int initial; } ;
typedef int RBuffer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static size_t FUNC_5 (RBuffer *VAR_0, ut64 VAR_1, struct r_bin_wasm_resizable_limits_t *VAR_2) {
 if (!VAR_0 || VAR_1 >= FUNC_3 (VAR_0) || FUNC_4 (VAR_0) > VAR_1 || !VAR_2) {
  return 0;
 }
 ut32 VAR_3 = FUNC_4 (VAR_0);
 if (!(FUNC_2 (VAR_0, VAR_1, &VAR_2->flags))) {
  return 0;
 }
 if (!(FUNC_1 (VAR_0, VAR_1, &VAR_2->initial))) {
  return 0;
 }
 if (VAR_2->flags && (!(FUNC_1 (VAR_0, VAR_1, &VAR_2->maximum)))) {
  return 0;
 }
 return (size_t)FUNC_0 (FUNC_4 (VAR_0) - VAR_3);
}
