
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int f_nsyms; } ;
struct r_bin_coff_obj {TYPE_2__* symbols; TYPE_1__ hdr; } ;
struct TYPE_18__ {TYPE_3__* o; } ;
struct TYPE_17__ {int ordinal; } ;
struct TYPE_16__ {int free; } ;
struct TYPE_15__ {scalar_t__ bin_obj; } ;
struct TYPE_14__ {scalar_t__ n_numaux; } ;
typedef TYPE_4__ RList ;
typedef TYPE_5__ RBinImport ;
typedef TYPE_6__ RBinFile ;


 TYPE_5__* FUNC_0 (struct r_bin_coff_obj*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 TYPE_4__* FUNC_2 () ;

__attribute__((used)) static RList *FUNC_3(RBinFile *VAR_1) {
 int VAR_2;
 RList *VAR_3 = ((void*)0);
 struct r_bin_coff_obj *VAR_4 = (struct r_bin_coff_obj*)VAR_1->o->bin_obj;
 if (!(VAR_3 = FUNC_2 ())) {
  return VAR_3;
 }
 VAR_3->free = VAR_0;
 if (VAR_4->symbols) {
  int VAR_5 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_4->hdr.f_nsyms; VAR_2++) {
   RBinImport *VAR_6 = FUNC_0 (VAR_4, VAR_2);
   if (VAR_6) {
    VAR_6->ordinal = VAR_5++;
    FUNC_1 (VAR_3, VAR_6);
   }
   VAR_2 += VAR_4->symbols[VAR_2].n_numaux;
  }
 }
 return VAR_3;
}
