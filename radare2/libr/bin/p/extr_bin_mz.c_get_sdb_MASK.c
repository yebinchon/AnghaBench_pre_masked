
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r_bin_mz_obj_t {int * kv; } ;
struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ bin_obj; } ;
typedef int Sdb ;
typedef TYPE_2__ RBinFile ;



__attribute__((used)) static Sdb *FUNC_0(RBinFile *VAR_0) {
 const struct r_bin_mz_obj_t *VAR_1;
 if (VAR_0 && VAR_0->o && VAR_0->o->bin_obj) {
  VAR_1 = (struct r_bin_mz_obj_t *)VAR_0->o->bin_obj;
  if (VAR_1 && VAR_1->kv) {
   return VAR_1->kv;
  }
 }
 return ((void*)0);
}
