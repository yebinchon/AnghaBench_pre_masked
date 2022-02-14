
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_19__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;
typedef int fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *,int *,int *,int **) ;
 int FUNC_7 (int *,TYPE_1__*,int *,int *,int **) ;
 int FUNC_8 (int *,TYPE_1__*,int *,int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_10 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_11 (int *,TYPE_1__*,int *,int *,int) ;
 int FUNC_12 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_13 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_14 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_15 (int *,TYPE_1__*,int *,int *,int *,int **) ;
 int FUNC_16 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_17 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_18 (int *,TYPE_1__*,int *,int *,int *,int *,int **) ;

__attribute__((used)) static void
FUNC_19(fz_context *VAR_3, pdf_annot *VAR_4, fz_buffer *VAR_5,
 fz_rect *VAR_6, fz_rect *VAR_7, fz_matrix *VAR_8, pdf_obj **VAR_9)
{
 switch (FUNC_2(VAR_3, VAR_4))
 {
 default:
  FUNC_1(VAR_3, VAR_0, "cannot create appearance stream for %s annotations",
   FUNC_3(VAR_3, VAR_4->obj, FUNC_0(VAR_1)));
 case 128:
  FUNC_18(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 case 140:
  FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 138:
  FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6, 1);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 137:
  FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6, 0);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 139:
  FUNC_10(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 134:
  FUNC_13(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 144:
  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 145:
  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  *VAR_8 = VAR_2;
  break;
 case 130:
 case 143:
 case 135:
  FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  *VAR_8 = VAR_2;
  break;
 case 141:
  FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 129:
  FUNC_17(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 131:
  FUNC_16(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 133:
  FUNC_14(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 136:
  FUNC_12(VAR_3, VAR_4, VAR_5, VAR_6);
  *VAR_8 = VAR_2;
  *VAR_7 = *VAR_6;
  break;
 case 132:
  FUNC_15(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
  *VAR_8 = VAR_2;
  break;
 case 142:
  FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  break;
 }
}
