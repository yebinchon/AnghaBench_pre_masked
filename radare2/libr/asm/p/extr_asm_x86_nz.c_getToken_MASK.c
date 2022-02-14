
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x86newTokenType ;
typedef int ut8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static x86newTokenType FUNC_5(const char *VAR_4, size_t *VAR_5, size_t *VAR_6) {
 if (*VAR_5 > FUNC_4 (VAR_4)) {
  return VAR_0;
 }

 while (VAR_5 && VAR_4[*VAR_5] && FUNC_3 ((ut8)VAR_4[*VAR_5])) {
  ++(*VAR_5);
 }

 if (!VAR_4[*VAR_5]) {
  *VAR_6 = *VAR_5;
  return VAR_0;
 }
 if (FUNC_1 ((ut8)VAR_4[*VAR_5])) {
  *VAR_6 = *VAR_5;
  while (VAR_6 && VAR_4[*VAR_6] && FUNC_0 ((ut8)VAR_4[*VAR_6])) {
   ++(*VAR_6);
  }
  return VAR_3;
 }
 if (FUNC_2 ((ut8)VAR_4[*VAR_5])) {
  *VAR_6 = *VAR_5;
  while (VAR_6 && FUNC_0 ((ut8)VAR_4[*VAR_6])) {
   ++(*VAR_6);
  }
  return VAR_1;
 } else {
  *VAR_6 = *VAR_5 + 1;
  return VAR_2;
 }
}
