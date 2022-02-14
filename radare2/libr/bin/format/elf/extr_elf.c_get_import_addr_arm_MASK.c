
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
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static ut64 FUNC_1(ELFOBJ *VAR_3, struct ht_rel_t *VAR_4, RBinElfSection *VAR_5) {
 if (!VAR_5) {
  return VAR_1;
 }
 ut64 VAR_6 = VAR_5->rva;
 switch (VAR_0) {
 case 128: {
  VAR_6 += VAR_4->k * 12 + 20;

  if (VAR_6 & 1) {
   VAR_6--;
  }
  return VAR_6;
 }
 case 129:
  return VAR_6 + VAR_4->k * 16 + 32;
 default:
  FUNC_0 ("Unsupported relocation type for imports %d\n", VAR_0);
  return VAR_2;
 }
}
