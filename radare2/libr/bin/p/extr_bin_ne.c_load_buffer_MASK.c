
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
typedef int r_bin_ne_obj_t ;
struct TYPE_5__ {TYPE_1__* rbin; } ;
struct TYPE_4__ {int verbose; } ;
typedef int Sdb ;
typedef int RBuffer ;
typedef TYPE_2__ RBinFile ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool FUNC_2(RBinFile *VAR_0, void **VAR_1, RBuffer *VAR_2, ut64 VAR_3, Sdb *VAR_4) {
 FUNC_1 (VAR_0 && VAR_1 && VAR_2, 0);
 r_bin_ne_obj_t *VAR_5 = FUNC_0 (VAR_2, VAR_0->rbin->verbose);
 if (VAR_5) {
  *VAR_1 = VAR_5;
  return 1;
 }
 return 0;
}
