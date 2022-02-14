
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_23__ {int * dev; } ;
typedef TYPE_1__ xps_document ;
struct closure {char* base_uri; void (* func ) (int *,TYPE_1__*,int ,TYPE_3__,char*,int *,int *,void*) ;void* user; int * root; int * dict; } ;
typedef int fz_xml ;
struct TYPE_24__ {float x1; float x0; float y1; float y0; } ;
typedef TYPE_3__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (float) ;
 float FUNC_1 (float) ;
 int FUNC_2 (float) ;
 int FUNC_3 (int *,int *,TYPE_3__,TYPE_3__,float,float,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,float,float) ;
 int FUNC_7 (int ,float,float) ;
 TYPE_3__ FUNC_8 (TYPE_3__,int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_9 (int *,char*,float,float) ;
 char* FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int *,TYPE_1__*,int ,TYPE_3__,char*,int *,char*,int *) ;
 int FUNC_16 (int *,TYPE_1__*,char*,int *,char*,int *) ;
 int FUNC_17 (int *,TYPE_1__*,int ,TYPE_3__,int,struct closure*) ;
 TYPE_3__ FUNC_18 (int *,TYPE_1__*,char*) ;
 int FUNC_19 (int *,TYPE_1__*,char*,int *,int ) ;
 int FUNC_20 (int *,TYPE_1__*,int *,char**,int **,int *) ;

