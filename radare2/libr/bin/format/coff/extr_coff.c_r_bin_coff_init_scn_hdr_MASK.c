
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_2__ {scalar_t__ f_magic; int f_nscns; scalar_t__ f_opthdr; } ;
struct r_bin_coff_obj {scalar_t__ size; scalar_t__ scn_hdrs; TYPE_1__ hdr; scalar_t__ endian; int b; } ;
struct coff_scn_hdr {int dummy; } ;
struct coff_opt_hdr {int dummy; } ;
struct coff_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__,int *,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct r_bin_coff_obj *VAR_1) {
 int VAR_2, VAR_3;
 ut64 VAR_4 = sizeof (struct coff_hdr) + (VAR_1->hdr.f_opthdr ? sizeof (struct coff_opt_hdr) : 0);
 if (VAR_1->hdr.f_magic == VAR_0) {
  VAR_4 += 2;
 }
 VAR_3 = VAR_1->hdr.f_nscns * sizeof (struct coff_scn_hdr);
 if (VAR_4 > VAR_1->size || VAR_4 + VAR_3 > VAR_1->size || VAR_3 < 0) {
  return 0;
 }
 VAR_1->scn_hdrs = FUNC_1 (1, VAR_3 + sizeof (struct coff_scn_hdr));
 if (!VAR_1->scn_hdrs) {
  return 0;
 }
 VAR_2 = FUNC_2 (VAR_1->b, VAR_4, (ut8 *)VAR_1->scn_hdrs, VAR_1->endian? "8c6I2S1I": "8c6i2s1i", VAR_1->hdr.f_nscns);
 if (VAR_2 != VAR_3) {
  FUNC_0 (VAR_1->scn_hdrs);
  return 0;
 }
 return 1;
}
