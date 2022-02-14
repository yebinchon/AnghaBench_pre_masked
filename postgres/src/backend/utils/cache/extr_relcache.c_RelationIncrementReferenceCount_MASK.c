
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rd_refcnt; } ;
typedef TYPE_1__* Relation ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(Relation VAR_1)
{
 FUNC_1(VAR_0);
 VAR_1->rd_refcnt += 1;
 if (!FUNC_0())
  FUNC_2(VAR_0, VAR_1);
}
