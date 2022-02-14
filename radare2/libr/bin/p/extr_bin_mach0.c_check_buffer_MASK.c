
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0) {
 if (FUNC_2 (VAR_0) >= 4) {
  ut8 VAR_1[4] = {0};
  if (FUNC_1 (VAR_0, 0, VAR_1, 4)) {
   if (!FUNC_0 (VAR_1, "\xce\xfa\xed\xfe", 4) ||
    !FUNC_0 (VAR_1, "\xfe\xed\xfa\xce", 4)) {
    return 1;
   }
  }
 }
 return 0;
}
