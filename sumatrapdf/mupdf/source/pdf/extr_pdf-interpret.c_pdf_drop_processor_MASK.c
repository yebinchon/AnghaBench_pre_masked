
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* drop_processor ) (int *,TYPE_1__*) ;scalar_t__ close_processor; } ;
typedef TYPE_1__ pdf_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_0, pdf_processor *VAR_1)
{
 if (VAR_1)
 {
  if (VAR_1->close_processor)
   FUNC_1(VAR_0, "dropping unclosed PDF processor");
  if (VAR_1->drop_processor)
   VAR_1->drop_processor(VAR_0, VAR_1);
 }
 FUNC_0(VAR_0, VAR_1);
}
