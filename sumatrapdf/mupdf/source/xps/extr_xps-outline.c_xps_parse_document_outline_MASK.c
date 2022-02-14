
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xps_document ;
typedef int fz_xml ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* down; int page; void* uri; void* title; } ;
typedef TYPE_1__ fz_outline ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_8__ {int page; } ;


 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int *,TYPE_1__*,int,int) ;
 TYPE_3__ FUNC_9 (int *,int *,char*,int *,int *) ;

__attribute__((used)) static fz_outline *
FUNC_10(fz_context *VAR_0, xps_document *VAR_1, fz_xml *VAR_2)
{
 fz_xml *VAR_3;
 fz_outline *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
 int VAR_7 = 1, VAR_8;
 for (VAR_3 = FUNC_5(VAR_2); VAR_3; VAR_3 = FUNC_7(VAR_3))
 {
  if (FUNC_6(VAR_3, "OutlineEntry"))
  {
   char *VAR_9 = FUNC_4(VAR_3, "OutlineLevel");
   char *VAR_10 = FUNC_4(VAR_3, "OutlineTarget");
   char *VAR_11 = FUNC_4(VAR_3, "Description");
   if (!VAR_10 || !VAR_11)
    continue;

   VAR_5 = FUNC_2(VAR_0);
   VAR_5->title = FUNC_0(FUNC_3(VAR_0, VAR_11), "outline_title");
   VAR_5->uri = FUNC_0(FUNC_3(VAR_0, VAR_10), "outline_uri");
   VAR_5->page = FUNC_9(VAR_0, (fz_document*)VAR_1, VAR_10, ((void*)0), ((void*)0)).page;
   VAR_5->down = ((void*)0);
   VAR_5->next = ((void*)0);

   VAR_8 = VAR_9 ? FUNC_1(VAR_9) : 1;

   if (!VAR_4)
   {
    VAR_4 = VAR_5;
   }
   else
   {
    VAR_6 = FUNC_8(VAR_0, VAR_1, VAR_4, 1, VAR_8);
    if (VAR_8 > VAR_7)
     VAR_6->down = VAR_5;
    else
     VAR_6->next = VAR_5;
   }

   VAR_7 = VAR_8;
  }
 }
 return VAR_4;
}
