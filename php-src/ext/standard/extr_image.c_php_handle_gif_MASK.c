
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {unsigned int width; unsigned int height; unsigned int bits; int channels; } ;
typedef int php_stream ;
typedef int dim ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_3 (php_stream * VAR_1)
{
 struct gfxinfo *VAR_2 = ((void*)0);
 unsigned char VAR_3[5];

 if (FUNC_2(VAR_1, 3, VAR_0))
  return ((void*)0);

 if (FUNC_1(VAR_1, (char*)VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  return ((void*)0);

 VAR_2 = (struct gfxinfo *) FUNC_0(1, sizeof(struct gfxinfo));
 VAR_2->width = (unsigned int)VAR_3[0] | (((unsigned int)VAR_3[1])<<8);
 VAR_2->height = (unsigned int)VAR_3[2] | (((unsigned int)VAR_3[3])<<8);
 VAR_2->bits = VAR_3[4]&0x80 ? ((((unsigned int)VAR_3[4])&0x07) + 1) : 0;
 VAR_2->channels = 3;

 return VAR_2;
}
