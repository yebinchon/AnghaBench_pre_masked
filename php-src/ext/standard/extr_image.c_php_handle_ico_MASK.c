
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned int bits; unsigned int width; unsigned int height; } ;
typedef int php_stream ;
typedef int dim ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static struct gfxinfo *FUNC_2(php_stream * VAR_0)
{
 struct gfxinfo *VAR_1 = ((void*)0);
 unsigned char VAR_2[16];
 int VAR_3 = 0;

 if (FUNC_1(VAR_0, (char *) VAR_2, 2) != 2)
  return ((void*)0);

 VAR_3 = (((unsigned int)VAR_2[1]) << 8) + ((unsigned int) VAR_2[0]);

 if (VAR_3 < 1 || VAR_3 > 255)
  return ((void*)0);

 VAR_1 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));

 while (VAR_3 > 0)
 {
  if (FUNC_1(VAR_0, (char *) VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
   break;

  if ((((unsigned int)VAR_2[7]) << 8) + ((unsigned int)VAR_2[6]) >= VAR_1->bits)
  {
   VAR_1->width = (unsigned int)VAR_2[0];
   VAR_1->height = (unsigned int)VAR_2[1];
   VAR_1->bits = (((unsigned int)VAR_2[7]) << 8) + ((unsigned int)VAR_2[6]);
  }
  VAR_3--;
 }

 return VAR_1;
}
