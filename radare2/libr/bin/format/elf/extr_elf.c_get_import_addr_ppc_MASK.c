
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct ht_rel_t {int k; } ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ endian; int b; } ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_1__ RBinElfSection ;
typedef TYPE_2__ ELFOBJ ;


 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ut64 FUNC_3(ELFOBJ *VAR_0, struct ht_rel_t *VAR_1, RBinElfSection *VAR_2, int VAR_3) {
 ut8 VAR_4[4] = { 0 };
 if (!VAR_2) {
  return -1;
 }
 int VAR_5 = FUNC_0 (VAR_0->b, VAR_2->offset, VAR_4, sizeof (VAR_4));
 if (VAR_5 < 4) {
  return -1;
 }

 if (VAR_0->endian) {
  ut64 VAR_6 = FUNC_1 (VAR_4);
  VAR_6 -= (VAR_3 * 16);
  VAR_6 += (VAR_1->k * 16);
  return VAR_6;
 }
 ut64 VAR_7 = FUNC_2 (VAR_4);
 VAR_7 -= (VAR_3 * 12) + 20;
 VAR_7 += (VAR_1->k * 8);
 return VAR_7;
}
