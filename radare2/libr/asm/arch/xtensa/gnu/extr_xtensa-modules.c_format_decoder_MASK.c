
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* xtensa_insnbuf ;



__attribute__((used)) static int
FUNC_0 (const xtensa_insnbuf VAR_0)
{
 if ((VAR_0[0] & 0x8) == 0 && (VAR_0[1] & 0) == 0) {
  return 0;
 }
 if ((VAR_0[0] & 0xc) == 0x8 && (VAR_0[1] & 0) == 0) {
  return 1;
 }
 if ((VAR_0[0] & 0xe) == 0xc && (VAR_0[1] & 0) == 0) {
  return 2;
 }
 if ((VAR_0[0] & 0xf) == 0xe && (VAR_0[1] & 0) == 0) {
  return 3;
 }
 if ((VAR_0[0] & 0xf) == 0xf && (VAR_0[1] & 0x80000000) == 0) {
  return 4;
 }
 return -1;
}
