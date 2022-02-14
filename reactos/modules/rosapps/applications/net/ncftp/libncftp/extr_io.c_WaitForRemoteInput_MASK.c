
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int xferTimeout; int dataSocket; int cancelXfer; int stalled; int dataTimedOut; } ;
typedef TYPE_1__* FTPCIPtr ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__* const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int,int *,int,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(const FTPCIPtr VAR_3)
{
 fd_set VAR_4, VAR_5;
 struct timeval VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = VAR_3->xferTimeout;
 if (VAR_10 < 1)
  return (1);

 VAR_8 = VAR_3->dataSocket;
 if (VAR_8 < 0)
  return (1);

 VAR_11 = VAR_3->cancelXfer;
 VAR_9 = 0;
 VAR_3->stalled = 0;

 while ((VAR_10 <= 0) || (VAR_9 < VAR_10)) {
  if ((VAR_3->cancelXfer != 0) && (VAR_11 == 0)) {

   return (1);
  }
  FUNC_1(&VAR_4);
  FUNC_0(VAR_8, &VAR_4);
  VAR_5 = VAR_4;
  VAR_6.tv_sec = 1;
  VAR_6.tv_usec = 0;
  VAR_7 = FUNC_6(VAR_8 + 1, VAR_1 &VAR_4, ((void*)0), VAR_1 &VAR_5, &VAR_6);
  if (VAR_7 == 1) {

   VAR_3->stalled = 0;
   return (1);
  } else if (VAR_7 < 0) {
   if (VAR_7 != VAR_0) {
    FUNC_5("select");
    VAR_3->stalled = 0;
    return (1);
   }
  } else {
   VAR_9++;
   VAR_3->stalled = VAR_9;
  }
  FUNC_2(VAR_3);
 }





 (void) FUNC_4(FUNC_3(), VAR_2);


 VAR_3->dataTimedOut = 1;
 return (0);
}
