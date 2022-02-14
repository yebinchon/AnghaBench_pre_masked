
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unlock; int lock; TYPE_2__* user; } ;
typedef TYPE_1__ fz_locks_context ;
struct TYPE_7__ {TYPE_1__ locks; int * mutexes; } ;
typedef TYPE_2__ MuOfficeLib ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static fz_locks_context *FUNC_2(MuOfficeLib *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0+1; VAR_4++)
  VAR_5 |= FUNC_1(&VAR_3->mutexes[VAR_4]);

 if (VAR_5)
 {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->locks.user = VAR_3;
 VAR_3->locks.lock = VAR_1;
 VAR_3->locks.unlock = VAR_2;

 return &VAR_3->locks;
}
