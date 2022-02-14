
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
struct TYPE_7__ {int TZname; int state; } ;
struct TYPE_6__ {size_t depth; char** dirname; int baselen; TYPE_2__ tz; int * dirdesc; } ;
typedef TYPE_1__ pg_tzenum ;
typedef TYPE_2__ pg_tz ;
typedef int fullname ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dirent* FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (char*,int *,int *,int) ;

pg_tz *
FUNC_15(pg_tzenum *VAR_3)
{
 while (VAR_3->depth >= 0)
 {
  struct dirent *VAR_4;
  char VAR_5[VAR_1 * 2];
  struct stat VAR_6;

  VAR_4 = FUNC_2(VAR_3->dirdesc[VAR_3->depth], VAR_3->dirname[VAR_3->depth]);

  if (!VAR_4)
  {

   FUNC_1(VAR_3->dirdesc[VAR_3->depth]);
   FUNC_8(VAR_3->dirname[VAR_3->depth]);
   VAR_3->depth--;
   continue;
  }

  if (VAR_4->d_name[0] == '.')
   continue;

  FUNC_11(VAR_5, sizeof(VAR_5), "%s/%s",
     VAR_3->dirname[VAR_3->depth], VAR_4->d_name);
  if (FUNC_12(VAR_5, &VAR_6) != 0)
   FUNC_4(VAR_0,
     (FUNC_5(),
      FUNC_6("could not stat \"%s\": %m", VAR_5)));

  if (FUNC_3(VAR_6.st_mode))
  {

   if (VAR_3->depth >= VAR_2 - 1)
    FUNC_4(VAR_0,
      (FUNC_7("timezone directory stack overflow")));
   VAR_3->depth++;
   VAR_3->dirname[VAR_3->depth] = FUNC_10(VAR_5);
   VAR_3->dirdesc[VAR_3->depth] = FUNC_0(VAR_5);
   if (!VAR_3->dirdesc[VAR_3->depth])
    FUNC_4(VAR_0,
      (FUNC_5(),
       FUNC_6("could not open directory \"%s\": %m",
        VAR_5)));


   continue;
  }







  if (FUNC_14(VAR_5 + VAR_3->baselen, ((void*)0), &VAR_3->tz.state, 1) != 0)
  {

   continue;
  }

  if (!FUNC_9(&VAR_3->tz))
  {

   continue;
  }


  FUNC_13(VAR_3->tz.TZname, VAR_5 + VAR_3->baselen,
    sizeof(VAR_3->tz.TZname));


  return &VAR_3->tz;
 }


 return ((void*)0);
}
