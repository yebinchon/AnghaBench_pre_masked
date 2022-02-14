
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {short width; short height; short bits; scalar_t__ channels; } ;
typedef int php_stream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 short FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static struct gfxinfo *FUNC_6(php_stream * VAR_1)
{
 struct gfxinfo * VAR_2;
 unsigned char VAR_3[10];
 int VAR_4;
 int VAR_5;
 short VAR_6, VAR_7, VAR_8;

 if (FUNC_3(VAR_1, (char *) VAR_3, 8) != 8) {
  return ((void*)0);
 }
 if (FUNC_5((char *) VAR_3+4, "ILBM", 4) && FUNC_5((char *) VAR_3+4, "PBM ", 4)) {
  return ((void*)0);
 }


 do {
  if (FUNC_3(VAR_1, (char*)VAR_3, 8) != 8) {
   return ((void*)0);
  }
  VAR_4 = FUNC_2(VAR_3+0, 1);
  VAR_5 = FUNC_2(VAR_3+4, 1);
  if (VAR_5 < 0) {
   return ((void*)0);
  }
  if ((VAR_5 & 1) == 1) {
   VAR_5++;
  }
  if (VAR_4 == 0x424d4844) {
   if (VAR_5 < 9 || FUNC_3(VAR_1, (char*)VAR_3, 9) != 9) {
    return ((void*)0);
   }
   VAR_6 = FUNC_1(VAR_3+0, 1);
   VAR_7 = FUNC_1(VAR_3+2, 1);
   VAR_8 = VAR_3[8] & 0xff;
   if (VAR_6 > 0 && VAR_7 > 0 && VAR_8 > 0 && VAR_8 < 33) {
    VAR_2 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));
    VAR_2->width = VAR_6;
    VAR_2->height = VAR_7;
    VAR_2->bits = VAR_8;
    VAR_2->channels = 0;
    return VAR_2;
   }
  } else {
   if (FUNC_4(VAR_1, VAR_5, VAR_0)) {
    return ((void*)0);
   }
  }
 } while (1);
}
