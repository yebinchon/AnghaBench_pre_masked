
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct gfxinfo {void* channels; void* width; void* height; void* bits; } ;
typedef int php_stream ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned short) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned short,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_7 (php_stream * VAR_2, zval *VAR_3)
{
 struct gfxinfo *VAR_4 = ((void*)0);
 unsigned int VAR_5 = VAR_0;
 unsigned short VAR_6, VAR_7=1;

 for (;;) {
  VAR_5 = FUNC_1(VAR_2, VAR_5, VAR_7);
  VAR_7 = 0;
  switch (VAR_5) {
   case 141:
   case 140:
   case 134:
   case 133:
   case 132:
   case 131:
   case 130:
   case 129:
   case 139:
   case 138:
   case 137:
   case 136:
   case 135:
    if (VAR_4 == ((void*)0)) {

     VAR_4 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));
     VAR_6 = FUNC_2(VAR_2);
     VAR_4->bits = FUNC_5(VAR_2);
     VAR_4->height = FUNC_2(VAR_2);
     VAR_4->width = FUNC_2(VAR_2);
     VAR_4->channels = FUNC_5(VAR_2);
     if (!VAR_3 || VAR_6 < 8) {
      return VAR_4;
     }
     if (FUNC_6(VAR_2, VAR_6 - 8, VAR_1)) {
      return VAR_4;
     }
    } else {
     if (!FUNC_4(VAR_2)) {
      return VAR_4;
     }
    }
    break;

   case 158:
   case 157:
   case 150:
   case 149:
   case 148:
   case 147:
   case 146:
   case 145:
   case 144:
   case 143:
   case 156:
   case 155:
   case 154:
   case 153:
   case 152:
   case 151:
    if (VAR_3) {
     if (!FUNC_3(VAR_2, VAR_5, VAR_3)) {
      return VAR_4;
     }
    } else {
     if (!FUNC_4(VAR_2)) {
      return VAR_4;
     }
    }
    break;

   case 128:
   case 142:
    return VAR_4;

   default:
    if (!FUNC_4(VAR_2)) {
     return VAR_4;
    }
    break;
  }
 }

 return VAR_4;
}
