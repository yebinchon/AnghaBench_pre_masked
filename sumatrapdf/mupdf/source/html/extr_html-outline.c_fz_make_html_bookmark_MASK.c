
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int page_h; int root; } ;
typedef TYPE_1__ fz_html ;
typedef int fz_context ;
typedef int fz_bookmark ;


 int FUNC_0 (int *,int ,int) ;

fz_bookmark
FUNC_1(fz_context *VAR_0, fz_html *VAR_1, int VAR_2)
{
 return (fz_bookmark)FUNC_0(VAR_0, VAR_1->root, VAR_2 * VAR_1->page_h);
}
