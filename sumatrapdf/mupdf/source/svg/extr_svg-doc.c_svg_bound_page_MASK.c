
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* doc; } ;
typedef TYPE_1__ svg_page ;
struct TYPE_5__ {int height; int width; int root; } ;
typedef TYPE_2__ svg_document ;
typedef int fz_rect ;
typedef int fz_page ;
typedef int fz_context ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static fz_rect
FUNC_2(fz_context *VAR_0, fz_page *VAR_1)
{
 svg_page *VAR_2 = (svg_page*)VAR_1;
 svg_document *VAR_3 = VAR_2->doc;

 FUNC_1(VAR_0, VAR_3, VAR_3->root);

 return FUNC_0(0, 0, VAR_3->width, VAR_3->height);
}
