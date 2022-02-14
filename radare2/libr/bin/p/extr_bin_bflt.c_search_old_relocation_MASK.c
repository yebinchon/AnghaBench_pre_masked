
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;
struct reloc_struct_t {scalar_t__ data_offset; } ;



__attribute__((used)) static int FUNC_0(struct reloc_struct_t *VAR_0,
                                 ut32 VAR_1, int VAR_2) {
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1 == VAR_0[VAR_3].data_offset) {
   return VAR_3;
  }
 }
 return -1;
}
