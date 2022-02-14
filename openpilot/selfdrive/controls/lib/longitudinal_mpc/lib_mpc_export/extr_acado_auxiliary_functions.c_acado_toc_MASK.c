
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int real_t ;
struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_1__ tic; TYPE_3__ toc; } ;
typedef TYPE_2__ acado_timer ;


 int FUNC_0 (TYPE_3__*,int ) ;

real_t FUNC_1( acado_timer* VAR_0 )
{
 struct timeval VAR_1;

 FUNC_0(&VAR_0->toc, 0);

 if ((VAR_0->toc.tv_usec - VAR_0->tic.tv_usec) < 0)
 {
  VAR_1.tv_sec = VAR_0->toc.tv_sec - VAR_0->tic.tv_sec - 1;
  VAR_1.tv_usec = 1000000 + VAR_0->toc.tv_usec - VAR_0->tic.tv_usec;
 }
 else
 {
  VAR_1.tv_sec = VAR_0->toc.tv_sec - VAR_0->tic.tv_sec;
  VAR_1.tv_usec = VAR_0->toc.tv_usec - VAR_0->tic.tv_usec;
 }

 return (real_t)VAR_1.tv_sec + (real_t)VAR_1.tv_usec / 1e6;
}
