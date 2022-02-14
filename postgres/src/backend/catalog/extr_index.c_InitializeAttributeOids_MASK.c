
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_2__ {int attrelid; } ;
typedef int Relation ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(Relation VAR_0,
      int VAR_1,
      Oid VAR_2)
{
 TupleDesc VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 1)
  FUNC_1(VAR_3, VAR_4)->attrelid = VAR_2;
}
