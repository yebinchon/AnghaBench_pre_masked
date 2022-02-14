
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x1; int y1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_page ;
struct TYPE_7__ {int w; int h; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_context ;
struct TYPE_8__ {TYPE_2__* image; } ;
typedef TYPE_3__ cbz_page ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int*,int*) ;

__attribute__((used)) static fz_rect
FUNC_1(fz_context *VAR_1, fz_page *VAR_2)
{
 cbz_page *VAR_3 = (cbz_page*)VAR_2;
 fz_image *VAR_4 = VAR_3->image;
 int VAR_5, VAR_6;
 fz_rect VAR_7;

 FUNC_0(VAR_4, &VAR_5, &VAR_6);
 VAR_7.x0 = VAR_7.y0 = 0;
 VAR_7.x1 = VAR_4->w * VAR_0 / VAR_5;
 VAR_7.y1 = VAR_4->h * VAR_0 / VAR_6;
 return VAR_7;
}
