
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_9__ {int attlen; } ;
struct TYPE_8__ {TYPE_1__* rd_att; } ;
struct TYPE_7__ {int natts; } ;
typedef TYPE_2__* Relation ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

void
FUNC_4(Relation VAR_0, Datum *VAR_1, bool *VAR_2,
       bool VAR_3)
{
 TupleDesc VAR_4 = VAR_0->rd_att;
 int VAR_5 = VAR_4->natts;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  if (FUNC_1(VAR_4, VAR_6)->attlen == -1)
  {
   Datum VAR_7 = VAR_1[VAR_6];

   if (VAR_2[VAR_6])
    continue;
   else if (FUNC_2(FUNC_0(VAR_7)))
    FUNC_3(VAR_0, VAR_7, VAR_3);
  }
 }
}
