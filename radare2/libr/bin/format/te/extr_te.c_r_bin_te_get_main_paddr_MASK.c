
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef long long ut64 ;
struct r_bin_te_obj_t {int b; } ;
typedef int buf ;
struct TYPE_4__ {long long vaddr; int paddr; } ;
typedef TYPE_1__ RBinAddr ;


 long long VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct r_bin_te_obj_t*) ;
 int FUNC_3 (int ,int ,int*,int) ;

ut64 FUNC_4(struct r_bin_te_obj_t *VAR_1) {
 RBinAddr *VAR_2 = FUNC_2 (VAR_1);
 ut64 VAR_3 = 0LL;
 ut8 VAR_4[512];
 if (!VAR_1) {
  return 0LL;
 }
 if (FUNC_3 (VAR_1->b, VAR_2->paddr, VAR_4, sizeof (VAR_4)) == -1) {
  FUNC_0 ("Error: read (entry)\n");
 } else {
  if (VAR_4[367] == 0xe8) {
   int VAR_5 = (VAR_4[368] | VAR_4[369]<<8 | VAR_4[370]<<16 | VAR_4[371]<<24);
   VAR_5 += 367 + 5;
   VAR_3 = VAR_2->vaddr;
   if (VAR_5 >= (VAR_0 - VAR_3)) {
    FUNC_1 (VAR_2);
    return VAR_0;
   }
   VAR_3 += VAR_5;
  }
 }
 FUNC_1 (VAR_2);
 return VAR_3;
}
