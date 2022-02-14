
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {scalar_t__ tdrefcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(TupleDesc VAR_1)
{
 FUNC_0(VAR_1->tdrefcount >= 0);

 FUNC_1(VAR_0);
 VAR_1->tdrefcount++;
 FUNC_2(VAR_0, VAR_1);
}
