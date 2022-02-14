
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* internalquery; struct TYPE_4__* constraint_name; struct TYPE_4__* datatype_name; struct TYPE_4__* column_name; struct TYPE_4__* table_name; struct TYPE_4__* schema_name; struct TYPE_4__* backtrace; struct TYPE_4__* context; struct TYPE_4__* hint; struct TYPE_4__* detail_log; struct TYPE_4__* detail; struct TYPE_4__* message; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ErrorData *VAR_0)
{
 if (VAR_0->message)
  FUNC_0(VAR_0->message);
 if (VAR_0->detail)
  FUNC_0(VAR_0->detail);
 if (VAR_0->detail_log)
  FUNC_0(VAR_0->detail_log);
 if (VAR_0->hint)
  FUNC_0(VAR_0->hint);
 if (VAR_0->context)
  FUNC_0(VAR_0->context);
 if (VAR_0->backtrace)
  FUNC_0(VAR_0->backtrace);
 if (VAR_0->schema_name)
  FUNC_0(VAR_0->schema_name);
 if (VAR_0->table_name)
  FUNC_0(VAR_0->table_name);
 if (VAR_0->column_name)
  FUNC_0(VAR_0->column_name);
 if (VAR_0->datatype_name)
  FUNC_0(VAR_0->datatype_name);
 if (VAR_0->constraint_name)
  FUNC_0(VAR_0->constraint_name);
 if (VAR_0->internalquery)
  FUNC_0(VAR_0->internalquery);
 FUNC_0(VAR_0);
}
