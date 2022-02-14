
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int be_key; int be_pid; int raddr; } ;
struct TYPE_6__ {scalar_t__ sock; int be_key; int be_pid; int raddr; } ;
typedef int SockAddr ;
typedef TYPE_1__ PGconn ;
typedef TYPE_2__ PGcancel ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

PGcancel *
FUNC_2(PGconn *VAR_1)
{
 PGcancel *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 if (VAR_1->sock == VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(sizeof(PGcancel));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_2->raddr, &VAR_1->raddr, sizeof(SockAddr));
 VAR_2->be_pid = VAR_1->be_pid;
 VAR_2->be_key = VAR_1->be_key;

 return VAR_2;
}
