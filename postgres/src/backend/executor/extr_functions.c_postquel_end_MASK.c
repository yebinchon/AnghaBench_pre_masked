
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* qd; int status; } ;
typedef TYPE_1__ execution_state ;
struct TYPE_9__ {scalar_t__ operation; TYPE_2__* dest; } ;
struct TYPE_8__ {int (* rDestroy ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(execution_state *VAR_2)
{

 VAR_2->status = VAR_1;


 if (VAR_2->qd->operation != VAR_0)
 {
  FUNC_1(VAR_2->qd);
  FUNC_0(VAR_2->qd);
 }

 VAR_2->qd->dest->rDestroy(VAR_2->qd->dest);

 FUNC_2(VAR_2->qd);
 VAR_2->qd = ((void*)0);
}
