
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* samples; int n; int h; int w; int stride; TYPE_1__* colorspace; } ;
typedef TYPE_2__ fz_pixmap ;
typedef int fz_context ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int,unsigned char*) ;

void
FUNC_3(fz_context *VAR_5, fz_pixmap *VAR_6)
{
 unsigned char *VAR_7 = VAR_6->samples;
 int VAR_8, VAR_9, VAR_10 = VAR_6->n;
 int VAR_11 = VAR_6->colorspace ? VAR_6->colorspace->type : VAR_2;

 if (VAR_11 == VAR_1)
 {
  FUNC_0(VAR_5, VAR_6);
 }
 else if (VAR_11 == VAR_3 || VAR_11 == VAR_0)
 {
  for (VAR_9 = 0; VAR_9 < VAR_6->h; VAR_9++)
  {
   for (VAR_8 = 0; VAR_8 < VAR_6->w; VAR_8++)
   {
    FUNC_2(VAR_11, VAR_7);
    VAR_7 += VAR_10;
   }
   VAR_7 += VAR_6->stride - VAR_6->w * VAR_10;
  }
 }
 else
 {
  FUNC_1(VAR_5, VAR_4, "can only invert luminance of Gray and RGB pixmaps");
 }
}
