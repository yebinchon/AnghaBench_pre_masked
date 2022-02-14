
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_page ;
struct TYPE_8__ {scalar_t__* page_margin; scalar_t__ page_h; scalar_t__ page_w; } ;
typedef TYPE_2__ fz_html ;
typedef int fz_context ;
struct TYPE_9__ {int doc; int * ch; } ;
typedef TYPE_3__ epub_page ;
typedef int epub_chapter ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static fz_rect
FUNC_2(fz_context *VAR_4, fz_page *VAR_5)
{
 epub_page *VAR_6 = (epub_page*)VAR_5;
 epub_chapter *VAR_7 = VAR_6->ch;
 fz_rect VAR_8;
 fz_html *VAR_9 = FUNC_0(VAR_4, VAR_6->doc, VAR_7);

 VAR_8.x0 = 0;
 VAR_8.y0 = 0;
 VAR_8.x1 = VAR_9->page_w + VAR_9->page_margin[VAR_1] + VAR_9->page_margin[VAR_2];
 VAR_8.y1 = VAR_9->page_h + VAR_9->page_margin[VAR_3] + VAR_9->page_margin[VAR_0];
 FUNC_1(VAR_4, VAR_9);
 return VAR_8;
}
