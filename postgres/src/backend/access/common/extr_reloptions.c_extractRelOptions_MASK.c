
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bytea ;
typedef int amoptions_function ;
typedef int TupleDesc ;
struct TYPE_2__ {int relkind; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int * FUNC_3 (int,int ,int) ;
 int * FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (int ,int) ;
 int * FUNC_6 (int ,int) ;

bytea *
FUNC_7(HeapTuple VAR_1, TupleDesc VAR_2,
      amoptions_function VAR_3)
{
 bytea *VAR_4;
 bool VAR_5;
 Datum VAR_6;
 Form_pg_class VAR_7;

 VAR_6 = FUNC_2(VAR_1,
      VAR_0,
      VAR_2,
      &VAR_5);
 if (VAR_5)
  return ((void*)0);

 VAR_7 = (Form_pg_class) FUNC_1(VAR_1);


 switch (VAR_7->relkind)
 {
  case 130:
  case 129:
  case 133:
   VAR_4 = FUNC_3(VAR_7->relkind, VAR_6, 0);
   break;
  case 131:
   VAR_4 = FUNC_5(VAR_6, 0);
   break;
  case 128:
   VAR_4 = FUNC_6(VAR_6, 0);
   break;
  case 134:
  case 132:
   VAR_4 = FUNC_4(VAR_3, VAR_6, 0);
   break;
  case 135:
   VAR_4 = ((void*)0);
   break;
  default:
   FUNC_0(0);
   VAR_4 = ((void*)0);
   break;
 }

 return VAR_4;
}
