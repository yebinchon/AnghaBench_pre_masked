
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_document ;
typedef int fz_context ;
struct TYPE_5__ {TYPE_2__* spine; } ;
typedef TYPE_1__ epub_document ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ epub_chapter ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, int VAR_2)
{
 epub_document *VAR_3 = (epub_document*)VAR_1;
 epub_chapter *VAR_4;
 int VAR_5;
 for (VAR_5 = 0, VAR_4 = VAR_3->spine; VAR_4; ++VAR_5, VAR_4 = VAR_4->next)
 {
  if (VAR_5 == VAR_2)
  {
   return FUNC_0(VAR_0, VAR_3, VAR_4);
  }
 }
 return 0;
}
