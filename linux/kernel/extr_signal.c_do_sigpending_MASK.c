
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_6__ {int signal; } ;
struct TYPE_10__ {int blocked; TYPE_4__* sighand; TYPE_3__* signal; TYPE_1__ pending; } ;
struct TYPE_9__ {int siglock; } ;
struct TYPE_7__ {int signal; } ;
struct TYPE_8__ {TYPE_2__ shared_pending; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(sigset_t *VAR_1)
{
 FUNC_2(&VAR_0->sighand->siglock);
 FUNC_1(VAR_1, &VAR_0->pending.signal,
    &VAR_0->signal->shared_pending.signal);
 FUNC_3(&VAR_0->sighand->siglock);


 FUNC_0(VAR_1, &VAR_0->blocked, VAR_1);
}
