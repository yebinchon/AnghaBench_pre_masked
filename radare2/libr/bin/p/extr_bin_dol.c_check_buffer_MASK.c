
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int tmp ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut8 VAR_1[6];
 int VAR_2 = FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1));
 bool VAR_3 = VAR_2 == sizeof (VAR_1) && !FUNC_0 (VAR_1, "\x00\x00\x01\x00\x00\x00", sizeof (VAR_1));
 if (VAR_3) {
  int VAR_4 = FUNC_1 (VAR_0, 6, VAR_1, sizeof (VAR_1));
  if (VAR_4 != 6) {
   return 0;
  }
  return sizeof (VAR_1) && !FUNC_0 (VAR_1, "\x00\x00\x00\x00\x00\x00", sizeof (VAR_1));
 }
 return 0;
}
