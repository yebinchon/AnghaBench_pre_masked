
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 ut8 VAR_1[4];
 const ut64 VAR_2 = FUNC_3 (VAR_0);
 FUNC_1 (VAR_0, 0, VAR_1, 4);
 if (VAR_2 >= 0x300 && !FUNC_0 (VAR_1, "\xca\xfe\xba\xbe", 4)) {
  ut64 VAR_3 = 4 * sizeof (32);
  ut64 VAR_4 = FUNC_2 (VAR_0, VAR_3);
  if (VAR_4 > 0 && VAR_4 + 4 < VAR_2) {
   ut64 VAR_5 = 0;
   FUNC_1 (VAR_0, VAR_5 + VAR_4, VAR_1, 4);
   if (!FUNC_0 (VAR_1, "\xce\xfa\xed\xfe", 4) ||
    !FUNC_0 (VAR_1, "\xfe\xed\xfa\xce", 4) ||
    !FUNC_0 (VAR_1, "\xfe\xed\xfa\xcf", 4) ||
    !FUNC_0 (VAR_1, "\xcf\xfa\xed\xfe", 4)) {
    return 1;
   }
  }
 }
 return 0;
}
