
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {int width; int height; } ;
typedef int php_stream ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_1, struct gfxinfo **VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 if (FUNC_1(VAR_1)) {
  return 0;
 }


 if (FUNC_0(VAR_1) != 0) {
  return 0;
 }


 do {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0) {
   return 0;
  }
 } while (VAR_4 & 0x80);


 do {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0) {
   return 0;
  }
  VAR_5 = (VAR_5 << 7) | (VAR_4 & 0x7f);

        if (VAR_5 > 2048) {
            return 0;
        }
 } while (VAR_4 & 0x80);


 do {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0) {
   return 0;
  }
  VAR_6 = (VAR_6 << 7) | (VAR_4 & 0x7f);

        if (VAR_6 > 2048) {
            return 0;
        }
 } while (VAR_4 & 0x80);

 if (!VAR_6 || !VAR_5) {
  return 0;
 }

 if (!VAR_3) {
  (*VAR_2)->width = VAR_5;
  (*VAR_2)->height = VAR_6;
 }

 return VAR_0;
}
