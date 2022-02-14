
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_minix_data {int filename_size; int ino; } ;
typedef int ino ;
typedef int grub_uint16_t ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct grub_minix_data*) ;
 unsigned int FUNC_1 (struct grub_minix_data*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (struct grub_minix_data*,int) ;
 scalar_t__ FUNC_7 (struct grub_minix_data*,int ,int ,unsigned int,int,char*) ;
 int FUNC_8 (struct grub_minix_data*,int ) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static grub_err_t
FUNC_13 (struct grub_minix_data *VAR_6, const char *VAR_7)
{
  char * VAR_8 = FUNC_5(FUNC_12 (VAR_7) + 1);
  char *VAR_9 = VAR_8;
  char *VAR_10;
  unsigned int VAR_11 = 0;
  int VAR_12;

  FUNC_11 (VAR_8, VAR_7);


  if (VAR_9[0] == '/')
    {
      VAR_9++;
      if (!*VAR_9)
      {
        FUNC_3 (VAR_8);
        return 0;
      }
    }


  VAR_10 = FUNC_9 (VAR_9, '/');
  if (VAR_10)
    {
      VAR_10[0] = '\0';
      VAR_10++;
    }

  do
    {
      grub_uint16_t VAR_13;
      char * VAR_14 = FUNC_5(VAR_6->filename_size + 1);
      if (FUNC_12 (VAR_9) == 0)
        {
          FUNC_3 (VAR_8);
          FUNC_3 (VAR_14);
          return VAR_2;
        }

      if (FUNC_7 (VAR_6, 0, 0, VAR_11, sizeof (VAR_13),
    (char *) &VAR_13) < 0)
        {
          FUNC_3 (VAR_8);
          FUNC_3 (VAR_14);
          return VAR_5;
        }
      if (FUNC_7 (VAR_6, 0, 0, VAR_11 + sizeof (VAR_13),
    VAR_6->filename_size, (char *) VAR_14)< 0)
        {
          FUNC_3 (VAR_8);
          FUNC_3 (VAR_14);
          return VAR_5;
        }

      VAR_14[VAR_6->filename_size] = '\0';



      if (!FUNC_10 (VAR_9, VAR_14))
 {
   VAR_12 = VAR_6->ino;
   FUNC_8 (VAR_6, FUNC_4 (VAR_13));


   if ((FUNC_0 (VAR_6)
        & VAR_4) == VAR_4)
     {
       FUNC_6 (VAR_6, VAR_12);
       if (VAR_5)
                {
                  FUNC_3 (VAR_8);
                  FUNC_3 (VAR_14);
                  return VAR_5;
                }
     }

   if (!VAR_10)
            {
              FUNC_3 (VAR_8);
              FUNC_3 (VAR_14);
              return 0;
            }

   VAR_11 = 0;

   VAR_9 = VAR_10;
   VAR_10 = FUNC_9 (VAR_9, '/');
   if (VAR_10)
     {
       VAR_10[0] = '\0';
       VAR_10++;
     }

        if ((FUNC_0 (VAR_6)
        & VAR_3) != VAR_3)
            {
              FUNC_3 (VAR_8);
              FUNC_3 (VAR_14);
              return FUNC_2 (VAR_0, "not a directory");
            }
          FUNC_3 (VAR_14);
   continue;
 }

      VAR_11 += sizeof (VAR_13) + VAR_6->filename_size;
    } while (VAR_11 < FUNC_1 (VAR_6));

  FUNC_3 (VAR_8);
  FUNC_2 (VAR_1, "file not found");
  return VAR_5;
}
