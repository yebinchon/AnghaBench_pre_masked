
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log2_blksz; } ;
struct grub_ufs_data {scalar_t__ linknest; int be; TYPE_1__ sblock; int disk; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct grub_ufs_data*,char*) ;
 int FUNC_1 (struct grub_ufs_data*,int ) ;
 scalar_t__ FUNC_2 (struct grub_ufs_data*) ;
 size_t FUNC_3 (struct grub_ufs_data*) ;
 int FUNC_4 (int ,int,int ,size_t,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,char*,...) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (struct grub_ufs_data*,char*) ;
 scalar_t__ FUNC_10 (struct grub_ufs_data*,int,int ) ;

__attribute__((used)) static grub_err_t
FUNC_11 (struct grub_ufs_data *VAR_4, int VAR_5)
{

  char VAR_6[FUNC_3 (VAR_4)];



  if (++VAR_4->linknest > VAR_2)
    return FUNC_5 (VAR_0, "too deep nesting of symlinks");

  if (FUNC_2 (VAR_4) == 0)
    FUNC_8 (VAR_6, (char *) FUNC_0 (VAR_4, VAR_6));
  else
    {
      FUNC_4 (VAR_4->disk,
        (FUNC_1 (VAR_4, 0)
         << FUNC_7 (VAR_4->sblock.log2_blksz,
          VAR_4->be)),
        0, FUNC_3 (VAR_4), VAR_6);
      VAR_6[FUNC_3 (VAR_4)] = '\0';
    }


  if (VAR_6[0] == '/')
    VAR_5 = VAR_1;


  if (FUNC_10 (VAR_4, VAR_5, 0))
    return VAR_3;

  FUNC_9 (VAR_4, VAR_6);
  if (VAR_3)
    FUNC_5 (VAR_3, "cannot follow symlink `%s'", VAR_6);

  return VAR_3;
}
