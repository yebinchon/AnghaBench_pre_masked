
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* end_page ) (int *,TYPE_1__*,int *) ;int * dev; } ;
typedef TYPE_1__ fz_document_writer ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;

void
FUNC_1(fz_context *VAR_0, fz_document_writer *VAR_1)
{
 fz_device *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = VAR_1->dev;
 VAR_1->dev = ((void*)0);
 VAR_1->end_page(VAR_0, VAR_1, VAR_2);
}
