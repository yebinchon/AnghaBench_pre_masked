
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ assoc_context; void* internalquery; void* constraint_name; void* datatype_name; void* column_name; void* table_name; void* schema_name; void* backtrace; void* context; void* hint; void* detail_log; void* detail; void* message; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (void*) ;

ErrorData *
FUNC_5(void)
{
 ErrorData *VAR_4 = &VAR_2[VAR_3];
 ErrorData *VAR_5;





 FUNC_1();

 FUNC_0(VAR_0 != VAR_1);


 VAR_5 = (ErrorData *) FUNC_3(sizeof(ErrorData));
 FUNC_2(VAR_5, VAR_4, sizeof(ErrorData));


 if (VAR_5->message)
  VAR_5->message = FUNC_4(VAR_5->message);
 if (VAR_5->detail)
  VAR_5->detail = FUNC_4(VAR_5->detail);
 if (VAR_5->detail_log)
  VAR_5->detail_log = FUNC_4(VAR_5->detail_log);
 if (VAR_5->hint)
  VAR_5->hint = FUNC_4(VAR_5->hint);
 if (VAR_5->context)
  VAR_5->context = FUNC_4(VAR_5->context);
 if (VAR_5->backtrace)
  VAR_5->backtrace = FUNC_4(VAR_5->backtrace);
 if (VAR_5->schema_name)
  VAR_5->schema_name = FUNC_4(VAR_5->schema_name);
 if (VAR_5->table_name)
  VAR_5->table_name = FUNC_4(VAR_5->table_name);
 if (VAR_5->column_name)
  VAR_5->column_name = FUNC_4(VAR_5->column_name);
 if (VAR_5->datatype_name)
  VAR_5->datatype_name = FUNC_4(VAR_5->datatype_name);
 if (VAR_5->constraint_name)
  VAR_5->constraint_name = FUNC_4(VAR_5->constraint_name);
 if (VAR_5->internalquery)
  VAR_5->internalquery = FUNC_4(VAR_5->internalquery);


 VAR_5->assoc_context = VAR_0;

 return VAR_5;
}
