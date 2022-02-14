
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pathbuf ;
typedef int int64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,int *,struct stat*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,int ,int,int ,int) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*) ;

int64
FUNC_8(char *VAR_6, bool VAR_7)
{
 int64 VAR_8;
 char VAR_9[VAR_2];
 struct stat VAR_10;





 FUNC_6(VAR_9, sizeof(VAR_9), "%s/%s", VAR_6,
    VAR_4);





 if (FUNC_4(VAR_9, &VAR_10) != 0)
 {
  if (VAR_5 != VAR_0)
   FUNC_1(VAR_1,
     (FUNC_2(),
      FUNC_3("could not stat file or directory \"%s\": %m",
       VAR_9)));


  return 0;
 }

 VAR_8 = FUNC_0(VAR_4, ((void*)0), &VAR_10,
         VAR_7);


 VAR_8 += FUNC_5(VAR_9, FUNC_7(VAR_6), VAR_7, VAR_3, 1);

 return VAR_8;
}
