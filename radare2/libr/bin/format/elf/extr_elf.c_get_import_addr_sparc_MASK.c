
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct ht_rel_t {int k; } ;
struct TYPE_3__ {int rva; } ;
typedef TYPE_1__ RBinElfSection ;
typedef int ELFOBJ ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static ut64 FUNC_1(ELFOBJ *VAR_2, struct ht_rel_t *VAR_3, RBinElfSection *VAR_4) {
 if (!VAR_4) {
  return VAR_1;
 }
 ut64 VAR_5 = VAR_4->rva;
 switch (VAR_0) {
 case 128:
  VAR_5 += VAR_3->k * 12 + 20;

  if (VAR_5 & 1) {
   VAR_5--;
  }
  return VAR_5;
 default:
  FUNC_0 ("Unknown sparc reloc type %d\n", VAR_0);
  return VAR_1;
 }
}
