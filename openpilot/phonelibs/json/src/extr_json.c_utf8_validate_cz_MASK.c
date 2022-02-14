
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{
 unsigned char VAR_1 = *VAR_0++;

 if (VAR_1 <= 0x7F) {
  return 1;
 } else if (VAR_1 <= 0xC1) {

  return 0;
 } else if (VAR_1 <= 0xDF) {

  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;

  return 2;
 } else if (VAR_1 <= 0xEF) {

  if (VAR_1 == 0xE0 && (unsigned char)*VAR_0 < 0xA0)
   return 0;


  if (VAR_1 == 0xED && (unsigned char)*VAR_0 > 0x9F)
   return 0;


  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;

  return 3;
 } else if (VAR_1 <= 0xF4) {

  if (VAR_1 == 0xF0 && (unsigned char)*VAR_0 < 0x90)
   return 0;


  if (VAR_1 == 0xF4 && (unsigned char)*VAR_0 > 0x8F)
   return 0;


  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;
  if (((unsigned char)*VAR_0++ & 0xC0) != 0x80)
   return 0;

  return 4;
 } else {
  return 0;
 }
}
