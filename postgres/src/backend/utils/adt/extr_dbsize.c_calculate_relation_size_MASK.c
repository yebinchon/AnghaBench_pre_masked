
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int int64 ;
typedef int RelFileNode ;
typedef int ForkNumber ;
typedef int BackendId ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;

__attribute__((used)) static int64
FUNC_7(RelFileNode *VAR_4, BackendId VAR_5, ForkNumber VAR_6)
{
 int64 VAR_7 = 0;
 char *VAR_8;
 char VAR_9[VAR_2];
 unsigned int VAR_10 = 0;

 VAR_8 = FUNC_4(*VAR_4, VAR_5, VAR_6);

 for (VAR_10 = 0;; VAR_10++)
 {
  struct stat VAR_11;

  FUNC_0();

  if (VAR_10 == 0)
   FUNC_5(VAR_9, VAR_2, "%s",
      VAR_8);
  else
   FUNC_5(VAR_9, VAR_2, "%s.%u",
      VAR_8, VAR_10);

  if (FUNC_6(VAR_9, &VAR_11) < 0)
  {
   if (VAR_3 == VAR_0)
    break;
   else
    FUNC_1(VAR_1,
      (FUNC_2(),
       FUNC_3("could not stat file \"%s\": %m", VAR_9)));
  }
  VAR_7 += VAR_11.st_size;
 }

 return VAR_7;
}
