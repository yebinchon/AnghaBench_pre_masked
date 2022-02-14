
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int dummy; } ;
struct epoll_event {int dummy; } ;
struct TYPE_3__ {int nevents_space; int exit_on_postmaster_death; scalar_t__ epoll_fd; int * handles; int * latch; struct pollfd* pollfds; struct epoll_event* epoll_ret_events; int * events; } ;
typedef TYPE_1__ WaitEventSet ;
typedef int WaitEvent ;
typedef int Size ;
typedef int MemoryContext ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int * VAR_4 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int VAR_5 ;

WaitEventSet *
FUNC_7(MemoryContext VAR_6, int VAR_7)
{
 WaitEventSet *VAR_8;
 char *VAR_9;
 Size VAR_10 = 0;







 VAR_10 += FUNC_0(sizeof(WaitEventSet));
 VAR_10 += FUNC_0(sizeof(WaitEvent) * VAR_7);
 VAR_9 = (char *) FUNC_1(VAR_6, VAR_10);

 VAR_8 = (WaitEventSet *) VAR_9;
 VAR_9 += FUNC_0(sizeof(WaitEventSet));

 VAR_8->events = (WaitEvent *) VAR_9;
 VAR_9 += FUNC_0(sizeof(WaitEvent) * VAR_7);
 VAR_8->latch = ((void*)0);
 VAR_8->nevents_space = VAR_7;
 VAR_8->exit_on_postmaster_death = 0;
 return VAR_8;
}
