
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pdf_font_desc ;
struct TYPE_15__ {int char_ty; int char_tx; } ;
struct TYPE_16__ {TYPE_3__ tos; TYPE_6__* chain; TYPE_5__* gstate; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_13__ {int * font; } ;
struct TYPE_14__ {TYPE_1__ text; } ;
struct TYPE_17__ {TYPE_2__ pending; } ;
typedef TYPE_5__ filter_gstate ;
struct TYPE_18__ {int (* op_Tj ) (int *,TYPE_6__*,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (int *,TYPE_4__*,unsigned char*,int,int*,int*,int*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_6__*,char*,int) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, pdf_filter_processor *VAR_2, unsigned char *VAR_3, int VAR_4)
{
 filter_gstate *VAR_5 = VAR_2->gstate;
 pdf_font_desc *VAR_6 = VAR_5->pending.text.font;
 int VAR_7, VAR_8, VAR_9;

 if (!VAR_6)
  return;

 VAR_7 = 0;
 while (VAR_7 < VAR_4)
 {
  int VAR_10 = VAR_7;
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_9);
  if (VAR_10 != VAR_7)
  {

   FUNC_2(VAR_1, VAR_2, VAR_0);
   FUNC_4(VAR_1, VAR_2);
   if (VAR_2->chain->op_Tj)
    VAR_2->chain->op_Tj(VAR_1, VAR_2->chain, (char *)VAR_3+VAR_10, VAR_7-VAR_10);
  }
  if (VAR_7 != VAR_4)
  {
   FUNC_1(VAR_1, VAR_2, VAR_2->tos.char_tx, VAR_2->tos.char_ty);
   VAR_7 += VAR_8;
  }
  if (VAR_9)
   FUNC_0(VAR_1, VAR_2);
 }
}
