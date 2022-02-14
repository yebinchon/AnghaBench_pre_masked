
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char FUNC_1(int VAR_0)
{
 if (FUNC_0(VAR_0)) {
  return VAR_0 - '0';
 }
 else if (VAR_0 >= 'A' && VAR_0 <= 'F') {
  return VAR_0 - 'A' + 10;
 }
 else if (VAR_0 >= 'a' && VAR_0 <= 'f') {
  return VAR_0 - 'a' + 10;
 }
 else {
  return -1;
 }
}
