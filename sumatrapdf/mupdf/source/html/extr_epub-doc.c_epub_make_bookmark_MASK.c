
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int chapter; int page; } ;
typedef TYPE_1__ fz_location ;
typedef int fz_html ;
typedef int fz_document ;
typedef int fz_context ;
typedef int fz_bookmark ;
struct TYPE_8__ {TYPE_3__* spine; } ;
typedef TYPE_2__ epub_document ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_3__ epub_chapter ;


 int * FUNC_0 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static fz_bookmark
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 epub_document *VAR_3 = (epub_document*)VAR_1;
 epub_chapter *VAR_4;
 int VAR_5;

 for (VAR_5 = 0, VAR_4 = VAR_3->spine; VAR_4; ++VAR_5, VAR_4 = VAR_4->next)
 {
  if (VAR_5 == VAR_2.chapter)
  {
   fz_html *VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_4);
   fz_bookmark VAR_7 = FUNC_2(VAR_0, VAR_6, VAR_2.page);
   FUNC_1(VAR_0, VAR_6);
   return VAR_7;
  }
 }

 return 0;
}
