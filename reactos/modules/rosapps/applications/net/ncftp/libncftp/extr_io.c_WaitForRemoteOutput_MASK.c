
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int xferTimeout; int dataSocket; int cancelXfer; int stalled; int dataTimedOut; } ;
typedef TYPE_1__* FTPCIPtr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__* const) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int *,int,int,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(const FTPCIPtr VAR_4)
{
 fd_set VAR_5, VAR_6;
 struct timeval VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = VAR_4->xferTimeout;
 if (VAR_11 < 1)
  return (1);

 VAR_9 = VAR_4->dataSocket;
 if (VAR_9 < 0)
  return (1);

 VAR_12 = VAR_4->cancelXfer;
 VAR_10 = 0;
 VAR_4->stalled = 0;

 while ((VAR_11 <= 0) || (VAR_10 < VAR_11)) {
  if ((VAR_4->cancelXfer != 0) && (VAR_12 == 0)) {

   return (1);
  }
  FUNC_1(&VAR_5);
  FUNC_0(VAR_9, &VAR_5);
  VAR_6 = VAR_5;
  VAR_7.tv_sec = 1;
  VAR_7.tv_usec = 0;
  VAR_8 = FUNC_6(VAR_9 + 1, ((void*)0), VAR_1 &VAR_5, VAR_1 &VAR_6, &VAR_7);
  if (VAR_8 == 1) {

   VAR_4->stalled = 0;
   return (1);
  } else if (VAR_8 < 0) {
   if (VAR_3 != VAR_0) {
    FUNC_5("select");
    VAR_4->stalled = 0;
    return (1);
   }
  } else {
   VAR_10++;
   VAR_4->stalled = VAR_10;
  }
  FUNC_2(VAR_4);
 }





 (void) FUNC_4(FUNC_3(), VAR_2);


 VAR_4->dataTimedOut = 1;
 return (0);
}
