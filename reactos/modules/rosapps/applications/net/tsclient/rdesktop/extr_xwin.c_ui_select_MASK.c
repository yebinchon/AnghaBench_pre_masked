
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_9__ {int x_socket; scalar_t__ seamless_active; } ;
struct TYPE_10__ {int dsp_fd; scalar_t__ dsp_busy; TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,int*,int *,int *,struct timeval*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int *,int *,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,struct timeval*) ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;

int
FUNC_12(RDPCLIENT * VAR_3, int VAR_4)
{
 int VAR_5;
 fd_set VAR_6, VAR_7;
 struct timeval VAR_8;
 BOOL VAR_9 = VAR_0;

 while (VAR_1)
 {
  VAR_5 = (VAR_4 > VAR_3->xwin.x_socket) ? VAR_4 : VAR_3->xwin.x_socket;

  if (!FUNC_11(VAR_3))

   return 0;

  if (VAR_3->xwin.seamless_active)
   FUNC_9(VAR_3);

  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
  FUNC_1(VAR_4, &VAR_6);
  FUNC_1(VAR_3->xwin.x_socket, &VAR_6);
  VAR_8.tv_sec = 60;
  VAR_8.tv_usec = 0;


  FUNC_4(VAR_3, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
  FUNC_6(VAR_3, &VAR_8);

  VAR_5++;

  switch (FUNC_7(VAR_5, &VAR_6, &VAR_7, ((void*)0), &VAR_8))
  {
   case -1:
    FUNC_3("select: %s\n", FUNC_8(VAR_2));

   case 0:

    if (VAR_9)
     FUNC_5(VAR_3, &VAR_6, &VAR_7, (BOOL) VAR_1);
    continue;
  }

  FUNC_5(VAR_3, &VAR_6, &VAR_7, (BOOL) VAR_0);

  if (FUNC_0(VAR_4, &VAR_6))
   return 1;





 }
}
