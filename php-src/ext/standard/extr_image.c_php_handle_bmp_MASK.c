
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned int width; unsigned int height; unsigned int bits; } ;
typedef int php_stream ;
typedef int int32_t ;
typedef int dim ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_4 (php_stream * VAR_1)
{
 struct gfxinfo *VAR_2 = ((void*)0);
 unsigned char VAR_3[16];
 int VAR_4;

 if (FUNC_3(VAR_1, 11, VAR_0))
  return ((void*)0);

 if (FUNC_2(VAR_1, (char*)VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  return ((void*)0);

 VAR_4 = (((unsigned int)VAR_3[ 3]) << 24) + (((unsigned int)VAR_3[ 2]) << 16) + (((unsigned int)VAR_3[ 1]) << 8) + ((unsigned int) VAR_3[ 0]);
 if (VAR_4 == 12) {
  VAR_2 = (struct gfxinfo *) FUNC_1 (1, sizeof(struct gfxinfo));
  VAR_2->width = (((unsigned int)VAR_3[ 5]) << 8) + ((unsigned int) VAR_3[ 4]);
  VAR_2->height = (((unsigned int)VAR_3[ 7]) << 8) + ((unsigned int) VAR_3[ 6]);
  VAR_2->bits = ((unsigned int)VAR_3[11]);
 } else if (VAR_4 > 12 && (VAR_4 <= 64 || VAR_4 == 108 || VAR_4 == 124)) {
  VAR_2 = (struct gfxinfo *) FUNC_1 (1, sizeof(struct gfxinfo));
  VAR_2->width = (((unsigned int)VAR_3[ 7]) << 24) + (((unsigned int)VAR_3[ 6]) << 16) + (((unsigned int)VAR_3[ 5]) << 8) + ((unsigned int) VAR_3[ 4]);
  VAR_2->height = (((unsigned int)VAR_3[11]) << 24) + (((unsigned int)VAR_3[10]) << 16) + (((unsigned int)VAR_3[ 9]) << 8) + ((unsigned int) VAR_3[ 8]);
  VAR_2->height = FUNC_0((int32_t)VAR_2->height);
  VAR_2->bits = (((unsigned int)VAR_3[15]) << 8) + ((unsigned int)VAR_3[14]);
 } else {
  return ((void*)0);
 }

 return VAR_2;
}
