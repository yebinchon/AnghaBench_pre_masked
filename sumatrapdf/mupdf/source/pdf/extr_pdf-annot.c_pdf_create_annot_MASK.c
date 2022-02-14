
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int obj; } ;
typedef TYPE_1__ pdf_page ;
struct TYPE_20__ {int obj; } ;
typedef TYPE_2__ pdf_annot ;
struct TYPE_21__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef TYPE_3__ fz_rect ;
struct TYPE_22__ {int member_0; int member_1; } ;
typedef TYPE_4__ fz_point ;
typedef int fz_context ;
typedef enum pdf_annot_type { ____Placeholder_pdf_annot_type } pdf_annot_type ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 TYPE_2__* FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int FUNC_7 (int *,TYPE_2__*,int,float const*) ;
 int FUNC_8 (int *,TYPE_2__*,char*,int,float const*) ;
 int FUNC_9 (int *,TYPE_2__*,TYPE_4__,TYPE_4__) ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_3__) ;
 int FUNC_11 (int *,int ) ;

pdf_annot *
FUNC_12(fz_context *VAR_6, pdf_page *VAR_7, enum pdf_annot_type VAR_8)
{
 static const float VAR_9[3] = { 0, 0, 0 };
 static const float VAR_10[3] = { 1, 0, 0 };
 static const float VAR_11[3] = { 0, 1, 0 };
 static const float VAR_12[3] = { 0, 0, 1 };
 static const float VAR_13[3] = { 1, 1, 0 };
 static const float VAR_14[3] = { 1, 0, 1 };

 int VAR_15 = VAR_4;

 pdf_annot *VAR_16 = FUNC_1(VAR_6, VAR_7, VAR_8);

 switch (VAR_8)
 {
 default:
  break;

 case 129:
 case 141:
 case 134:
  {
   fz_rect VAR_17 = { 12, 12, 12+20, 12+20 };
   VAR_15 = VAR_4 | VAR_3 | VAR_2;
   FUNC_10(VAR_6, VAR_16, VAR_17);
   FUNC_7(VAR_6, VAR_16, 3, VAR_13);
  }
  break;

 case 140:
  {
   fz_rect VAR_18 = { 12, 12, 12+200, 12+100 };


   int VAR_19 = FUNC_11(VAR_6, FUNC_2(VAR_6, VAR_7->obj, FUNC_0(VAR_5)));
   if (VAR_19 != 0)
    FUNC_4(VAR_6, VAR_16->obj, FUNC_0(VAR_5), VAR_19);

   FUNC_10(VAR_6, VAR_16, VAR_18);
   FUNC_6(VAR_6, VAR_16, 0);
   FUNC_8(VAR_6, VAR_16, "Helv", 12, VAR_9);
  }
  break;

 case 131:
  {
   fz_rect VAR_20 = { 12, 12, 12+190, 12+50 };
   FUNC_10(VAR_6, VAR_16, VAR_20);
   FUNC_7(VAR_6, VAR_16, 3, VAR_10);
  }
  break;

 case 143:
  {
   fz_rect VAR_21 = { 12, 12, 12+18, 12+15 };
   FUNC_10(VAR_6, VAR_16, VAR_21);
   FUNC_7(VAR_6, VAR_16, 3, VAR_12);
  }
  break;

 case 137:
  {
   fz_point VAR_22 = { 12, 12 }, VAR_23 = { 12 + 100, 12 + 50 };
   FUNC_9(VAR_6, VAR_16, VAR_22, VAR_23);
   FUNC_6(VAR_6, VAR_16, 1);
   FUNC_7(VAR_6, VAR_16, 3, VAR_10);
  }
  break;

 case 133:
 case 142:
  {
   fz_rect VAR_24 = { 12, 12, 12+100, 12+50 };
   FUNC_10(VAR_6, VAR_16, VAR_24);
   FUNC_6(VAR_6, VAR_16, 1);
   FUNC_7(VAR_6, VAR_16, 3, VAR_10);
  }
  break;

 case 136:
 case 135:
 case 138:
  FUNC_6(VAR_6, VAR_16, 1);
  FUNC_7(VAR_6, VAR_16, 3, VAR_10);
  break;

 case 139:
  FUNC_7(VAR_6, VAR_16, 3, VAR_13);
  break;
 case 128:
  FUNC_7(VAR_6, VAR_16, 3, VAR_11);
  break;
 case 130:
  FUNC_7(VAR_6, VAR_16, 3, VAR_10);
  break;
 case 132:
  FUNC_7(VAR_6, VAR_16, 3, VAR_14);
  break;
 }

 FUNC_3(VAR_6, VAR_16->obj, FUNC_0(VAR_1), VAR_7->obj);
 FUNC_4(VAR_6, VAR_16->obj, FUNC_0(VAR_0), VAR_15);

 return FUNC_5(VAR_6, VAR_16);
}
