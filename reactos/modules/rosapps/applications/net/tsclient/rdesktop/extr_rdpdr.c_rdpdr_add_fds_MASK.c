
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct timeval {int tv_sec; int tv_usec; } ;
struct async_iorequest {scalar_t__ fd; int major; int timeout; int itv_timeout; struct async_iorequest* next; int partial_len; } ;
typedef int fd_set ;
struct TYPE_3__ {scalar_t__ min_timeout_fd; struct async_iorequest* iorequest; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;



 int FUNC_1 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,char*,int ) ;

void
FUNC_3(RDPCLIENT * VAR_3, int *VAR_4, fd_set * VAR_5, fd_set * VAR_6, struct timeval *VAR_7, BOOL * VAR_8)
{
 uint32 VAR_9 = 0;
 struct async_iorequest *VAR_10;
 char VAR_11;

 VAR_10 = VAR_3->iorequest;
 while (VAR_10 != ((void*)0))
 {
  if (VAR_10->fd != 0)
  {
   switch (VAR_10->major)
   {
    case 129:





     FUNC_0(VAR_10->fd, VAR_5);
     *VAR_4 = FUNC_1(*VAR_4, VAR_10->fd);


     if (VAR_10->timeout
         && (VAR_9 == 0
      || VAR_10->timeout < VAR_9))
     {

      VAR_9 = VAR_10->timeout;
      VAR_3->min_timeout_fd = VAR_10->fd;
      VAR_7->tv_sec = VAR_9 / 1000;
      VAR_7->tv_usec = (VAR_9 % 1000) * 1000;
      *VAR_8 = VAR_1;
      break;
     }
     if (VAR_10->itv_timeout && VAR_10->partial_len > 0
         && (VAR_9 == 0
      || VAR_10->itv_timeout < VAR_9))
     {

      VAR_9 = VAR_10->itv_timeout;
      VAR_3->min_timeout_fd = VAR_10->fd;
      VAR_7->tv_sec = VAR_9 / 1000;
      VAR_7->tv_usec = (VAR_9 % 1000) * 1000;
      *VAR_8 = VAR_1;
      break;
     }
     break;

    case 128:

     if ((FUNC_2(VAR_10->fd, &VAR_11, 0) != 0) && (VAR_2 == VAR_0))
      break;

     FUNC_0(VAR_10->fd, VAR_6);
     *VAR_4 = FUNC_1(*VAR_4, VAR_10->fd);
     break;

    case 130:
     if (VAR_9 > 5)
      VAR_9 = 5;
     break;

   }

  }

  VAR_10 = VAR_10->next;
 }
}
