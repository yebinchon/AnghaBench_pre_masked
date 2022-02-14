
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ FUNC_0 (char const*,int*,int*,int*,int ) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0) {
 ut8 VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;
 if (FUNC_0 (VAR_0, &VAR_1, &VAR_2, &VAR_3, 0)) {
  static char VAR_4[32];
  FUNC_1 (VAR_4, "#%02x%02x%02x", VAR_1, VAR_2, VAR_3);
  return VAR_4;
 }
 return "";
}
