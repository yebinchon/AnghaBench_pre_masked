
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int y1; int y0; int x1; int x0; } ;
struct TYPE_8__ {void* doc; TYPE_1__ rect; struct TYPE_8__* next; } ;
typedef TYPE_2__ fz_link ;
struct TYPE_9__ {scalar_t__* page_margin; int page_h; int root; } ;
typedef TYPE_3__ fz_html ;
typedef int fz_context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 TYPE_2__* FUNC_1 (int *,int ,int *,int,int ,char*,char const*) ;

fz_link *
FUNC_2(fz_context *VAR_2, fz_html *VAR_3, int VAR_4, const char *VAR_5, void *VAR_6)
{
 fz_link *VAR_7, *VAR_8;
 char VAR_9[2048];
 FUNC_0(VAR_9, VAR_5, sizeof VAR_9);

 VAR_8 = FUNC_1(VAR_2, VAR_3->root, ((void*)0), VAR_4, VAR_3->page_h, VAR_9, VAR_5);

 for (VAR_7 = VAR_8; VAR_7; VAR_7 = VAR_7->next)
 {

  VAR_7->rect.x0 += VAR_3->page_margin[VAR_0];
  VAR_7->rect.x1 += VAR_3->page_margin[VAR_0];
  VAR_7->rect.y0 += VAR_3->page_margin[VAR_1];
  VAR_7->rect.y1 += VAR_3->page_margin[VAR_1];


  VAR_7->doc = VAR_6;
 }

 return VAR_8;
}
