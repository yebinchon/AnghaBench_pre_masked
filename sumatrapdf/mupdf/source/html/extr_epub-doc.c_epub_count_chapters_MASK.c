
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_document ;
typedef int fz_context ;
struct TYPE_3__ {TYPE_2__* spine; } ;
typedef TYPE_1__ epub_document ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_2__ epub_chapter ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, fz_document *VAR_1)
{
 epub_document *VAR_2 = (epub_document*)VAR_1;
 epub_chapter *VAR_3;
 int VAR_4 = 0;
 for (VAR_3 = VAR_2->spine; VAR_3; VAR_3 = VAR_3->next)
  ++VAR_4;
 return VAR_4;
}
