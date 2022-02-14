
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct r_bin_mz_obj_t {int kv; } ;
typedef int Sdb ;
typedef int RBuffer ;
typedef int RBinFile ;


 struct r_bin_mz_obj_t* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static bool FUNC_2(RBinFile *VAR_0, void **VAR_1, RBuffer *VAR_2, ut64 VAR_3, Sdb *VAR_4) {
 struct r_bin_mz_obj_t *VAR_5 = FUNC_0 (VAR_2);
 if (VAR_5) {
  FUNC_1 (VAR_4, "info", VAR_5->kv);
  *VAR_1 = VAR_5;
  return 1;
 }
 return 0;
}
