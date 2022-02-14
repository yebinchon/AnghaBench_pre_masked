
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dev; int (* drop_writer ) (int *,TYPE_1__*) ;scalar_t__ close_writer; } ;
typedef TYPE_1__ fz_document_writer ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(fz_context *VAR_0, fz_document_writer *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->close_writer)
  FUNC_2(VAR_0, "dropping unclosed document writer");
 if (VAR_1->drop_writer)
  VAR_1->drop_writer(VAR_0, VAR_1);
 if (VAR_1->dev)
  FUNC_0(VAR_0, VAR_1->dev);
 FUNC_1(VAR_0, VAR_1);
}
