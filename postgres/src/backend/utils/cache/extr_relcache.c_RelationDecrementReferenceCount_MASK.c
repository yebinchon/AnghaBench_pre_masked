
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rd_refcnt; } ;
typedef TYPE_1__* Relation ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(Relation VAR_1)
{
 FUNC_0(VAR_1->rd_refcnt > 0);
 VAR_1->rd_refcnt -= 1;
 if (!FUNC_1())
  FUNC_2(VAR_0, VAR_1);
}
