
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_2__ {int f_opthdr; } ;
struct r_bin_coff_obj {scalar_t__ endian; int opt_hdr; int b; TYPE_1__ hdr; } ;
struct coff_opt_hdr {int dummy; } ;
struct coff_hdr {int dummy; } ;


 int FUNC_0 (int ,int,int *,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct r_bin_coff_obj *VAR_0) {
 int VAR_1;
 if (!VAR_0->hdr.f_opthdr) {
  return 0;
 }
 VAR_1 = FUNC_0 (VAR_0->b, sizeof (struct coff_hdr),
       (ut8 *)&VAR_0->opt_hdr, VAR_0->endian? "2S6I": "2s6i", 1);
 if (VAR_1 != sizeof (struct coff_opt_hdr)) {
  return 0;
 }
 return 1;
}
