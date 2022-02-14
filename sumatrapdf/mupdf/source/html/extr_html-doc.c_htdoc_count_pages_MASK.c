
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* html; } ;
typedef TYPE_3__ html_document ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_5__ {int page_h; TYPE_1__* root; } ;
struct TYPE_4__ {int b; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, int VAR_2)
{
 html_document *VAR_3 = (html_document*)VAR_1;
 if (VAR_3->html->root->b > 0)
  return FUNC_0(VAR_3->html->root->b / VAR_3->html->page_h);
 return 1;
}
