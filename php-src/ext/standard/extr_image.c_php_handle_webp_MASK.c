
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned char width; unsigned char height; int bits; } ;
typedef int php_stream ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned char*,char const*,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static struct gfxinfo *FUNC_3(php_stream * VAR_0)
{
 struct gfxinfo *VAR_1 = ((void*)0);
 const char VAR_2[3] = {'V', 'P', '8'};
 unsigned char VAR_3[18];
 char VAR_4;

 if (FUNC_2(VAR_0, (char *) VAR_3, 18) != 18)
  return ((void*)0);

 if (FUNC_1(VAR_3, VAR_2, 3)) {
  return ((void*)0);
 }
 switch (VAR_3[3]) {
  case ' ':
  case 'L':
  case 'X':
   VAR_4 = VAR_3[3];
   break;
  default:
   return ((void*)0);
 }

 VAR_1 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));

 switch (VAR_4) {
  case ' ':
   VAR_1->width = VAR_3[14] + ((VAR_3[15] & 0x3F) << 8);
   VAR_1->height = VAR_3[16] + ((VAR_3[17] & 0x3F) << 8);
   break;
  case 'L':
   VAR_1->width = VAR_3[9] + ((VAR_3[10] & 0x3F) << 8) + 1;
   VAR_1->height = (VAR_3[10] >> 6) + (VAR_3[11] << 2) + ((VAR_3[12] & 0xF) << 10) + 1;
   break;
  case 'X':
   VAR_1->width = VAR_3[12] + (VAR_3[13] << 8) + (VAR_3[14] << 16) + 1;
   VAR_1->height = VAR_3[15] + (VAR_3[16] << 8) + (VAR_3[17] << 16) + 1;
   break;
 }
 VAR_1->bits = 8;

 return VAR_1;
}
