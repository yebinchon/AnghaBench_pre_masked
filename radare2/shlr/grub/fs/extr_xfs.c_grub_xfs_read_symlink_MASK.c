
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int grub_ssize_t ;
typedef TYPE_3__* grub_fshelp_node_t ;
struct TYPE_6__ {int raw; } ;
struct TYPE_7__ {int format; TYPE_1__ data; int size; } ;
struct TYPE_8__ {TYPE_2__ inode; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ,int,char*) ;

__attribute__((used)) static char *
FUNC_5 (grub_fshelp_node_t VAR_0)
{
  int VAR_1 = FUNC_0 (VAR_0->inode.size);

  switch (VAR_0->inode.format)
    {
    case 128:
      return FUNC_3 (VAR_0->inode.data.raw, VAR_1);

    case 129:
      {
 char *VAR_2;
 grub_ssize_t VAR_3;

 VAR_2 = FUNC_2 (VAR_1 + 1);
 if (!VAR_2)
   return 0;

 VAR_3 = FUNC_4 (VAR_0, 0, 0, 0, 0, VAR_1, VAR_2);
 if (VAR_3 != VAR_1)
   {
     FUNC_1 (VAR_2);
     return 0;
   }
 VAR_2[VAR_1] = '\0';
 return VAR_2;
      }
    }

  return 0;
}
