
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ninlogohead ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut8 VAR_1[6];
 if (FUNC_1 (VAR_0, 0xc0, VAR_1, sizeof (VAR_1)) == 6) {

  if (!FUNC_0 (VAR_1, "\x24\xff\xae\x51\x69\x9a", 6)) {
   return 1;
  }

  if (!FUNC_0 (VAR_1, "\xC8\x60\x4F\xE2\x01\x70", 6)){
   return 1;
  }
 }
 return 0;
}
