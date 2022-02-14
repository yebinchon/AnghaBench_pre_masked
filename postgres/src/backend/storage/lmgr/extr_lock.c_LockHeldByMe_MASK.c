
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int localtag ;
struct TYPE_5__ {scalar_t__ nLocks; } ;
struct TYPE_4__ {int mode; int lock; } ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;
typedef TYPE_1__ LOCALLOCKTAG ;
typedef TYPE_2__ LOCALLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,void*,int ,int *) ;

bool
FUNC_2(const LOCKTAG *VAR_2, LOCKMODE VAR_3)
{
 LOCALLOCKTAG VAR_4;
 LOCALLOCK *VAR_5;




 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.lock = *VAR_2;
 VAR_4.mode = VAR_3;

 VAR_5 = (LOCALLOCK *) FUNC_1(VAR_1,
            (void *) &VAR_4,
            VAR_0, ((void*)0));

 return (VAR_5 && VAR_5->nLocks > 0);
}
