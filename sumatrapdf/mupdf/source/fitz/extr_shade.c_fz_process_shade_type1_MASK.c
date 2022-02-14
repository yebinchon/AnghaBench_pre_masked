
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_vertex ;
struct TYPE_5__ {float* fn_vals; int xdivs; int ydivs; float** domain; int matrix; } ;
struct TYPE_6__ {TYPE_1__ f; } ;
struct TYPE_7__ {TYPE_2__ u; int colorspace; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_mesh_processor ;
typedef int fz_matrix ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int *,int ,float,float,float*) ;
 int FUNC_4 (int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_shade *VAR_1, fz_matrix VAR_2, fz_mesh_processor *VAR_3)
{
 float *VAR_4 = VAR_1->u.f.fn_vals;
 int VAR_5 = VAR_1->u.f.xdivs;
 int VAR_6 = VAR_1->u.f.ydivs;
 float VAR_7 = VAR_1->u.f.domain[0][0];
 float VAR_8 = VAR_1->u.f.domain[0][1];
 float VAR_9 = VAR_1->u.f.domain[1][0];
 float VAR_10 = VAR_1->u.f.domain[1][1];
 int VAR_11, VAR_12;
 float VAR_13, VAR_14, VAR_15;
 fz_vertex VAR_16[2][2];
 fz_vertex *VAR_17 = VAR_16[0];
 fz_vertex *VAR_18 = VAR_16[1];
 int VAR_19 = FUNC_1(VAR_0, VAR_1->colorspace);

 VAR_2 = FUNC_2(VAR_1->u.f.matrix, VAR_2);

 VAR_13 = VAR_8;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
 {
  VAR_14 = VAR_8 + (VAR_10 - VAR_8) * (VAR_12 + 1) / VAR_6;

  VAR_15 = VAR_7;

  FUNC_3(VAR_0, VAR_3, &VAR_17[0], VAR_2, VAR_15, VAR_13, VAR_4);
  VAR_4 += VAR_19;
  FUNC_3(VAR_0, VAR_3, &VAR_17[1], VAR_2, VAR_15, VAR_14, VAR_4 + VAR_5 * VAR_19);

  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  {
   VAR_15 = VAR_7 + (VAR_9 - VAR_7) * (VAR_11 + 1) / VAR_5;

   FUNC_3(VAR_0, VAR_3, &VAR_18[0], VAR_2, VAR_15, VAR_13, VAR_4);
   VAR_4 += VAR_19;
   FUNC_3(VAR_0, VAR_3, &VAR_18[1], VAR_2, VAR_15, VAR_14, VAR_4 + VAR_5 * VAR_19);

   FUNC_4(VAR_0, VAR_3, &VAR_17[0], &VAR_18[0], &VAR_18[1], &VAR_17[1]);
   FUNC_0(VAR_17,VAR_18);
  }
  VAR_13 = VAR_14;
 }
}
