
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* free ) (int *) ;} ;
struct TYPE_7__ {int * user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(CdioDataSource_t *VAR_0)
{
  if (!VAR_0) return;

  FUNC_0(VAR_0);

  VAR_0->op.free(VAR_0->user_data);
  VAR_0->user_data = ((void*)0);
  FUNC_1(VAR_0);
}
