
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ino; } ;
typedef scalar_t__ PGSemaphore ;
typedef int IpcSemaphoreId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;

void
FUNC_9(int VAR_13)
{
 struct stat VAR_14;







 if (FUNC_8(VAR_0, &VAR_14) < 0)
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not stat data directory \"%s\": %m",
      VAR_0)));






 VAR_12 = (PGSemaphore)
  FUNC_1(FUNC_0(VAR_13));
 VAR_11 = 0;
 VAR_6 = VAR_13;

 VAR_5 = (VAR_13 + VAR_4 - 1) / VAR_4;
 VAR_7 = (IpcSemaphoreId *)
  FUNC_6(VAR_5 * sizeof(IpcSemaphoreId));
 if (VAR_7 == ((void*)0))
  FUNC_2(VAR_2, "out of memory");
 VAR_10 = 0;
 VAR_8 = VAR_14.st_ino;
 VAR_9 = VAR_4;

 FUNC_7(VAR_3, 0);
}
