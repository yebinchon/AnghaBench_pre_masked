
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_function ;
typedef int pdf_document ;
struct TYPE_5__ {int xdivs; int ydivs; float* fn_vals; float** domain; int matrix; } ;
struct TYPE_6__ {TYPE_1__ f; } ;
struct TYPE_7__ {TYPE_2__ u; int colorspace; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 float* FUNC_2 (int *,int) ;
 float FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,float*,int,float*,int) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_3, pdf_document *VAR_4, fz_shade *VAR_5, pdf_obj *VAR_6, pdf_function *VAR_7)
{
 pdf_obj *VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12;
 float VAR_13[2];
 int VAR_14, VAR_15;
 float *VAR_16;
 int VAR_17 = FUNC_1(VAR_3, VAR_5->colorspace);

 VAR_9 = VAR_10 = 0;
 VAR_11 = VAR_12 = 1;
 VAR_8 = FUNC_4(VAR_3, VAR_6, FUNC_0(VAR_0));
 if (VAR_8)
 {
  VAR_9 = FUNC_3(VAR_3, VAR_8, 0);
  VAR_11 = FUNC_3(VAR_3, VAR_8, 1);
  VAR_10 = FUNC_3(VAR_3, VAR_8, 2);
  VAR_12 = FUNC_3(VAR_3, VAR_8, 3);
 }

 VAR_5->u.f.matrix = FUNC_5(VAR_3, VAR_6, FUNC_0(VAR_2));
 VAR_5->u.f.xdivs = VAR_1;
 VAR_5->u.f.ydivs = VAR_1;
 VAR_5->u.f.fn_vals = FUNC_2(VAR_3, (VAR_1+1)*(VAR_1+1)*VAR_17*sizeof(float));
 VAR_5->u.f.domain[0][0] = VAR_9;
 VAR_5->u.f.domain[0][1] = VAR_10;
 VAR_5->u.f.domain[1][0] = VAR_11;
 VAR_5->u.f.domain[1][1] = VAR_12;

 VAR_16 = VAR_5->u.f.fn_vals;
 for (VAR_15 = 0; VAR_15 <= VAR_1; VAR_15++)
 {
  VAR_13[1] = VAR_10 + (VAR_12 - VAR_10) * VAR_15 / VAR_1;

  for (VAR_14 = 0; VAR_14 <= VAR_1; VAR_14++)
  {
   VAR_13[0] = VAR_9 + (VAR_11 - VAR_9) * VAR_14 / VAR_1;

   FUNC_6(VAR_3, VAR_7, VAR_13, 2, VAR_16, VAR_17);
   VAR_16 += VAR_17;
  }
 }
}
