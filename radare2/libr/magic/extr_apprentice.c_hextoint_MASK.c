
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0) {
 if (!FUNC_0 ((ut8)VAR_0)) {
  return -1;
 }
 if (FUNC_1 ((ut8)VAR_0)) {
  return VAR_0 - '0';
 }
 if ((VAR_0 >= 'a') && (VAR_0 <= 'f')) {
  return VAR_0 + 10 - 'a';
 }
 if ((VAR_0 >= 'A') && (VAR_0 <= 'F')) {
  return VAR_0 + 10 - 'A';
 }
 return -1;
}
