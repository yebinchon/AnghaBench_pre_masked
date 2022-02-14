
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sigev_notify; } ;
struct aiocb {TYPE_1__ aio_sigevent; scalar_t__ aio_reqprio; scalar_t__ aio_nbytes; scalar_t__ aio_buf; scalar_t__ aio_offset; scalar_t__ aio_fildes; } ;


 scalar_t__ FUNC_0 (struct aiocb*) ;

int FUNC_1(void)
{
 struct aiocb VAR_0;

 VAR_0.aio_fildes = 0;
 VAR_0.aio_offset = 0;
 VAR_0.aio_buf = 0;
 VAR_0.aio_nbytes = 0;
 VAR_0.aio_reqprio = 0;
 VAR_0.aio_sigevent.sigev_notify = 1 ;

 return (int)FUNC_0(&VAR_0);
}
