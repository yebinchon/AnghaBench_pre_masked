
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opts; int * page; int number; } ;
typedef TYPE_1__ fz_text_writer ;
typedef int fz_rect ;
typedef int fz_document_writer ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static fz_device *
FUNC_3(fz_context *VAR_0, fz_document_writer *VAR_1, fz_rect VAR_2)
{
 fz_text_writer *VAR_3 = (fz_text_writer*)VAR_1;

 if (VAR_3->page)
 {
  FUNC_0(VAR_0, VAR_3->page);
  VAR_3->page = ((void*)0);
 }

 VAR_3->number++;

 VAR_3->page = FUNC_2(VAR_0, VAR_2);
 return FUNC_1(VAR_0, VAR_3->page, &VAR_3->opts);
}
