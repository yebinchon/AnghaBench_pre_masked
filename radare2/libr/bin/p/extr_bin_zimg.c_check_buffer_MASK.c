
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zimghdr ;
typedef int ut8 ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut8 VAR_1[8];
 if (FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1))) {

  if (!FUNC_0 (VAR_1, "\x00\x00\xa0\xe1\x00\x00\xa0\xe1", 8)) {
   return 1;
  }
 }
 return 0;
}
