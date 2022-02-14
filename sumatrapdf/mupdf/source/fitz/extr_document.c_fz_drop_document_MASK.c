
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* drop_document ) (int *,TYPE_1__*) ;int refs; } ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(fz_context *VAR_0, fz_document *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  if (VAR_1->drop_document)
   VAR_1->drop_document(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_1);
 }
}
