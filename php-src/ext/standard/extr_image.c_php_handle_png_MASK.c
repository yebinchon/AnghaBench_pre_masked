
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned int width; unsigned int height; unsigned int bits; } ;
typedef int php_stream ;
typedef int dim ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_3 (php_stream * VAR_1)
{
 struct gfxinfo *VAR_2 = ((void*)0);
 unsigned char VAR_3[9];
 if (FUNC_2(VAR_1, 8, VAR_0))
  return ((void*)0);

 if((FUNC_1(VAR_1, (char*)VAR_3, sizeof(VAR_3))) < sizeof(VAR_3))
  return ((void*)0);

 VAR_2 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));
 VAR_2->width = (((unsigned int)VAR_3[0]) << 24) + (((unsigned int)VAR_3[1]) << 16) + (((unsigned int)VAR_3[2]) << 8) + ((unsigned int)VAR_3[3]);
 VAR_2->height = (((unsigned int)VAR_3[4]) << 24) + (((unsigned int)VAR_3[5]) << 16) + (((unsigned int)VAR_3[6]) << 8) + ((unsigned int)VAR_3[7]);
 VAR_2->bits = (unsigned int)VAR_3[8];
 return VAR_2;
}
