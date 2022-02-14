
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut16 ;
typedef int h ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0, ut16 VAR_1) {
 ut8 VAR_2[2];
 if (FUNC_1 (VAR_0, VAR_1, VAR_2, sizeof (VAR_2)) != sizeof (VAR_2)) {
  return 0;
 }
 if (!FUNC_0 (VAR_2, "PE", 2)) {
  if (VAR_1 + 0x20 < FUNC_2 (VAR_0)) {
   if (FUNC_1 (VAR_0, VAR_1 + 0x18, VAR_2, sizeof (VAR_2)) != 2) {
    return 0;
   }
   if (!FUNC_0 (VAR_2, "\x0b\x01", 2)) {
    return 1;
   }
  }
 } else {
  if (!FUNC_0 (VAR_2, "NE", 2)
   || !FUNC_0 (VAR_2, "LE", 2)
   || !FUNC_0 (VAR_2, "LX", 2)
   || !FUNC_0 (VAR_2, "PL", 2)) {
   return 1;
  }
 }
 return 0;
}
