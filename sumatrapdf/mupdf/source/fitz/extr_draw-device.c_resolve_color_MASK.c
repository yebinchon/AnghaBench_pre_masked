
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int n; int alpha; int s; int * colorspace; int seps; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_10__ {int opm; scalar_t__ op; } ;
typedef TYPE_2__ fz_color_params ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,float const*,int *,float*,int *,TYPE_2__) ;
 int FUNC_5 (int *,int *,float const*,int ,int *,float*,TYPE_2__) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,char*) ;
 int * FUNC_9 (int *,int *,TYPE_1__*,int *,int) ;

__attribute__((used)) static fz_overprint *
FUNC_10(fz_context *VAR_2,
 fz_overprint *VAR_3,
 const float *VAR_4,
 fz_colorspace *VAR_5,
 float VAR_6,
 fz_color_params VAR_7,
 unsigned char *VAR_8,
 fz_pixmap *VAR_9)
{
 float VAR_10[VAR_1];
 int VAR_11;
 int VAR_12 = VAR_9->n - VAR_9->alpha;
 fz_colorspace *VAR_13 = VAR_9->colorspace;
 int VAR_14, VAR_15;
 int VAR_16;

 if (VAR_5 == ((void*)0) && VAR_13 != ((void*)0))
  FUNC_8(VAR_2, VAR_0, "color destination requires source color");

 VAR_16 = VAR_7.opm;
 VAR_14 = FUNC_2(VAR_2, VAR_5);
 VAR_15 = FUNC_1(VAR_2, VAR_5);


 if (VAR_7.op == 0 || !FUNC_3(VAR_2, VAR_9->colorspace))
  VAR_3 = ((void*)0);



 else if (VAR_15)
 {
 }




 else if (!VAR_14 && VAR_5 != VAR_9->colorspace)
 {
  VAR_16 = 0;
 }

 if (VAR_12 == 0)
  VAR_11 = 0;
 else if (VAR_14 && FUNC_0(VAR_2, VAR_5, VAR_9))
 {
  FUNC_5(VAR_2, VAR_5, VAR_4, VAR_9->seps, VAR_9->colorspace, VAR_10, VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
   VAR_8[VAR_11] = VAR_10[VAR_11] * 255;
  VAR_3 = FUNC_9(VAR_2, VAR_3, VAR_9, VAR_5, VAR_16);
 }
 else
 {
  int VAR_17 = VAR_12 - VAR_9->s;
  FUNC_4(VAR_2, VAR_5, VAR_4, VAR_9->colorspace, VAR_10, ((void*)0), VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++)
   VAR_8[VAR_11] = VAR_10[VAR_11] * 255;
  for (; VAR_11 < VAR_12; VAR_11++)
  {
   VAR_10[VAR_11] = 0;
   VAR_8[VAR_11] = 0;
  }
 }
 VAR_8[VAR_11] = VAR_6 * 255;


 if (VAR_3 && !VAR_14)
 {

  for (VAR_11 = 4; VAR_11 < VAR_12; VAR_11++)
   FUNC_7(VAR_3, VAR_11);


  if (VAR_16 == 1 && VAR_5 != FUNC_6(VAR_2))
   for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    if (VAR_10[VAR_11] == 0)
     FUNC_7(VAR_3, VAR_11);
 }

 return VAR_3;
}
