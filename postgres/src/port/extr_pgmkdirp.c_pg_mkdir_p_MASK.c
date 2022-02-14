
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;

int
FUNC_6(char *VAR_9, int VAR_10)
{
 struct stat VAR_11;
 mode_t VAR_12,
    VAR_13;
 int VAR_14,
    VAR_15;
 char *VAR_16;

 VAR_15 = 0;
 VAR_16 = VAR_9;
 VAR_13 = FUNC_5(0);
 VAR_12 = VAR_13 & ~(VAR_6 | VAR_7);
 (void) FUNC_5(VAR_12);

 if (VAR_16[0] == '/')
  ++VAR_16;
 for (VAR_14 = 0; !VAR_14; ++VAR_16)
 {
  if (VAR_16[0] == '\0')
   VAR_14 = 1;
  else if (VAR_16[0] != '/')
   continue;
  *VAR_16 = '\0';
  if (!VAR_14 && VAR_16[1] == '\0')
   VAR_14 = 1;

  if (VAR_14)
   (void) FUNC_5(VAR_13);


  if (FUNC_2(VAR_9, &VAR_11) == 0)
  {
   if (!FUNC_0(VAR_11.st_mode))
   {
    if (VAR_14)
     VAR_8 = VAR_0;
    else
     VAR_8 = VAR_2;
    VAR_15 = -1;
    break;
   }
  }
  else if (FUNC_1(VAR_9, VAR_14 ? VAR_10 : VAR_5 | VAR_3 | VAR_4) < 0)
  {
   VAR_15 = -1;
   break;
  }
  if (!VAR_14)
   *VAR_16 = '/';
 }


 (void) FUNC_5(VAR_13);

 return VAR_15;
}
