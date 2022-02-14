
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {char* d_name; scalar_t__ d_type; } ;
typedef int buf ;
struct TYPE_2__ {char* name; } ;
typedef int DIR ;


 char VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*,...) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_6, char *VAR_7)
{
  DIR *VAR_8;
  struct dirent *VAR_9;
  struct stat VAR_10;
  char VAR_11[VAR_3];
  char VAR_12[VAR_3];
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8 != ((void*)0))
    {
      while ((VAR_9 = FUNC_8(VAR_8)) != ((void*)0))
       {
          if (FUNC_11(VAR_9->d_name, ".") == 0 || FUNC_11(VAR_9->d_name, "..") == 0)
            continue;


          if (VAR_6[0] == VAR_0)
            {
              FUNC_12(VAR_11, VAR_6);
              FUNC_10(VAR_11, VAR_1);
              FUNC_10(VAR_11, VAR_9->d_name);
            }
          else
            {
              if (!FUNC_3(VAR_11, sizeof(VAR_11)))
                {
                  FUNC_7("Can't get CWD: %s\n", FUNC_13(VAR_4));
                  return;
                }
              FUNC_10(VAR_11, VAR_1);
              FUNC_10(VAR_11, VAR_6);
              FUNC_10(VAR_11, VAR_9->d_name);
            }

          if (FUNC_9(VAR_11, &VAR_10) == -1)
            {
              FUNC_7("Can't access '%s' (%s)\n", VAR_11, FUNC_13(VAR_4));
              return;
            }

          if (FUNC_0(VAR_10.st_mode))
           {
              FUNC_12(VAR_12, VAR_7);
              FUNC_10(VAR_12, VAR_9->d_name);
              FUNC_10(VAR_12, "/");

              FUNC_14(VAR_11, VAR_12);
              continue;
           }


          if (!FUNC_4(VAR_11))
            {
              continue;
            }

          FUNC_6(VAR_11, VAR_7, VAR_9->d_name);
        }
      FUNC_1(VAR_8);
    }
  else
    {
      FUNC_7("Can't open %s\n", VAR_6);
      FUNC_2(1);
    }


}
