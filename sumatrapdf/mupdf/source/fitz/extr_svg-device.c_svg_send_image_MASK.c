
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int num_images; int max_images; TYPE_7__* images; int id; scalar_t__ reuse_images; int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
struct TYPE_13__ {int h; int w; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_context ;
typedef int fz_color_params ;
struct TYPE_14__ {int id; TYPE_2__* image; } ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 TYPE_7__* FUNC_2 (int *,TYPE_7__*,int,int ) ;
 int FUNC_3 (int *,int *,TYPE_2__*) ;
 int FUNC_4 (int *,int *,char*,...) ;
 int VAR_0 ;
 int * FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, svg_device *VAR_2, fz_image *VAR_3, fz_color_params VAR_4)
{
 fz_output *VAR_5 = VAR_2->out;
 int VAR_6;
 int VAR_7;

 if (VAR_2->reuse_images)
 {
  for (VAR_6 = VAR_2->num_images-1; VAR_6 >= 0; VAR_6--)
   if (VAR_3 == VAR_2->images[VAR_6].image)
    break;
  if (VAR_6 >= 0)
  {
   FUNC_4(VAR_1, VAR_5, "<use xlink:href=\"#im%d\" x=\"0\" y=\"0\" width=\"%d\" height=\"%d\"/>\n",
     VAR_2->images[VAR_6].id, VAR_3->w, VAR_3->h);
   return;
  }


  if (VAR_2->num_images == VAR_2->max_images)
  {
   int VAR_8 = VAR_2->max_images * 2;
   if (VAR_8 == 0)
    VAR_8 = 32;
   VAR_2->images = FUNC_2(VAR_1, VAR_2->images, VAR_8, VAR_0);
   VAR_2->max_images = VAR_8;
  }

  VAR_7 = VAR_2->id++;
  VAR_5 = FUNC_5(VAR_1, VAR_2);
  FUNC_4(VAR_1, VAR_5, "<symbol id=\"im%d\" viewBox=\"0 0 %d %d\">\n", VAR_7, VAR_3->w, VAR_3->h);

  FUNC_4(VAR_1, VAR_5, "<image width=\"%d\" height=\"%d\" xlink:href=\"", VAR_3->w, VAR_3->h);
  FUNC_3(VAR_1, VAR_5, VAR_3);
  FUNC_4(VAR_1, VAR_5, "\"/>\n");

  FUNC_4(VAR_1, VAR_5, "</symbol>\n");
  VAR_5 = FUNC_0(VAR_1, VAR_2);

  VAR_2->images[VAR_2->num_images].id = VAR_7;
  VAR_2->images[VAR_2->num_images].image = FUNC_1(VAR_1, VAR_3);
  VAR_2->num_images++;

  FUNC_4(VAR_1, VAR_5, "<use xlink:href=\"#im%d\" x=\"0\" y=\"0\" width=\"%d\" height=\"%d\"/>\n",
    VAR_7, VAR_3->w, VAR_3->h);
 }
 else
 {
  FUNC_4(VAR_1, VAR_5, "<image width=\"%d\" height=\"%d\" xlink:href=\"", VAR_3->w, VAR_3->h);
  FUNC_3(VAR_1, VAR_5, VAR_3);
  FUNC_4(VAR_1, VAR_5, "\"/>\n");
 }
}
