
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fz_pixmap ;
typedef int fz_matrix ;
struct TYPE_6__ {scalar_t__ l2factor; int rect; } ;
typedef TYPE_1__ fz_image_key ;
struct TYPE_7__ {int h; int w; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_context ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ) ;

__attribute__((used)) static fz_pixmap *
FUNC_2(fz_context *VAR_2, fz_image *VAR_3, fz_image_key *VAR_4, fz_matrix *VAR_5)
{
 fz_pixmap *VAR_6;
 do
 {
  VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_4, &VAR_1);
  if (VAR_6)
  {
   FUNC_1(VAR_5, &VAR_4->rect, VAR_3->w, VAR_3->h);
   return VAR_6;
  }
  VAR_4->l2factor--;
 }
 while (VAR_4->l2factor >= 0);
 return ((void*)0);
}
