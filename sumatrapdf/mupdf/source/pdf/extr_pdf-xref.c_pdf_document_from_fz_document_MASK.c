
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_document ;
struct TYPE_3__ {scalar_t__ count_pages; } ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;

pdf_document *FUNC_0(fz_context *VAR_1, fz_document *VAR_2)
{
 return (pdf_document *)((VAR_2 && VAR_2->count_pages == VAR_0) ? VAR_2 : ((void*)0));
}
