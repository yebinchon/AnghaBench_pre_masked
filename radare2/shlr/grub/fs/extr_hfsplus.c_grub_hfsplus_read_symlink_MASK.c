
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ grub_ssize_t ;
typedef TYPE_1__* grub_fshelp_node_t ;
struct TYPE_4__ {int size; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int,char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *
FUNC_3 (grub_fshelp_node_t VAR_0)
{
  char *VAR_1;
  grub_ssize_t VAR_2;

  VAR_1 = FUNC_2 (VAR_0->size + 1);
  if (!VAR_1)
    return 0;

  VAR_2 = FUNC_1 (VAR_0, 0, 0, 0, 0, VAR_0->size, VAR_1);
  if (VAR_2 != (grub_ssize_t) VAR_0->size)
    {
      FUNC_0 (VAR_1);
      return 0;
    }
  VAR_1[VAR_0->size] = '\0';

  return VAR_1;
}
