
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
struct r_bin_te_obj_t {int kv; } ;
typedef int Sdb ;
typedef int RBuffer ;
typedef int RBinFile ;


 scalar_t__ VAR_0 ;
 struct r_bin_te_obj_t* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static bool FUNC_4(RBinFile *VAR_1, void **VAR_2, RBuffer *VAR_3, ut64 VAR_4, Sdb *VAR_5) {
 FUNC_2 (VAR_1 && VAR_2 && VAR_3, 0);
 ut64 VAR_6 = FUNC_1 (VAR_3);
 if (VAR_6 == 0 || VAR_6 == VAR_0) {
  return 0;
 }
 struct r_bin_te_obj_t *VAR_7 = FUNC_0 (VAR_3);
 if (VAR_7) {
  FUNC_3 (VAR_5, "info", VAR_7->kv);
 }
 *VAR_2 = VAR_7;
 return 1;
}
