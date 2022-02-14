
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ino; } ;
typedef int sem_t ;
typedef scalar_t__ PGSemaphore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;

void
FUNC_9(int VAR_9)
{
 struct stat VAR_10;







 if (FUNC_8(VAR_0, &VAR_10) < 0)
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not stat data directory \"%s\": %m",
      VAR_0)));
 VAR_8 = (PGSemaphore)
  FUNC_1(FUNC_0(VAR_9));


 VAR_7 = 0;
 VAR_4 = VAR_9;
 VAR_6 = VAR_10.st_ino;

 FUNC_7(VAR_3, 0);
}
