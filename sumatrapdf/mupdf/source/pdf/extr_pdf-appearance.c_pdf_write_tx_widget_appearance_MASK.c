
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,char*,float,float,...) ;
 int FUNC_2 (int *,int *,char*) ;
 TYPE_2__ FUNC_3 (int ,int ,float,float) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_1__*,char const**,float*,float*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*,int *) ;
 float FUNC_13 (int *,TYPE_1__*,int *) ;
 int FUNC_14 (int *,TYPE_1__*,int *,int **,char const*,char const*,float,float*,int,float,float,float,float,float,int,int,int) ;

__attribute__((used)) static void
FUNC_15(fz_context *VAR_5, pdf_annot *VAR_6, fz_buffer *VAR_7,
 fz_rect *VAR_8, fz_rect *VAR_9, fz_matrix *VAR_10, pdf_obj **VAR_11,
 const char *VAR_12, int VAR_13)
{
 const char *VAR_14;
 float VAR_15, VAR_16[3];
 float VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0;
 int VAR_22, VAR_23;

 VAR_23 = FUNC_9(VAR_5, FUNC_7(VAR_5, VAR_6->obj, FUNC_0(VAR_0)), FUNC_0(VAR_4));
 VAR_22 = FUNC_6(VAR_5, VAR_6);
 FUNC_5(VAR_5, VAR_6, &VAR_14, &VAR_15, VAR_16);

 VAR_17 = VAR_8->x1 - VAR_8->x0;
 VAR_18 = VAR_8->y1 - VAR_8->y0;
 VAR_23 = VAR_23 % 360;
 if (VAR_23 == 90 || VAR_23 == 270)
  VAR_19 = VAR_18, VAR_18 = VAR_17, VAR_17 = VAR_19;
 *VAR_10 = FUNC_4(VAR_23);
 *VAR_9 = FUNC_3(0, 0, VAR_17, VAR_18);

 FUNC_2(VAR_5, VAR_7, "/Tx BMC\nq\n");

 if (FUNC_12(VAR_5, VAR_6, VAR_7))
  FUNC_1(VAR_5, VAR_7, "0 0 %g %g re\nf\n", VAR_17, VAR_18);

 VAR_20 = FUNC_13(VAR_5, VAR_6, VAR_7);
 if (VAR_20 > 0 && FUNC_11(VAR_5, VAR_6, VAR_7))
 {
  FUNC_1(VAR_5, VAR_7, "%g %g %g %g re\ns\n", VAR_20/2, VAR_20/2, VAR_17-VAR_20, VAR_18-VAR_20);
  VAR_21 = 1;
 }

 FUNC_1(VAR_5, VAR_7, "%g %g %g %g re\nW\nn\n", VAR_20, VAR_20, VAR_17-VAR_20*2, VAR_18-VAR_20*2);

 if (VAR_13 & VAR_3)
 {
  FUNC_14(VAR_5, VAR_6, VAR_7, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_22, VAR_17, VAR_18, VAR_20*2,
   1.116f, 1.116f, 1, 0, 1);
 }
 else if (VAR_13 & VAR_2)
 {
  int VAR_24 = FUNC_10(VAR_5, FUNC_8(VAR_5, VAR_6->obj, FUNC_0(VAR_1)));
  if (VAR_21 && VAR_24 > 1)
  {
   float VAR_25 = (VAR_17 - 2 * VAR_20) / VAR_24;
   int VAR_26;
   for (VAR_26 = 1; VAR_26 < VAR_24; ++VAR_26)
   {
    float VAR_27 = VAR_20 + VAR_25 * VAR_26;
    FUNC_1(VAR_5, VAR_7, "%g %g m %g %g l s\n", VAR_27, VAR_20, VAR_27, VAR_18-VAR_20);
   }
  }
  FUNC_14(VAR_5, VAR_6, VAR_7, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_22, VAR_17, VAR_18, 0,
   0.8f, 1.2f, 0, VAR_24, 0);
 }
 else
 {
  FUNC_14(VAR_5, VAR_6, VAR_7, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_22, VAR_17, VAR_18, VAR_20*2,
   0.8f, 1.2f, 0, 0, 0);
 }

 FUNC_2(VAR_5, VAR_7, "Q\nEMC\n");
}
