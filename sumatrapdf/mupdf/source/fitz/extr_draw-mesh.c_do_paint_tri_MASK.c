
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct paint_tri_data {int bbox; TYPE_1__* dest; } ;
typedef int fz_vertex ;
struct TYPE_3__ {scalar_t__ alpha; scalar_t__ n; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__*,float**,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1, fz_vertex *VAR_2, fz_vertex *VAR_3, fz_vertex *VAR_4)
{
 struct paint_tri_data *VAR_5 = (struct paint_tri_data *)VAR_1;
 float *VAR_6[3];
 fz_pixmap *VAR_7;

 VAR_6[0] = (float *)VAR_2;
 VAR_6[1] = (float *)VAR_3;
 VAR_6[2] = (float *)VAR_4;

 VAR_7 = VAR_5->dest;
 FUNC_0(VAR_7, VAR_6, 2 + VAR_7->n - VAR_7->alpha, VAR_5->bbox);
}
