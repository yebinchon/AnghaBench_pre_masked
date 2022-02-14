
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_ufs_dirent {int namelen_bsd; int direntlen; int ino; int namelen; int member_0; } ;
struct grub_ufs_data {int ino; int be; } ;
typedef scalar_t__ grub_err_t ;
typedef int dirent ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct grub_ufs_data*) ;
 unsigned int FUNC_1 (struct grub_ufs_data*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 unsigned int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (struct grub_ufs_data*,int) ;
 scalar_t__ FUNC_12 (struct grub_ufs_data*,int ,int ,unsigned int,int,char*) ;
 int FUNC_13 (struct grub_ufs_data*,int ,int ) ;

__attribute__((used)) static grub_err_t
FUNC_14 (struct grub_ufs_data *VAR_7, const char *VAR_8)
{
  char * VAR_9 = FUNC_4(FUNC_10 (VAR_8) + 1);
  char *VAR_10 = VAR_9;
  char *VAR_11;
  unsigned int VAR_12 = 0;
  int VAR_13;

  FUNC_9 (VAR_9, VAR_8);


  if (VAR_10[0] == '/')
    {
      VAR_10++;
      if (!*VAR_10)
        {
          FUNC_3 (VAR_9);
          return 0;
        }
    }


  VAR_11 = FUNC_7 (VAR_10, '/');
  if (VAR_11)
    {
      VAR_11[0] = '\0';
      VAR_11++;
    }

  do
    {
      struct grub_ufs_dirent VAR_14 = {0};
      int VAR_15;

      if (FUNC_10 (VAR_10) == 0)
        {
          FUNC_3 (VAR_9);
          return VAR_2;
        }

      if (FUNC_12 (VAR_7, 0, 0, VAR_12, sizeof (VAR_14),
         (char *) &VAR_14) < 0)
        {
          FUNC_3 (VAR_9);
          return VAR_6;
        }




      VAR_15 = FUNC_5 (VAR_14.namelen, VAR_7->be);

      {
 char * VAR_16 = FUNC_4(VAR_15 + 1);
 if (FUNC_12 (VAR_7, 0, 0, VAR_12 + sizeof (VAR_14),
    VAR_15, VAR_16) < 0)
          {
            FUNC_3 (VAR_9);
            FUNC_3 (VAR_16);
            return VAR_6;
          }

 VAR_16[VAR_15] = '\0';

 if (!FUNC_8 (VAR_10, VAR_16))
   {
     VAR_13 = VAR_7->ino;
     FUNC_13 (VAR_7, FUNC_6 (VAR_14.ino,
         VAR_7->be), 0);

     if ((FUNC_0(VAR_7) & VAR_5)
  == VAR_4)
       {
  FUNC_11 (VAR_7, VAR_13);
  if (VAR_6)
                  {
                    FUNC_3 (VAR_9);
                    FUNC_3 (VAR_16);
                    return VAR_6;
                  }
       }

     if (!VAR_11)
              {
                FUNC_3 (VAR_9);
                FUNC_3 (VAR_16);
                return 0;
              }

     VAR_12 = 0;

     VAR_10 = VAR_11;
     VAR_11 = FUNC_7 (VAR_10, '/');
     if (VAR_11)
       {
  VAR_11[0] = '\0';
  VAR_11++;
       }

     if ((FUNC_0(VAR_7) & VAR_5) != VAR_3)
              {
                FUNC_3 (VAR_9);
                FUNC_3 (VAR_16);
                return FUNC_2 (VAR_0, "not a directory");
              }

            FUNC_3 (VAR_16);
     continue;
   }
 FUNC_3 (VAR_16);
      }

      VAR_12 += FUNC_5 (VAR_14.direntlen, VAR_7->be);
    } while (VAR_12 < FUNC_1 (VAR_7));

  FUNC_3 (VAR_9);
  FUNC_2 (VAR_1, "file not found");
  return VAR_6;
}
