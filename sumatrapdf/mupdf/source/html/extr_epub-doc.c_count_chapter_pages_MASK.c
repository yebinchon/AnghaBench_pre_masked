
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_9__ {scalar_t__ css_sum; TYPE_3__* accel; } ;
typedef TYPE_1__ epub_document ;
struct TYPE_10__ {size_t number; } ;
typedef TYPE_2__ epub_chapter ;
struct TYPE_11__ {int use_doc_css; scalar_t__ css_sum; size_t num_chapters; int* pages_in_chapter; } ;
typedef TYPE_3__ epub_accelerator ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(fz_context *VAR_0, epub_document *VAR_1, epub_chapter *VAR_2)
{
 epub_accelerator *VAR_3 = VAR_1->accel;
 int VAR_4 = FUNC_2(VAR_0);

 if (VAR_4 != VAR_3->use_doc_css || VAR_1->css_sum != VAR_3->css_sum)
 {
  VAR_3->use_doc_css = VAR_4;
  VAR_3->css_sum = VAR_1->css_sum;
  FUNC_3(VAR_0, VAR_3);
 }

 if (VAR_2->number < VAR_3->num_chapters && VAR_3->pages_in_chapter[VAR_2->number] != -1)
  return VAR_3->pages_in_chapter[VAR_2->number];

 FUNC_1(VAR_0, FUNC_0(VAR_0, VAR_1, VAR_2));
 return VAR_3->pages_in_chapter[VAR_2->number];
}
