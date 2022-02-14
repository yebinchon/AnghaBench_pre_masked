
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; } ;
typedef TYPE_1__ tag_record ;
struct TYPE_7__ {TYPE_1__* current_tags; TYPE_1__* pending_tags; } ;
typedef TYPE_2__ pdf_filter_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,TYPE_1__*,int,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_filter_processor *VAR_1, int VAR_2, int VAR_3)
{
 tag_record *VAR_4 = VAR_1->pending_tags;

 for (VAR_4 = VAR_1->pending_tags; VAR_4 != ((void*)0); VAR_4 = VAR_4->prev)
  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
 for (VAR_4 = VAR_1->current_tags; VAR_4 != ((void*)0); VAR_4 = VAR_4->prev)
  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
}
