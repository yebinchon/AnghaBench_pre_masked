
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static ut32 FUNC_1(ut32 VAR_1) {
 if (FUNC_0 (VAR_1)) {
  return VAR_1 - 22;
 }
 if (VAR_1 >= 'a' && VAR_1 <= 'z') {
  return VAR_1 - 'a';
 }
 if (VAR_1 >= 'A' && VAR_1 <= 'Z') {
  return VAR_1 - 'A';
 }
 return VAR_0;
}
