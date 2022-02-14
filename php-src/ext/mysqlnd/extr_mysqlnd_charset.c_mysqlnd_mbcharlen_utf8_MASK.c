
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(const unsigned int VAR_0)
{
 if (VAR_0 < 0x80) {
  return 1;
 }
 if (VAR_0 < 0xC2) {
  return 0;
 }
 if (VAR_0 < 0xE0) {
  return 2;
 }
 if (VAR_0 < 0xF0) {
  return 3;
 }
 if (VAR_0 < 0xF8) {
  return 4;
 }
 return 0;
}
