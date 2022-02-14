
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int hdr ;
typedef int arch ;
typedef int RBuffer ;


 scalar_t__ FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (int *,int,scalar_t__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 if (FUNC_2 (VAR_0) < 32) {
  return 0;
 }

 ut8 VAR_1[4];
 ut8 VAR_2[9] = { 0 };
 int VAR_3 = FUNC_1 (VAR_0, 9, VAR_2, sizeof (VAR_2) - 1);
 int VAR_4 = FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1));
 if (VAR_4 != sizeof (VAR_1) || FUNC_0 (VAR_1, "dyld", 4)) {
  return 0;
 }
 if (VAR_3 > 0 && VAR_2[0] && !FUNC_3 ((const char *)VAR_2, "arm64")) {
  return 0;
 }
 return 1;
}
