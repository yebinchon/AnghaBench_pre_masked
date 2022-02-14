
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r_bin_vsf_obj {struct r_bin_vsf_obj* maincpu; } ;
struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ bin_obj; } ;
typedef TYPE_2__ RBinFile ;


 int FUNC_0 (struct r_bin_vsf_obj*) ;

__attribute__((used)) static void FUNC_1(RBinFile *VAR_0) {
 struct r_bin_vsf_obj *VAR_1 = (struct r_bin_vsf_obj *)VAR_0->o->bin_obj;
 FUNC_0 (VAR_1->maincpu);
 FUNC_0 (VAR_1);
}
