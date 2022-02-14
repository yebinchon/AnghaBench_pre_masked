
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int no_black_boxes; } ;
typedef TYPE_1__ pdf_redact_options ;
typedef int pdf_page ;
struct TYPE_12__ {int redacted; } ;
typedef TYPE_2__ pdf_document ;
struct TYPE_13__ {int obj; } ;
typedef TYPE_3__ pdf_annot ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*,int *,int *,int *,int ,int *,int *,int,int) ;
 TYPE_3__* FUNC_4 (int *,int *) ;
 TYPE_3__* FUNC_5 (int *,TYPE_3__*) ;
 int * VAR_2 ;
 int VAR_3 ;

int
FUNC_6(fz_context *VAR_4, pdf_document *VAR_5, pdf_page *VAR_6, pdf_redact_options *VAR_7)
{
 pdf_annot *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_7)
 {
  VAR_10 = VAR_7->no_black_boxes;
 }

 for (VAR_8 = FUNC_4(VAR_4, VAR_6); VAR_8; VAR_8 = FUNC_5(VAR_4, VAR_8))
  if (FUNC_2(VAR_4, VAR_8->obj, FUNC_0(VAR_1)) == FUNC_0(VAR_0))
   VAR_9 = 1;

 if (VAR_9)
 {
  FUNC_3(VAR_4, VAR_5, VAR_6, ((void*)0),
   VAR_10 ? ((void*)0) : VAR_2,
   VAR_3,
   ((void*)0),
   VAR_6,
   1, 1);
 }

 VAR_8 = FUNC_4(VAR_4, VAR_6);
 while (VAR_8)
 {
  if (FUNC_2(VAR_4, VAR_8->obj, FUNC_0(VAR_1)) == FUNC_0(VAR_0))
  {
   FUNC_1(VAR_4, VAR_6, VAR_8);
   VAR_8 = FUNC_4(VAR_4, VAR_6);
  }
  else
  {
   VAR_8 = FUNC_5(VAR_4, VAR_8);
  }
 }

 VAR_5->redacted = VAR_9;

 return VAR_9;
}
