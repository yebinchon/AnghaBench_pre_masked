
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; } ;
typedef TYPE_1__ fz_html_flow ;
struct TYPE_6__ {int page_h; int root; } ;
typedef TYPE_2__ fz_html ;
typedef int fz_context ;
typedef scalar_t__ fz_bookmark ;


 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*) ;

int
FUNC_1(fz_context *VAR_0, fz_html *VAR_1, fz_bookmark VAR_2)
{
 fz_html_flow *VAR_3 = (fz_html_flow*)VAR_2;
 if (VAR_3 && FUNC_0(VAR_0, VAR_1->root, VAR_3))
  return (int)(VAR_3->y / VAR_1->page_h);
 return -1;
}
