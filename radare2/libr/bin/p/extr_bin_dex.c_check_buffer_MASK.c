
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int tmp ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut8 VAR_1[8];
 int VAR_2 = FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1));
 if (VAR_2 < sizeof (VAR_1)) {
  return 0;
 }

 if (!FUNC_0 (VAR_1, "dex\n035\0", 8)) {
  return 1;
 }

 if (!FUNC_0 (VAR_1, "dex\n036\0", 8)) {
  return 1;
 }

 if (!FUNC_0 (VAR_1, "dex\n038\0", 8)) {
  return 1;
 }

 if (!FUNC_0 (VAR_1, "dex\n009\0", 8)) {
  return 1;
 }

 if (!FUNC_0 (VAR_1, "dex\n009\0", 8)) {
  return 1;
 }

 if (!FUNC_0 (VAR_1, "dex\n", 4)) {
  return 1;
 }
 return 0;
}
