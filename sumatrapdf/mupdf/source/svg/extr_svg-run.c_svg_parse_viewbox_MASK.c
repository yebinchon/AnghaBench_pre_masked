
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float viewport_w; float viewport_h; float viewbox_w; float viewbox_h; int viewbox_size; void* transform; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_context ;


 void* FUNC_0 (int ,void*) ;
 float FUNC_1 (float,float) ;
 int FUNC_2 (float,float) ;
 int FUNC_3 (float,float) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,float*,float*,float*,float*) ;
 int FUNC_7 (char*,int*,int*) ;

void
FUNC_8(fz_context *VAR_0, svg_document *VAR_1, fz_xml *VAR_2, svg_state *VAR_3)
{
 char *VAR_4 = FUNC_4(VAR_2, "viewBox");
 char *VAR_5 = FUNC_4(VAR_2, "preserveAspectRatio");
 if (VAR_4)
 {

  float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12=1, VAR_13=1, VAR_14=1;
  float VAR_15=0, VAR_16=0;

  FUNC_6(VAR_4, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
  VAR_10 = VAR_3->viewport_w / VAR_8;
  VAR_11 = VAR_3->viewport_h / VAR_9;

  if (VAR_5)
   VAR_14 = FUNC_7(VAR_5, &VAR_12, &VAR_13);
  if (VAR_14)
  {
   VAR_10 = VAR_11 = FUNC_1(VAR_10, VAR_11);
   if (VAR_12 == 1) VAR_15 = (VAR_8 * VAR_10 - VAR_3->viewport_w) / 2;
   if (VAR_12 == 2) VAR_15 = (VAR_8 * VAR_10 - VAR_3->viewport_w);
   if (VAR_13 == 1) VAR_16 = (VAR_9 * VAR_11 - VAR_3->viewport_h) / 2;
   if (VAR_13 == 2) VAR_16 = (VAR_9 * VAR_11 - VAR_3->viewport_h);
   VAR_3->transform = FUNC_0(FUNC_3(-VAR_15, -VAR_16), VAR_3->transform);
  }
  VAR_3->transform = FUNC_0(FUNC_2(VAR_10, VAR_11), VAR_3->transform);
  VAR_3->transform = FUNC_0(FUNC_3(-VAR_6, -VAR_7), VAR_3->transform);
  VAR_3->viewbox_w = VAR_8;
  VAR_3->viewbox_h = VAR_9;
  VAR_3->viewbox_size = FUNC_5(VAR_8*VAR_8 + VAR_9*VAR_9) / FUNC_5(2);
 }
}
