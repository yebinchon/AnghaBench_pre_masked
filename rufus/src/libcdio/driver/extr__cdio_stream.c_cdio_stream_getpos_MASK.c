
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int position; int is_open; } ;
typedef TYPE_1__ CdioDataSource_t ;


 int VAR_0 ;

off_t
FUNC_0(CdioDataSource_t* VAR_1, off_t *VAR_2)
{
  if (!VAR_1 || !VAR_1->is_open) return VAR_0;
  return *VAR_2 = VAR_1->position;
}
