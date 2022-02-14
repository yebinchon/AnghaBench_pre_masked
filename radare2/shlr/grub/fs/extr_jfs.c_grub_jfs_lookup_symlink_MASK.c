
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ path; } ;
struct TYPE_4__ {TYPE_1__ symlink; int size; } ;
struct grub_jfs_data {scalar_t__ linknest; TYPE_2__ currinode; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (struct grub_jfs_data*,char*) ;
 scalar_t__ FUNC_2 (struct grub_jfs_data*,int ,int ,int ,int,char*) ;
 scalar_t__ FUNC_3 (struct grub_jfs_data*,int,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_7 (struct grub_jfs_data *VAR_3, int VAR_4)
{
  int VAR_5 = FUNC_4 (VAR_3->currinode.size);

  char VAR_6[VAR_5 + 1];



  if (++VAR_3->linknest > VAR_1)
    return FUNC_0 (VAR_0, "too deep nesting of symlinks");

  if (VAR_5 <= 128)
    FUNC_6 (VAR_6, (char *) (VAR_3->currinode.symlink.path), 128);
  else if (FUNC_2 (VAR_3, 0, 0, 0, VAR_5, VAR_6) < 0)
    return VAR_2;

  VAR_6[VAR_5] = '\0';


  if (VAR_6[0] == '/')
    VAR_4 = 2;


  if (FUNC_3 (VAR_3, VAR_4, &VAR_3->currinode))
    return VAR_2;

  FUNC_1 (VAR_3, VAR_6);
  if (VAR_2)
    FUNC_0 (VAR_2, "cannot follow symlink `%s'", VAR_6);

  return VAR_2;
}
