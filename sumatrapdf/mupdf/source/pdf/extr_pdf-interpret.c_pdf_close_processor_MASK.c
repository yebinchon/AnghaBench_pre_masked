
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* close_processor ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ pdf_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1)
{
 if (VAR_1 && VAR_1->close_processor)
 {
  VAR_1->close_processor(VAR_0, VAR_1);
  VAR_1->close_processor = ((void*)0);
 }
}
