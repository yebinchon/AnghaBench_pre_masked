
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* doc; } ;
typedef TYPE_2__ html_page ;
struct TYPE_8__ {TYPE_1__* html; } ;
typedef TYPE_3__ html_document ;
struct TYPE_9__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_4__ fz_rect ;
typedef int fz_page ;
typedef int fz_context ;
struct TYPE_6__ {scalar_t__* page_margin; scalar_t__ page_h; scalar_t__ page_w; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static fz_rect
FUNC_0(fz_context *VAR_4, fz_page *VAR_5)
{
 html_page *VAR_6 = (html_page*)VAR_5;
 html_document *VAR_7 = VAR_6->doc;
 fz_rect VAR_8;
 VAR_8.x0 = 0;
 VAR_8.y0 = 0;
 VAR_8.x1 = VAR_7->html->page_w + VAR_7->html->page_margin[VAR_1] + VAR_7->html->page_margin[VAR_2];
 VAR_8.y1 = VAR_7->html->page_h + VAR_7->html->page_margin[VAR_3] + VAR_7->html->page_margin[VAR_0];
 return VAR_8;
}
