
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* container; int (* drop_device ) (int *,TYPE_1__*) ;scalar_t__ close_device; int refs; } ;
typedef TYPE_1__ fz_device ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  if (VAR_1->close_device)
   FUNC_2(VAR_0, "dropping unclosed device");
  if (VAR_1->drop_device)
   VAR_1->drop_device(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_1->container);
  FUNC_1(VAR_0, VAR_1);
 }
}
