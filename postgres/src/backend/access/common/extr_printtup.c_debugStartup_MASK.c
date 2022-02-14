
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_4__ {int natts; } ;
typedef int DestReceiver ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (unsigned int,int ,int *) ;
 int FUNC_2 (char*) ;

void
FUNC_3(DestReceiver *VAR_0, int VAR_1, TupleDesc VAR_2)
{
 int VAR_3 = VAR_2->natts;
 int VAR_4;




 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  FUNC_1((unsigned) VAR_4 + 1, FUNC_0(VAR_2, VAR_4), ((void*)0));
 FUNC_2("\t----\n");
}
