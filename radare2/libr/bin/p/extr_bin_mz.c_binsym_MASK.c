
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ bin_obj; } ;
typedef TYPE_2__ RBinFile ;
typedef int RBinAddr ;



 int * FUNC_0 (scalar_t__) ;

__attribute__((used)) static RBinAddr *FUNC_1(RBinFile *VAR_0, int VAR_1) {
 RBinAddr *VAR_2 = ((void*)0);
 if (VAR_0 && VAR_0->o && VAR_0->o->bin_obj) {
  switch (VAR_1) {
  case 128:
   VAR_2 = FUNC_0 (VAR_0->o->bin_obj);
   break;
  }
 }
 return VAR_2;
}
