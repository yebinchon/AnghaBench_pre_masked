
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_page ;
typedef int fz_page_bound_page_fn ;
struct TYPE_3__ {int * bound_page; } ;
typedef TYPE_1__ fz_page ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;

pdf_page *FUNC_0(fz_context *VAR_1, fz_page *VAR_2)
{
 return (pdf_page *)((VAR_2 && VAR_2->bound_page == (fz_page_bound_page_fn*)VAR_0) ? VAR_2 : ((void*)0));
}
