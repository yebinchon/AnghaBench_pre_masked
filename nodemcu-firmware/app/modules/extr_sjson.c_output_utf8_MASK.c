
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(luaL_Buffer *VAR_0, int VAR_1) {
  char VAR_2[4];
  char *VAR_3 = VAR_2;

  if (VAR_1<0x80) *VAR_3++=VAR_1;
  else if (VAR_1<0x800) *VAR_3++=192+VAR_1/64, *VAR_3++=128+VAR_1%64;
  else if (VAR_1-0xd800u<0x800) *VAR_3++ = '?';
  else if (VAR_1<0x10000) *VAR_3++=224+VAR_1/4096, *VAR_3++=128+VAR_1/64%64, *VAR_3++=128+VAR_1%64;
  else if (VAR_1<0x110000) *VAR_3++=240+VAR_1/262144, *VAR_3++=128+VAR_1/4096%64, *VAR_3++=128+VAR_1/64%64, *VAR_3++=128+VAR_1%64;
  else *VAR_3++ = '?';

  FUNC_0(VAR_0, VAR_2, VAR_3 - VAR_2);
}
