
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int pgsocket ;
typedef int fd_set ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_8(PGconn *VAR_3, long VAR_4, pgsocket VAR_5)
{
 int VAR_6;
 fd_set VAR_7;
 int VAR_8;
 int VAR_9;
 struct timeval VAR_10;
 struct timeval *VAR_11;

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 < 0)
 {
  FUNC_6("invalid socket: %s", FUNC_4(VAR_3));
  return -1;
 }

 FUNC_2(&VAR_7);
 FUNC_1(VAR_8, &VAR_7);
 VAR_9 = VAR_8;
 if (VAR_5 != VAR_1)
 {
  FUNC_1(VAR_5, &VAR_7);
  VAR_9 = FUNC_3(VAR_9, VAR_5);
 }

 if (VAR_4 < 0)
  VAR_11 = ((void*)0);
 else
 {
  VAR_10.tv_sec = VAR_4 / 1000L;
  VAR_10.tv_usec = (VAR_4 % 1000L) * 1000L;
  VAR_11 = &VAR_10;
 }

 VAR_6 = FUNC_7(VAR_9 + 1, &VAR_7, ((void*)0), ((void*)0), VAR_11);

 if (VAR_6 < 0)
 {
  if (VAR_2 == VAR_0)
   return 0;
  FUNC_6("select() failed: %m");
  return -1;
 }
 if (VAR_6 > 0 && FUNC_0(VAR_8, &VAR_7))
  return 1;

 return 0;
}
