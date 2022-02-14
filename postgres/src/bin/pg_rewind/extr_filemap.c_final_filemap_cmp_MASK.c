
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ action; int path; } ;
typedef TYPE_1__ file_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1, const void *VAR_2)
{
 file_entry_t *VAR_3 = *((file_entry_t **) VAR_1);
 file_entry_t *VAR_4 = *((file_entry_t **) VAR_2);

 if (VAR_3->action > VAR_4->action)
  return 1;
 if (VAR_3->action < VAR_4->action)
  return -1;

 if (VAR_3->action == VAR_0)
  return FUNC_0(VAR_4->path, VAR_3->path);
 else
  return FUNC_0(VAR_3->path, VAR_4->path);
}
