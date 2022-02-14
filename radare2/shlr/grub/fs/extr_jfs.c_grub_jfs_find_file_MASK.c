
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_jfs_diropen {int ino; int name; } ;
struct TYPE_3__ {int mode; int inode; } ;
struct grub_jfs_data {TYPE_1__ currinode; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct grub_jfs_diropen*) ;
 scalar_t__ FUNC_3 (struct grub_jfs_diropen*) ;
 int FUNC_4 (struct grub_jfs_data*,int) ;
 struct grub_jfs_diropen* FUNC_5 (struct grub_jfs_data*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct grub_jfs_data*,int,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,int ) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*,scalar_t__) ;

__attribute__((used)) static grub_err_t
FUNC_13 (struct grub_jfs_data *VAR_7, const char *VAR_8)
{
  char * VAR_9 = FUNC_8(FUNC_11 (VAR_8));
  char *VAR_10 = VAR_9;
  char *VAR_11;
  struct grub_jfs_diropen *VAR_12;

  FUNC_12 (VAR_9, VAR_8, FUNC_11 (VAR_8) + 1);

  if (FUNC_6 (VAR_7, VAR_3, &VAR_7->currinode))
    {
      FUNC_1 (VAR_9);
      return VAR_6;
    }


  while (*VAR_10 == '/')
    {
      VAR_10++;
      if (!*VAR_10)
        {
          FUNC_1 (VAR_9);
          return 0;
        }
    }


  VAR_11 = FUNC_9 (VAR_10, '/');
  if (VAR_11)
    {
      while (*VAR_11 == '/')
 {
   VAR_11[0] = '\0';
   VAR_11++;
 }
    }
  VAR_12 = FUNC_5 (VAR_7, &VAR_7->currinode);
  if (!VAR_12)
    {
      FUNC_1 (VAR_9);
      return VAR_6;
    }

  for (;;)
    {
      if (FUNC_11 (VAR_10) == 0)
        {
          FUNC_1 (VAR_9);
          return VAR_1;
        }

      if (FUNC_3 (VAR_12) == VAR_2)
 break;



      if (!FUNC_10 (VAR_10, VAR_12->name))
 {
   int VAR_13 = VAR_12->ino;
   int VAR_14 = FUNC_7 (VAR_7->currinode.inode);

   FUNC_2 (VAR_12);
   VAR_12 = 0;

   if (FUNC_6 (VAR_7, VAR_13, &VAR_7->currinode))
     break;


   if ((FUNC_7 (VAR_7->currinode.mode)
        & VAR_5) == VAR_4)
     {
       FUNC_4 (VAR_7, VAR_14);
       if (VAR_6)
                {
                  FUNC_1 (VAR_9);
                  return VAR_6;
                }
     }

   if (!VAR_11)
            {
              FUNC_1 (VAR_9);
       return 0;
            }

   VAR_10 = VAR_11;
   VAR_11 = FUNC_9 (VAR_10, '/');
   if (VAR_11)
     {
       VAR_11[0] = '\0';
       VAR_11++;
     }


   VAR_12 = FUNC_5 (VAR_7, &VAR_7->currinode);
   if (!VAR_12)
            {
              FUNC_1 (VAR_9);
              return VAR_6;
            }

   continue;
 }
    }

  FUNC_2 (VAR_12);
  FUNC_0 (VAR_0, "file not found");
  FUNC_1 (VAR_9);
  return VAR_6;
}
