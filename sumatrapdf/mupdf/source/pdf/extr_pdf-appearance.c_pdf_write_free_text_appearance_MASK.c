
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_13__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
struct TYPE_14__ {float x1; float x0; float y1; float y0; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,char*,float,float,...) ;
 TYPE_2__ FUNC_2 (int ,int ,float,float) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,char const**,float*,float*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ) ;
 float FUNC_8 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *,TYPE_1__*,int *,int **,char const*,char const*,float,float*,int,float,float,float,float,float,int,int ,int ) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_1, pdf_annot *VAR_2, fz_buffer *VAR_3,
 fz_rect *VAR_4, fz_rect *VAR_5, fz_matrix *VAR_6, pdf_obj **VAR_7)
{
 const char *VAR_8;
 float VAR_9, VAR_10[3];
 const char *VAR_11;
 float VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;


 VAR_11 = FUNC_4(VAR_1, VAR_2);
 VAR_17 = FUNC_7(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 VAR_16 = FUNC_6(VAR_1, VAR_2);
 FUNC_5(VAR_1, VAR_2, &VAR_8, &VAR_9, VAR_10);

 VAR_12 = VAR_4->x1 - VAR_4->x0;
 VAR_13 = VAR_4->y1 - VAR_4->y0;
 if (VAR_17 == 90 || VAR_17 == 270)
  VAR_14 = VAR_13, VAR_13 = VAR_12, VAR_12 = VAR_14;

 *VAR_6 = FUNC_3(VAR_17);
 *VAR_5 = FUNC_2(0, 0, VAR_12, VAR_13);

 if (FUNC_9(VAR_1, VAR_2, VAR_3))
  FUNC_1(VAR_1, VAR_3, "0 0 %g %g re\nf\n", VAR_12, VAR_13);

 VAR_15 = FUNC_8(VAR_1, VAR_2, VAR_3);
 if (VAR_15 > 0)
 {
  FUNC_1(VAR_1, VAR_3, "%g %g %g RG\n", VAR_10[0], VAR_10[1], VAR_10[2]);
  FUNC_1(VAR_1, VAR_3, "%g %g %g %g re\nS\n", VAR_15/2, VAR_15/2, VAR_12-VAR_15, VAR_13-VAR_15);
 }

 FUNC_1(VAR_1, VAR_3, "%g %g %g %g re\nW\nn\n", VAR_15, VAR_15, VAR_12-VAR_15*2, VAR_13-VAR_15*2);

 FUNC_10(VAR_1, VAR_2, VAR_3, VAR_7, VAR_11, VAR_8, VAR_9, VAR_10, VAR_16, VAR_12, VAR_13, VAR_15*2,
  0.8f, 1.2f, 1, 0, 0);
}
