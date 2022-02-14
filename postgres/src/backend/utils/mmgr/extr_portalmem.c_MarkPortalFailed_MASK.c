
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int (* cleanup ) (TYPE_1__*) ;} ;
typedef TYPE_1__* Portal ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int (*) (TYPE_1__*)) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(Portal VAR_2)
{

 FUNC_0(VAR_2->status != VAR_0);
 VAR_2->status = VAR_1;
 if (FUNC_1(VAR_2->cleanup))
 {
  VAR_2->cleanup(VAR_2);
  VAR_2->cleanup = ((void*)0);
 }
}
