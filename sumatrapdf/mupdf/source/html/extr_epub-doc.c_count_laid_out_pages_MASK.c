
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int page_h; TYPE_1__* root; } ;
typedef TYPE_2__ fz_html ;
struct TYPE_4__ {int b; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(fz_html *VAR_0)
{
 if (VAR_0->root->b > 0)
  return FUNC_0(VAR_0->root->b / VAR_0->page_h);
 return 1;
}
