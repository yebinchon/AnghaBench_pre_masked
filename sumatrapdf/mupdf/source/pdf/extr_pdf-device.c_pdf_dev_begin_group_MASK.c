
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int text ;
typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_8__ {int resources; int * doc; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_9__ {int buf; } ;
typedef TYPE_2__ gstate ;
typedef int fz_rect ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int **,TYPE_1__*,int ,int,int,float,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int *,int *) ;
 int * FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (int *,int *,int ,int ) ;
 int FUNC_12 (int *,int ,char*,int *) ;
 int * FUNC_13 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_3, fz_device *VAR_4, fz_rect VAR_5, fz_colorspace *VAR_6, int VAR_7, int VAR_8, int VAR_9, float VAR_10)
{
 pdf_device *VAR_11 = (pdf_device*)VAR_4;
 pdf_document *VAR_12 = VAR_11->doc;
 int VAR_13;
 pdf_obj *VAR_14;
 gstate *VAR_15;

 FUNC_6(VAR_3, VAR_11);

 VAR_13 = FUNC_7(VAR_3, &VAR_14, VAR_11, VAR_5, VAR_7, VAR_8, VAR_10, VAR_6);


 {
  char VAR_16[32];
  pdf_obj *VAR_17;
  FUNC_5(VAR_16, sizeof(VAR_16), "ExtGState/BlendMode%d", VAR_9);
  VAR_17 = FUNC_9(VAR_3, VAR_11->resources, VAR_16);
  if (VAR_17 == ((void*)0))
  {

   VAR_17 = FUNC_13(VAR_3, VAR_12, 2);
   FUNC_10(VAR_3, VAR_17, FUNC_1(VAR_2), FUNC_1(VAR_1));
   FUNC_11(VAR_3, VAR_17, FUNC_1(VAR_0), FUNC_3(VAR_9));
   FUNC_12(VAR_3, VAR_11->resources, VAR_16, VAR_17);
  }
 }


 VAR_15 = FUNC_0(VAR_11);
 FUNC_2(VAR_3, VAR_15->buf, "/BlendMode%d gs /Fm%d Do\n", VAR_9, VAR_13);



 FUNC_8(VAR_3, VAR_11, FUNC_4(VAR_3, 1024), ((void*)0), VAR_14);
}
