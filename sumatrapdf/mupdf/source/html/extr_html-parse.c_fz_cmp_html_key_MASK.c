
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ doc; scalar_t__ chapter_num; } ;
typedef TYPE_1__ fz_html_key ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, void *VAR_1, void *VAR_2)
{
 fz_html_key *VAR_3 = (fz_html_key *)VAR_1;
 fz_html_key *VAR_4 = (fz_html_key *)VAR_2;
 return VAR_3->doc == VAR_4->doc && VAR_3->chapter_num == VAR_4->chapter_num;
}
