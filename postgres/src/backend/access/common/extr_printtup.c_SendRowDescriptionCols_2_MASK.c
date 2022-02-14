
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int attlen; int attname; int atttypmod; int atttypid; } ;
struct TYPE_6__ {int natts; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_0, TupleDesc VAR_1, List *VAR_2, int16 *VAR_3)
{
 int VAR_4 = VAR_1->natts;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
 {
  Form_pg_attribute VAR_6 = FUNC_1(VAR_1, VAR_5);
  Oid VAR_7 = VAR_6->atttypid;
  int32 VAR_8 = VAR_6->atttypmod;


  VAR_7 = FUNC_2(VAR_7, &VAR_8);

  FUNC_5(VAR_0, FUNC_0(VAR_6->attname));

  FUNC_4(VAR_0, VAR_7);
  FUNC_3(VAR_0, VAR_6->attlen);
  FUNC_4(VAR_0, VAR_8);

 }
}
