
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* convert ) (int *,TYPE_4__*,float const*,float*) ;} ;
struct paint_tri_data {TYPE_4__ cc; TYPE_3__* dest; TYPE_2__* shade; } ;
struct TYPE_6__ {float* c; } ;
typedef TYPE_1__ fz_vertex ;
struct TYPE_7__ {scalar_t__ use_function; } ;
typedef TYPE_2__ fz_shade ;
struct TYPE_8__ {int alpha; int n; int colorspace; } ;
typedef TYPE_3__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_4__*,float const*,float*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1, fz_vertex *VAR_2, const float *VAR_3)
{
 struct paint_tri_data *VAR_4 = (struct paint_tri_data *)VAR_1;
 const fz_shade *VAR_5 = VAR_4->shade;
 fz_pixmap *VAR_6 = VAR_4->dest;
 float *VAR_7 = VAR_2->c;
 int VAR_8;

 if (VAR_5->use_function)
  VAR_7[0] = VAR_3[0] * 255;
 else
 {
  int VAR_9 = FUNC_0(VAR_0, VAR_6->colorspace);
  int VAR_10 = VAR_6->alpha;
  int VAR_11 = VAR_6->n - VAR_10;
  if (VAR_4->cc.convert)
   VAR_4->cc.convert(VAR_0, &VAR_4->cc, VAR_3, VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   VAR_7[VAR_8] *= 255;
  for (; VAR_8 < VAR_11; VAR_8++)
   VAR_7[VAR_8] = 0;
  if (VAR_10)
   VAR_7[VAR_8] = 255;
 }
}
