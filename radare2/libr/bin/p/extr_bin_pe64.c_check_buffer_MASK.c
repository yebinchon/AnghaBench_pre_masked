
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 ut64 VAR_1 = FUNC_3 (VAR_0);
 if (VAR_1 <= 0x3d) {
  return 0;
 }
 ut16 VAR_2 = FUNC_2 (VAR_0, 0x3c);
 if (VAR_2 + 26 < VAR_1) {



  ut8 VAR_3[2];
  FUNC_1 (VAR_0, 0, VAR_3, sizeof (VAR_3));
  if (!FUNC_0 (VAR_3, "MZ", 2)) {
   FUNC_1 (VAR_0, VAR_2, VAR_3, sizeof (VAR_3));


   if (!FUNC_0 (VAR_3, "PE", 2)) {
    FUNC_1 (VAR_0, VAR_2 + 0x18, VAR_3, sizeof (VAR_3));
    return !FUNC_0 (VAR_3, "\x0b\x02", 2);
   }
  }
 }
 return 0;
}
