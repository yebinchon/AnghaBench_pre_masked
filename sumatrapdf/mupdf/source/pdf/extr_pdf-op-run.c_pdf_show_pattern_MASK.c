
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_19__ {int gtop; int gparent; TYPE_3__* gstate; int dev; } ;
typedef TYPE_1__ pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_18__ {float x0; float y0; } ;
struct TYPE_20__ {int id; float xstep; float ystep; int contents; int resources; int document; TYPE_17__ bbox; int matrix; scalar_t__ ismask; } ;
typedef TYPE_2__ pdf_pattern ;
struct TYPE_21__ {void* ctm; int * softmask; int stroke; int fill; } ;
typedef TYPE_3__ pdf_gstate ;
struct TYPE_22__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_4__ fz_rect ;
typedef void* fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int *,int ,TYPE_4__,TYPE_17__,float,float,void*,int) ;
 void* FUNC_3 (int ,void*) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*,int,int) ;
 TYPE_4__ FUNC_7 (TYPE_4__,void*) ;
 int FUNC_8 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_15 (int *,TYPE_1__*,int) ;

__attribute__((used)) static pdf_gstate *
FUNC_16(fz_context *VAR_2, pdf_run_processor *VAR_3, pdf_pattern *VAR_4, int VAR_5, fz_rect VAR_6, int VAR_7)
{
 pdf_gstate *VAR_8;
 pdf_gstate *VAR_9;
 int VAR_10;
 fz_matrix VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 float VAR_18, VAR_19, VAR_20, VAR_21;
 fz_rect VAR_22;
 int VAR_23;

 FUNC_12(VAR_2, VAR_3);
 VAR_8 = VAR_3->gstate + VAR_3->gtop;
 VAR_9 = VAR_3->gstate + VAR_5;


 FUNC_8(VAR_2, VAR_8, VAR_9);

 if (VAR_4->ismask)
 {
  FUNC_15(VAR_2, VAR_3, VAR_0);
  FUNC_15(VAR_2, VAR_3, VAR_1);
  if (VAR_7 == VAR_0)
  {
   FUNC_9(VAR_2, &VAR_8->stroke);
   FUNC_13(VAR_2, &VAR_8->fill);
   VAR_8->stroke = VAR_8->fill;
  }
  if (VAR_7 == VAR_1)
  {
   FUNC_9(VAR_2, &VAR_8->fill);
   FUNC_13(VAR_2, &VAR_8->stroke);
   VAR_8->fill = VAR_8->stroke;
  }
  VAR_23 = 0;
 }
 else
 {

  FUNC_15(VAR_2, VAR_3, VAR_7);
  VAR_23 = VAR_4->id;
 }


 if (VAR_8->softmask)
 {
  FUNC_10(VAR_2, VAR_8->softmask);
  VAR_8->softmask = ((void*)0);
 }

 VAR_11 = FUNC_3(VAR_4->matrix, VAR_9->ctm);
 VAR_12 = FUNC_5(VAR_11);


 VAR_10 = VAR_3->gparent;
 VAR_3->gparent = VAR_3->gtop-1;
 VAR_13 = VAR_3->gstate[VAR_3->gparent].ctm;
 VAR_3->gstate[VAR_3->gparent].ctm = VAR_11;




 VAR_22 = FUNC_7(VAR_6, VAR_12);

 VAR_18 = (VAR_22.x0 - VAR_4->bbox.x0) / VAR_4->xstep;
 VAR_19 = (VAR_22.y0 - VAR_4->bbox.y0) / VAR_4->ystep;
 VAR_20 = (VAR_22.x1 - VAR_4->bbox.x0) / VAR_4->xstep;
 VAR_21 = (VAR_22.y1 - VAR_4->bbox.y0) / VAR_4->ystep;
 if (VAR_18 > VAR_20)
 {
  float VAR_24 = VAR_18; VAR_18 = VAR_20; VAR_20 = VAR_24;
 }
 if (VAR_19 > VAR_21)
 {
  float VAR_25 = VAR_19; VAR_19 = VAR_21; VAR_21 = VAR_25;
 }
 if (0)

 {
  int VAR_26 = FUNC_2(VAR_2, VAR_3->dev, VAR_22, VAR_4->bbox, VAR_4->xstep, VAR_4->ystep, VAR_11, VAR_23);
  if (!VAR_26)
  {
   VAR_8->ctm = VAR_11;
   FUNC_12(VAR_2, VAR_3);
   FUNC_14(VAR_2, (pdf_processor*)VAR_3, VAR_4->document, VAR_4->resources, VAR_4->contents, ((void*)0));
   FUNC_11(VAR_2, VAR_3);
  }
  FUNC_4(VAR_2, VAR_3->dev);
 }
 else
 {
  int VAR_27, VAR_28;






  VAR_14 = FUNC_1(VAR_18 + 0.001f);
  VAR_15 = FUNC_1(VAR_19 + 0.001f);
  VAR_16 = FUNC_0(VAR_20 - 0.001f);
  VAR_17 = FUNC_0(VAR_21 - 0.001f);



  if (VAR_20 > VAR_18 && VAR_16 == VAR_14)
   VAR_16 = VAR_14 + 1;
  if (VAR_21 > VAR_19 && VAR_17 == VAR_15)
   VAR_17 = VAR_15 + 1;

  for (VAR_28 = VAR_15; VAR_28 < VAR_17; VAR_28++)
  {
   for (VAR_27 = VAR_14; VAR_27 < VAR_16; VAR_27++)
   {
    VAR_8->ctm = FUNC_6(VAR_11, VAR_27 * VAR_4->xstep, VAR_28 * VAR_4->ystep);
    FUNC_12(VAR_2, VAR_3);
    FUNC_14(VAR_2, (pdf_processor*)VAR_3, VAR_4->document, VAR_4->resources, VAR_4->contents, ((void*)0));
    FUNC_11(VAR_2, VAR_3);
   }
  }
 }

 VAR_3->gstate[VAR_3->gparent].ctm = VAR_13;
 VAR_3->gparent = VAR_10;

 FUNC_11(VAR_2, VAR_3);

 return VAR_3->gstate + VAR_3->gtop;
}
