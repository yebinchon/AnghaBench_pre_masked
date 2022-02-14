
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stride; unsigned char* samples; int x; int y; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int,int,int *,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

fz_pixmap *
FUNC_2(fz_context *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, unsigned char *VAR_5, int VAR_6)
{
 fz_pixmap *VAR_7 = FUNC_0(VAR_0, ((void*)0), VAR_3, VAR_4, ((void*)0), 1);
 int VAR_8 = VAR_7->stride;
 unsigned char *VAR_9 = VAR_7->samples;
 VAR_7->x = VAR_1;
 VAR_7->y = VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
 {
  FUNC_1(VAR_9, VAR_5 + VAR_2 * VAR_6, VAR_3);
  VAR_9 += VAR_8;
 }

 return VAR_7;
}
