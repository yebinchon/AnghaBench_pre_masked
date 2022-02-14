
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int reltype; } ;
struct TYPE_5__ {int natts; } ;
typedef int Relation ;
typedef int Node ;
typedef int List ;
typedef int AttrNumber ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int,int ,int *,int ,int ,int*) ;

List *
FUNC_4(List *VAR_1, int VAR_2,
      Relation VAR_3, Relation VAR_4,
      bool *VAR_5)
{
 bool VAR_6 = 0;

 if (VAR_1 != VAR_0)
 {
  AttrNumber *VAR_7;

  VAR_7 = FUNC_2(FUNC_0(VAR_3),
             FUNC_0(VAR_4));
  VAR_1 = (List *) FUNC_3((Node *) VAR_1,
           VAR_2, 0,
           VAR_7,
           FUNC_0(VAR_4)->natts,
           FUNC_1(VAR_3)->reltype,
           &VAR_6);
 }

 if (VAR_5)
  *VAR_5 = VAR_6;

 return VAR_1;
}
