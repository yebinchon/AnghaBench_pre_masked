
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_7__ {TYPE_3__* chain; TYPE_5__* current_tags; TYPE_5__* pending_tags; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_9__ {int raw; } ;
struct TYPE_8__ {int (* op_EMC ) (int *,TYPE_3__*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_5__**) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, pdf_processor *VAR_2)
{
 pdf_filter_processor *VAR_3 = (pdf_filter_processor*)VAR_2;



 if (VAR_3->pending_tags != ((void*)0))
  FUNC_3(VAR_1, VAR_3, &VAR_3->pending_tags);
 else if (VAR_3->current_tags)
 {
  FUNC_5(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_0), FUNC_2(VAR_1, VAR_3->current_tags->raw));
  FUNC_3(VAR_1, VAR_3, &VAR_3->current_tags);
  if (VAR_3->chain->op_EMC)
   VAR_3->chain->op_EMC(VAR_1, VAR_3->chain);
 }
}
