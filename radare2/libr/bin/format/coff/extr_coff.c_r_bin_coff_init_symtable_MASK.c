
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_2__ {int f_symptr; int f_nsyms; } ;
struct r_bin_coff_obj {int size; scalar_t__ symbols; TYPE_1__ hdr; scalar_t__ endian; int b; } ;
struct coff_symbol {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int *,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct r_bin_coff_obj *VAR_0) {
 int VAR_1, VAR_2;
 ut64 VAR_3 = VAR_0->hdr.f_symptr;
 if (VAR_0->hdr.f_nsyms >= 0xffff || !VAR_0->hdr.f_nsyms) {
  return 0;
 }
 VAR_2 = VAR_0->hdr.f_nsyms * sizeof (struct coff_symbol);
 if (VAR_2 < 0 ||
  VAR_2 > VAR_0->size ||
  VAR_3 > VAR_0->size ||
  VAR_3 + VAR_2 > VAR_0->size) {
  return 0;
 }
 VAR_0->symbols = FUNC_1 (1, VAR_2 + sizeof (struct coff_symbol));
 if (!VAR_0->symbols) {
  return 0;
 }
 VAR_1 = FUNC_2 (VAR_0->b, VAR_3, (ut8 *)VAR_0->symbols, VAR_0->endian? "8c1I2S2c": "8c1i2s2c", VAR_0->hdr.f_nsyms);
 if (VAR_1 != VAR_2) {
  FUNC_0 (VAR_0->symbols);
  return 0;
 }
 return 1;
}
