
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; int const** handler; } ;
typedef TYPE_1__ fz_document_handler_context ;
typedef int fz_document_handler ;
struct TYPE_6__ {TYPE_1__* handler; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;

void FUNC_1(fz_context *VAR_2, const fz_document_handler *VAR_3)
{
 fz_document_handler_context *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 VAR_4 = VAR_2->handler;
 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_2, VAR_1, "Document handler list not found");

 for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
  if (VAR_4->handler[VAR_5] == VAR_3)
   return;

 if (VAR_4->count >= VAR_0)
  FUNC_0(VAR_2, VAR_1, "Too many document handlers");

 VAR_4->handler[VAR_4->count++] = VAR_3;
}
