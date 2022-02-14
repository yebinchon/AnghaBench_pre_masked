
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sqlerrcode; void* internalquery; int internalpos; int cursorpos; void* constraint_name; void* datatype_name; void* column_name; void* table_name; void* schema_name; void* backtrace; void* context; void* hint; void* detail_log; void* detail; void* message; int assoc_context; int funcname; int lineno; int filename; int elevel; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 void* FUNC_3 (void*) ;
 int VAR_2 ;

void
FUNC_4(ErrorData *VAR_3)
{
 ErrorData *VAR_4;
 MemoryContext VAR_5;

 if (!FUNC_2(VAR_3->elevel, VAR_3->filename, VAR_3->lineno,
      VAR_3->funcname, ((void*)0)))
  return;

 VAR_4 = &VAR_0[VAR_1];
 VAR_2++;
 VAR_5 = FUNC_0(VAR_4->assoc_context);


 if (VAR_3->sqlerrcode != 0)
  VAR_4->sqlerrcode = VAR_3->sqlerrcode;
 if (VAR_3->message)
  VAR_4->message = FUNC_3(VAR_3->message);
 if (VAR_3->detail)
  VAR_4->detail = FUNC_3(VAR_3->detail);
 if (VAR_3->detail_log)
  VAR_4->detail_log = FUNC_3(VAR_3->detail_log);
 if (VAR_3->hint)
  VAR_4->hint = FUNC_3(VAR_3->hint);
 if (VAR_3->context)
  VAR_4->context = FUNC_3(VAR_3->context);
 if (VAR_3->backtrace)
  VAR_4->backtrace = FUNC_3(VAR_3->backtrace);

 if (VAR_3->schema_name)
  VAR_4->schema_name = FUNC_3(VAR_3->schema_name);
 if (VAR_3->table_name)
  VAR_4->table_name = FUNC_3(VAR_3->table_name);
 if (VAR_3->column_name)
  VAR_4->column_name = FUNC_3(VAR_3->column_name);
 if (VAR_3->datatype_name)
  VAR_4->datatype_name = FUNC_3(VAR_3->datatype_name);
 if (VAR_3->constraint_name)
  VAR_4->constraint_name = FUNC_3(VAR_3->constraint_name);
 VAR_4->cursorpos = VAR_3->cursorpos;
 VAR_4->internalpos = VAR_3->internalpos;
 if (VAR_3->internalquery)
  VAR_4->internalquery = FUNC_3(VAR_3->internalquery);

 FUNC_0(VAR_5);
 VAR_2--;


 FUNC_1(0);
}