void
FUNC_21(fz_context *VAR_6, xps_document *VAR_7, fz_matrix VAR_8, fz_rect VAR_9,
 char *VAR_10, xps_resource *VAR_11, fz_xml *VAR_12,
 void (*VAR_13)(fz_context *VAR_14, xps_document*, fz_matrix, fz_rect, char*, xps_resource*, fz_xml*, void*), void *VAR_15)
{
 fz_device *VAR_16 = VAR_7->dev;
 fz_xml *VAR_17;
 struct closure VAR_18;

 char *VAR_19;
 char *VAR_20;
 char *VAR_21;
 char *VAR_22;
 char *VAR_23;

 fz_xml *VAR_24 = ((void*)0);

 fz_rect VAR_25;
 fz_rect VAR_26;
 float VAR_27, VAR_28;
 float VAR_29, VAR_30;
 int VAR_31;

 VAR_19 = FUNC_10(VAR_12, "Opacity");
 VAR_20 = FUNC_10(VAR_12, "Transform");
 VAR_21 = FUNC_10(VAR_12, "Viewbox");
 VAR_22 = FUNC_10(VAR_12, "Viewport");
 VAR_23 = FUNC_10(VAR_12, "TileMode");

 VAR_18.base_uri = VAR_10;
 VAR_18.dict = VAR_11;
 VAR_18.root = VAR_12;
 VAR_18.user = VAR_15;
 VAR_18.func = VAR_13;

 for (VAR_17 = FUNC_11(VAR_12); VAR_17; VAR_17 = FUNC_13(VAR_17))
 {
  if (FUNC_12(VAR_17, "ImageBrush.Transform"))
   VAR_24 = FUNC_11(VAR_17);
  if (FUNC_12(VAR_17, "VisualBrush.Transform"))
   VAR_24 = FUNC_11(VAR_17);
 }

 FUNC_20(VAR_6, VAR_7, VAR_11, &VAR_20, &VAR_24, ((void*)0));

 VAR_8 = FUNC_19(VAR_6, VAR_7, VAR_20, VAR_24, VAR_8);

 VAR_25 = VAR_5;
 if (VAR_21)
  VAR_25 = FUNC_18(VAR_6, VAR_7, VAR_21);

 VAR_26 = VAR_5;
 if (VAR_22)
  VAR_26 = FUNC_18(VAR_6, VAR_7, VAR_22);

 if (FUNC_1(VAR_26.x1 - VAR_26.x0) < 0.01f || FUNC_1(VAR_26.y1 - VAR_26.y0) < 0.01f)
  FUNC_9(VAR_6, "not drawing tile for viewport size %.4f x %.4f", VAR_26.x1 - VAR_26.x0, VAR_26.y1 - VAR_26.y0);
 else if (FUNC_1(VAR_25.x1 - VAR_25.x0) < 0.01f || FUNC_1(VAR_25.y1 - VAR_25.y0) < 0.01f)
  FUNC_9(VAR_6, "not drawing tile for viewbox size %.4f x %.4f", VAR_25.x1 - VAR_25.x0, VAR_25.y1 - VAR_25.y0);


 if (FUNC_1(VAR_26.x1 - VAR_26.x0) < 0.01f) return;
 if (FUNC_1(VAR_26.y1 - VAR_26.y0) < 0.01f) return;
 if (FUNC_1(VAR_25.x1 - VAR_25.x0) < 0.01f) return;
 if (FUNC_1(VAR_25.y1 - VAR_25.y0) < 0.01f) return;

 VAR_27 = VAR_25.x1 - VAR_25.x0;
 VAR_28 = VAR_25.y1 - VAR_25.y0;

 VAR_29 = (VAR_26.x1 - VAR_26.x0) / VAR_27;
 VAR_30 = (VAR_26.y1 - VAR_26.y0) / VAR_28;

 VAR_31 = VAR_3;
 if (VAR_23)
 {
  if (!FUNC_14(VAR_23, "None"))
   VAR_31 = VAR_3;
  if (!FUNC_14(VAR_23, "Tile"))
   VAR_31 = VAR_4;
  if (!FUNC_14(VAR_23, "FlipX"))
   VAR_31 = VAR_0;
  if (!FUNC_14(VAR_23, "FlipY"))
   VAR_31 = VAR_2;
  if (!FUNC_14(VAR_23, "FlipXY"))
   VAR_31 = VAR_1;
 }

 if (VAR_31 == VAR_0 || VAR_31 == VAR_1)
  VAR_27 *= 2;
 if (VAR_31 == VAR_2 || VAR_31 == VAR_1)
  VAR_28 *= 2;

 FUNC_15(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_19, ((void*)0));

 VAR_8 = FUNC_7(VAR_8, VAR_26.x0, VAR_26.y0);
 VAR_8 = FUNC_6(VAR_8, VAR_29, VAR_30);
 VAR_8 = FUNC_7(VAR_8, -VAR_25.x0, -VAR_25.y0);

 if (VAR_31 != VAR_3)
 {
  int VAR_32, VAR_33, VAR_34, VAR_35;
  fz_matrix VAR_36;
  VAR_36 = FUNC_5(VAR_8);
  VAR_9 = FUNC_8(VAR_9, VAR_36);
  VAR_32 = FUNC_2(VAR_9.x0 / VAR_27);
  VAR_33 = FUNC_2(VAR_9.y0 / VAR_28);
  VAR_34 = FUNC_0(VAR_9.x1 / VAR_27);
  VAR_35 = FUNC_0(VAR_9.y1 / VAR_28);




  if (0)

  {
   fz_rect VAR_37 = VAR_25;
   VAR_37.x1 = VAR_37.x0 + VAR_27;
   VAR_37.y1 = VAR_37.y0 + VAR_28;
   FUNC_3(VAR_6, VAR_16, VAR_9, VAR_37, VAR_27, VAR_28, VAR_8);
   FUNC_17(VAR_6, VAR_7, VAR_8, VAR_25, VAR_31, &VAR_18);
   FUNC_4(VAR_6, VAR_16);
  }
  else
  {
   int VAR_38, VAR_39;
   for (VAR_39 = VAR_33; VAR_39 < VAR_35; VAR_39++)
   {
    for (VAR_38 = VAR_32; VAR_38 < VAR_34; VAR_38++)
    {
     fz_matrix VAR_40 = FUNC_7(VAR_8, VAR_27 * VAR_38, VAR_28 * VAR_39);
     FUNC_17(VAR_6, VAR_7, VAR_40, VAR_25, VAR_31, &VAR_18);
    }
   }
  }
 }
 else
 {
  FUNC_17(VAR_6, VAR_7, VAR_8, VAR_25, VAR_31, &VAR_18);
 }

 FUNC_16(VAR_6, VAR_7, VAR_10, VAR_11, VAR_19, ((void*)0));
}
