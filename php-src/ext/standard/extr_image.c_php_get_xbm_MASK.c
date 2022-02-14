
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned int width; unsigned int height; } ;
typedef int php_stream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*,int*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(php_stream *VAR_1, struct gfxinfo **VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    char *VAR_5;
    int VAR_6;
    unsigned int VAR_7 = 0, VAR_8 = 0;

 if (VAR_2) {
  *VAR_2 = ((void*)0);
 }
 if (FUNC_4(VAR_1)) {
  return 0;
 }
 while ((VAR_3=FUNC_3(VAR_1, ((void*)0), 0)) != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_3);
  if (FUNC_5(VAR_3, "#define %s %d", VAR_4, &VAR_6) == 2) {
   if (!(VAR_5 = FUNC_7(VAR_4, '_'))) {
    VAR_5 = VAR_4;
   } else {
    VAR_5++;
   }

   if (!FUNC_6("width", VAR_5)) {
    VAR_7 = (unsigned int) VAR_6;
    if (VAR_8) {
     FUNC_1(VAR_4);
     break;
    }
   }
   if (!FUNC_6("height", VAR_5)) {
    VAR_8 = (unsigned int) VAR_6;
    if (VAR_7) {
     FUNC_1(VAR_4);
     break;
    }
   }
  }
  FUNC_1(VAR_3);
  FUNC_1(VAR_4);
 }
 if (VAR_3) {
  FUNC_1(VAR_3);
 }

 if (VAR_7 && VAR_8) {
  if (VAR_2) {
   *VAR_2 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));
   (*VAR_2)->width = VAR_7;
   (*VAR_2)->height = VAR_8;
  }
  return VAR_0;
 }

 return 0;
}
