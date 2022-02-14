
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refs; int chapter_num; void* doc; } ;
typedef TYPE_1__ fz_html_key ;
typedef int fz_html ;
typedef int fz_context ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*,int *) ;
 int VAR_1 ;

fz_html *FUNC_1(fz_context *VAR_2, void *VAR_3, int VAR_4)
{
 fz_html_key VAR_5;

 VAR_5.refs = 1;
 VAR_5.doc = VAR_3;
 VAR_5.chapter_num = VAR_4;
 return FUNC_0(VAR_2, &VAR_0, &VAR_5, &VAR_1);
}
