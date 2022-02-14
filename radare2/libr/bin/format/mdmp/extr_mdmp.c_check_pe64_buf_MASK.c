
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int *,int) ;

__attribute__((used)) static int FUNC_3(RBuffer *VAR_0, ut64 VAR_1) {
 int VAR_2, VAR_3 = 0;
 if (!VAR_0 || VAR_1 <= 0x3d) {
  return 0;
 }
 VAR_2 = FUNC_1 (VAR_0, 0x3c) | (FUNC_1 (VAR_0, 0x3d)<<8);
 if (VAR_1 >= VAR_2 + 0x20) {
  ut8 VAR_4[2], VAR_5[2], VAR_6[2];
  FUNC_2 (VAR_0, 0, VAR_4, 2);
  FUNC_2 (VAR_0, VAR_2, VAR_5, 2);
  FUNC_2 (VAR_0, VAR_2 + 0x18, VAR_6, 2);
  if (!FUNC_0 (VAR_4, "MZ", 2) && !FUNC_0 (VAR_5, "PE", 2) && !FUNC_0 (VAR_6, "\x0b\x02", 2)) {
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
