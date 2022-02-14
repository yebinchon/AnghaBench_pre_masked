
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {int width; int height; scalar_t__ channels; int bits; } ;
typedef int php_stream ;
typedef int a ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (unsigned char*,int,long) ;

__attribute__((used)) static struct gfxinfo *FUNC_4 (php_stream * VAR_1)
{
 struct gfxinfo *VAR_2 = ((void*)0);
 long VAR_3;
 unsigned char VAR_4[32];

 if (FUNC_2(VAR_1, 5, VAR_0))
  return ((void*)0);

 if (FUNC_1(VAR_1, (char*)VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  return ((void*)0);

 VAR_2 = (struct gfxinfo *) FUNC_0 (1, sizeof (struct gfxinfo));
 VAR_3 = FUNC_3 (VAR_4, 0, 5);
 VAR_2->width = (FUNC_3 (VAR_4, 5 + VAR_3, VAR_3) -
  FUNC_3 (VAR_4, 5, VAR_3)) / 20;
 VAR_2->height = (FUNC_3 (VAR_4, 5 + (3 * VAR_3), VAR_3) -
  FUNC_3 (VAR_4, 5 + (2 * VAR_3), VAR_3)) / 20;
 VAR_2->bits = 0;
 VAR_2->channels = 0;
 return VAR_2;
}
