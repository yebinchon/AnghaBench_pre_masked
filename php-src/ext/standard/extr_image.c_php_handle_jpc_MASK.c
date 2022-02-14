
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {int channels; int bits; void* height; void* width; } ;
typedef int php_stream ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct gfxinfo*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_8(php_stream * VAR_3)
{
 struct gfxinfo *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;
 unsigned char VAR_7;
 unsigned int VAR_8;
 VAR_7 = FUNC_6(VAR_3);


 if (VAR_7 != VAR_1) {
  FUNC_2(((void*)0), VAR_0, "JPEG2000 codestream corrupt(Expected SIZ marker not found after SOC)");
  return ((void*)0);
 }

 VAR_4 = (struct gfxinfo *)FUNC_0(1, sizeof(struct gfxinfo));

 FUNC_3(VAR_3);
 FUNC_3(VAR_3);
 VAR_4->width = FUNC_4(VAR_3);
 VAR_4->height = FUNC_4(VAR_3);
 if (FUNC_7(VAR_3, 24, VAR_2)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }


 VAR_4->channels = FUNC_3(VAR_3);
 if ((VAR_4->channels == 0 && FUNC_5(VAR_3)) || VAR_4->channels > 256) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }


 VAR_5 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->channels; VAR_8++) {
  VAR_6 = FUNC_6(VAR_3);
  VAR_6++;
  if (VAR_6 > VAR_5) {
   VAR_5 = VAR_6;
  }

  FUNC_6(VAR_3);
  FUNC_6(VAR_3);
 }

 VAR_4->bits = VAR_5;

 return VAR_4;
}
