
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_5__ {int (* stat ) (int ) ;} ;
struct TYPE_6__ {int user_data; TYPE_1__ op; } ;
typedef TYPE_2__ CdioDataSource_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

off_t
FUNC_2(CdioDataSource_t *VAR_0)
{
  if (!VAR_0) return -1;
  if (!FUNC_0(VAR_0)) return -1;

  return VAR_0->op.stat(VAR_0->user_data);
}
