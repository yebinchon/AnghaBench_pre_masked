
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constraint_name; int assoc_context; int datatype_name; int column_name; int table_name; int schema_name; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int VAR_0 ;





 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int *,char const*) ;

int
FUNC_3(int VAR_3, const char *VAR_4)
{
 ErrorData *VAR_5 = &VAR_1[VAR_2];


 FUNC_0();

 switch (VAR_3)
 {
  case 129:
   FUNC_2(VAR_5->assoc_context, &VAR_5->schema_name, VAR_4);
   break;
  case 128:
   FUNC_2(VAR_5->assoc_context, &VAR_5->table_name, VAR_4);
   break;
  case 132:
   FUNC_2(VAR_5->assoc_context, &VAR_5->column_name, VAR_4);
   break;
  case 130:
   FUNC_2(VAR_5->assoc_context, &VAR_5->datatype_name, VAR_4);
   break;
  case 131:
   FUNC_2(VAR_5->assoc_context, &VAR_5->constraint_name, VAR_4);
   break;
  default:
   FUNC_1(VAR_0, "unsupported ErrorData field id: %d", VAR_3);
   break;
 }

 return 0;
}
