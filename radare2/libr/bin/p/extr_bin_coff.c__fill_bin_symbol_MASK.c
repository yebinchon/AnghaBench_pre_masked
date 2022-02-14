
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int f_nsyms; scalar_t__ f_nscns; } ;
struct r_bin_coff_obj {TYPE_2__* scn_hdrs; struct coff_symbol* symbols; TYPE_1__ hdr; } ;
struct coff_symbol {int n_sclass; int n_scnum; scalar_t__ n_value; } ;
struct TYPE_10__ {int constpool; } ;
struct TYPE_9__ {char* forwarder; char* type; int size; scalar_t__ ordinal; scalar_t__ paddr; int name; } ;
struct TYPE_8__ {scalar_t__ s_scnptr; } ;
typedef TYPE_3__ RBinSymbol ;
typedef TYPE_4__ RBin ;







 void* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct r_bin_coff_obj*,struct coff_symbol*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool FUNC_5(RBin *VAR_2, struct r_bin_coff_obj *VAR_3, int VAR_4, RBinSymbol **VAR_5) {
 RBinSymbol *VAR_6 = *VAR_5;
 struct coff_symbol *VAR_7 = ((void*)0);
 if (VAR_4 < 0 || VAR_4 > VAR_3->hdr.f_nsyms) {
  return 0;
 }
 if (!VAR_3->symbols) {
  return 0;
 }
 VAR_7 = &VAR_3->symbols[VAR_4];
 char *VAR_8 = FUNC_1 (VAR_3, VAR_7);
 if (!VAR_8) {
  return 0;
 }
 VAR_6->name = FUNC_4 (VAR_8);
 FUNC_0 (VAR_8);
 VAR_6->forwarder = "NONE";

 switch (VAR_7->n_sclass) {
 case 130:
  VAR_6->type = VAR_0;
  break;
 case 131:
  VAR_6->type = "FILE";
  break;
 case 129:
  VAR_6->type = VAR_1;
  break;
 case 132:
  if (VAR_3->symbols[VAR_4].n_scnum) {
   VAR_6->type = VAR_0;
  } else {
   VAR_6->type = "EXTERNAL";
  }
  break;
 case 128:
  VAR_6->type = "STATIC";
  break;
 default:
  VAR_6->type = FUNC_2 (&VAR_2->constpool, FUNC_3 ("%i", VAR_7->n_sclass));
  break;
 }
 if (VAR_3->symbols[VAR_4].n_scnum < VAR_3->hdr.f_nscns + 1 &&
     VAR_3->symbols[VAR_4].n_scnum > 0) {

  VAR_6->paddr = VAR_3->scn_hdrs[VAR_7->n_scnum - 1].s_scnptr + VAR_7->n_value;
 }
 VAR_6->size = 4;
 VAR_6->ordinal = 0;
 return 1;
}
