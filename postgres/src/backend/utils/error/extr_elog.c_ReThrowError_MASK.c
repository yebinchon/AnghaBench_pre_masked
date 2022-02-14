
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ elevel; int assoc_context; void* internalquery; void* constraint_name; void* datatype_name; void* column_name; void* table_name; void* schema_name; void* backtrace; void* context; void* hint; void* detail_log; void* detail; void* message; } ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;
 void* FUNC_6 (void*) ;
 int VAR_6 ;

void
FUNC_7(ErrorData *VAR_7)
{
 ErrorData *VAR_8;

 FUNC_0(VAR_7->elevel == VAR_0);


 VAR_6++;
 FUNC_1(VAR_2);

 if (++VAR_5 >= VAR_1)
 {





  VAR_5 = -1;
  FUNC_3(VAR_3, (FUNC_4("ERRORDATA_STACK_SIZE exceeded")));
 }

 VAR_8 = &VAR_4[VAR_5];
 FUNC_5(VAR_8, VAR_7, sizeof(ErrorData));


 if (VAR_8->message)
  VAR_8->message = FUNC_6(VAR_8->message);
 if (VAR_8->detail)
  VAR_8->detail = FUNC_6(VAR_8->detail);
 if (VAR_8->detail_log)
  VAR_8->detail_log = FUNC_6(VAR_8->detail_log);
 if (VAR_8->hint)
  VAR_8->hint = FUNC_6(VAR_8->hint);
 if (VAR_8->context)
  VAR_8->context = FUNC_6(VAR_8->context);
 if (VAR_8->backtrace)
  VAR_8->backtrace = FUNC_6(VAR_8->backtrace);
 if (VAR_8->schema_name)
  VAR_8->schema_name = FUNC_6(VAR_8->schema_name);
 if (VAR_8->table_name)
  VAR_8->table_name = FUNC_6(VAR_8->table_name);
 if (VAR_8->column_name)
  VAR_8->column_name = FUNC_6(VAR_8->column_name);
 if (VAR_8->datatype_name)
  VAR_8->datatype_name = FUNC_6(VAR_8->datatype_name);
 if (VAR_8->constraint_name)
  VAR_8->constraint_name = FUNC_6(VAR_8->constraint_name);
 if (VAR_8->internalquery)
  VAR_8->internalquery = FUNC_6(VAR_8->internalquery);


 VAR_8->assoc_context = VAR_2;

 VAR_6--;
 FUNC_2();
}
