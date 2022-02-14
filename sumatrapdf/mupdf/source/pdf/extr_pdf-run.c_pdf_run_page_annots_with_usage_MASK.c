
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* annots; } ;
typedef TYPE_1__ pdf_page ;
typedef int pdf_document ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ pdf_annot ;
typedef int fz_matrix ;
typedef int fz_device ;
struct TYPE_11__ {int progress_max; int progress; scalar_t__ abort; } ;
typedef TYPE_3__ fz_cookie ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,TYPE_1__*,TYPE_2__*,int *,int ,char const*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_document *VAR_1, pdf_page *VAR_2, fz_device *VAR_3, fz_matrix VAR_4, const char *VAR_5, fz_cookie *VAR_6)
{
 pdf_annot *VAR_7;

 if (VAR_6 && VAR_6->progress_max != -1)
 {
  int VAR_8 = 1;
  for (VAR_7 = VAR_2->annots; VAR_7; VAR_7 = VAR_7->next)
   VAR_8++;
  VAR_6->progress_max += VAR_8;
 }

 for (VAR_7 = VAR_2->annots; VAR_7; VAR_7 = VAR_7->next)
 {

  if (VAR_6)
  {
   if (VAR_6->abort)
    break;
   VAR_6->progress++;
  }

  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
