
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_5__ {scalar_t__ tdtypeid; scalar_t__ tdtypmod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

TupleDesc
FUNC_1(TupleDesc VAR_1)
{
 if (VAR_1->tdtypeid == VAR_0 &&
  VAR_1->tdtypmod < 0)
  FUNC_0(VAR_1);

 return VAR_1;
}
