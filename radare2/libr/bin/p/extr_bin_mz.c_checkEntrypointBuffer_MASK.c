
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int st16 ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 st16 VAR_1 = FUNC_2 (VAR_0, 0x16);
 ut16 VAR_2 = FUNC_2 (VAR_0, 0x14);
 ut32 VAR_3 = ((FUNC_2 (VAR_0, 0x08) + VAR_1) << 4) + VAR_2;






 VAR_3 &= 0xffff;
 ut64 VAR_4 = FUNC_3 (VAR_0);
 if (VAR_3 >= 0x20 && VAR_3 + 1 < VAR_4) {
  ut16 VAR_5 = FUNC_2 (VAR_0, 0x3c);
  if (VAR_5 + 2 < VAR_4 && VAR_4 > 0x104) {
   ut8 VAR_6[2];
   if (FUNC_1 (VAR_0, VAR_5, VAR_6, 2) == 2) {
    if (!FUNC_0 (VAR_6, "PE", 2)) {
     return 0;
    }
   }
  }
  return 1;
 }
 return 0;
}
