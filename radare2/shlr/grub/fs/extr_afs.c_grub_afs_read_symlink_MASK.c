
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* grub_fshelp_node_t ;
typedef int grub_afs_off_t ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {TYPE_2__ stream; } ;
struct TYPE_8__ {TYPE_1__ inode; } ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char *
FUNC_4 (grub_fshelp_node_t VAR_0)
{
  char *VAR_1;
  grub_afs_off_t VAR_2 = FUNC_1 (VAR_0->inode.stream.size);

  if (VAR_2 == 0)
    {
      VAR_2 = sizeof (VAR_0->inode.stream);
      VAR_1 = FUNC_3 (VAR_2 + 1);
      if (! VAR_1)
 return 0;
      FUNC_2 (VAR_1, (char *) &(VAR_0->inode.stream),
     sizeof (VAR_0->inode.stream));
      return VAR_1;
    }
  VAR_1 = FUNC_3 (VAR_2 + 1);
  if (! VAR_1)
    return 0;
  FUNC_0 (VAR_0, 0, 0, 0, 0, VAR_2, VAR_1);
  return VAR_1;
}
