
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int f_nscns; } ;
struct r_bin_coff_obj {TYPE_2__* scn_hdrs; TYPE_1__ hdr; } ;
struct coff_symbol {int n_scnum; scalar_t__ n_value; } ;
struct TYPE_7__ {scalar_t__ paddr; } ;
struct TYPE_6__ {scalar_t__ s_scnptr; } ;
typedef TYPE_3__ RBinAddr ;



__attribute__((used)) static int FUNC_0(struct r_bin_coff_obj *VAR_0, RBinAddr *VAR_1, struct coff_symbol *VAR_2) {
 if (VAR_2->n_scnum < 1 || VAR_2->n_scnum > VAR_0->hdr.f_nscns) {
  return 0;
 }
 VAR_1->paddr = VAR_0->scn_hdrs[VAR_2->n_scnum - 1].s_scnptr + VAR_2->n_value;
 return 1;
}
