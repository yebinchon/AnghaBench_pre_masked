
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_extent_handle_t ;
struct TYPE_4__ {int max_paths; struct TYPE_4__* path; struct TYPE_4__* buf; } ;


 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(ext2_extent_handle_t VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 if (VAR_0->path) {
  for (VAR_1 = 1; VAR_1 < VAR_0->max_paths; VAR_1++) {
   if (VAR_0->path[VAR_1].buf)
    FUNC_0(&VAR_0->path[VAR_1].buf);
  }
  FUNC_0(&VAR_0->path);
 }
 FUNC_0(&VAR_0);
}
