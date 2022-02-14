
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* funcname; void* lineno; void* filename; void* constraint_name; void* datatype_name; void* column_name; void* table_name; void* schema_name; void* context; void* internalquery; void* internalpos; void* cursorpos; void* hint; void* detail; void* message; int sqlerrcode; void* elevel; int assoc_context; } ;
typedef int StringInfo ;
typedef TYPE_1__ ErrorData ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char const,char const,char const,char const,char const) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (void*,char*,...) ;
 void* FUNC_3 (char const*) ;
 char FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 void* FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;

void
FUNC_10(StringInfo VAR_9, ErrorData *VAR_10)
{

 FUNC_1(VAR_10, 0, sizeof(ErrorData));
 VAR_10->elevel = VAR_2;
 VAR_10->assoc_context = VAR_0;


 for (;;)
 {
  char VAR_11 = FUNC_4(VAR_9);
  const char *VAR_12;

  if (VAR_11 == '\0')
  {
   FUNC_5(VAR_9);
   break;
  }
  VAR_12 = FUNC_6(VAR_9);

  switch (VAR_11)
  {
   case 135:

    break;
   case 134:
    if (FUNC_8(VAR_12, "DEBUG") == 0)
    {





     VAR_10->elevel = VAR_1;
    }
    else if (FUNC_8(VAR_12, "LOG") == 0)
    {




     VAR_10->elevel = VAR_5;
    }
    else if (FUNC_8(VAR_12, "INFO") == 0)
     VAR_10->elevel = VAR_4;
    else if (FUNC_8(VAR_12, "NOTICE") == 0)
     VAR_10->elevel = VAR_6;
    else if (FUNC_8(VAR_12, "WARNING") == 0)
     VAR_10->elevel = VAR_8;
    else if (FUNC_8(VAR_12, "ERROR") == 0)
     VAR_10->elevel = VAR_2;
    else if (FUNC_8(VAR_12, "FATAL") == 0)
     VAR_10->elevel = VAR_3;
    else if (FUNC_8(VAR_12, "PANIC") == 0)
     VAR_10->elevel = VAR_7;
    else
     FUNC_2(VAR_2, "unrecognized error severity: \"%s\"", VAR_12);
    break;
   case 130:
    if (FUNC_9(VAR_12) != 5)
     FUNC_2(VAR_2, "invalid SQLSTATE: \"%s\"", VAR_12);
    VAR_10->sqlerrcode = FUNC_0(VAR_12[0], VAR_12[1], VAR_12[2],
              VAR_12[3], VAR_12[4]);
    break;
   case 137:
    VAR_10->message = FUNC_7(VAR_12);
    break;
   case 139:
    VAR_10->detail = FUNC_7(VAR_12);
    break;
   case 138:
    VAR_10->hint = FUNC_7(VAR_12);
    break;
   case 129:
    VAR_10->cursorpos = FUNC_3(VAR_12);
    break;
   case 141:
    VAR_10->internalpos = FUNC_3(VAR_12);
    break;
   case 140:
    VAR_10->internalquery = FUNC_7(VAR_12);
    break;
   case 143:
    VAR_10->context = FUNC_7(VAR_12);
    break;
   case 136:
    VAR_10->schema_name = FUNC_7(VAR_12);
    break;
   case 128:
    VAR_10->table_name = FUNC_7(VAR_12);
    break;
   case 145:
    VAR_10->column_name = FUNC_7(VAR_12);
    break;
   case 142:
    VAR_10->datatype_name = FUNC_7(VAR_12);
    break;
   case 144:
    VAR_10->constraint_name = FUNC_7(VAR_12);
    break;
   case 133:
    VAR_10->filename = FUNC_7(VAR_12);
    break;
   case 131:
    VAR_10->lineno = FUNC_3(VAR_12);
    break;
   case 132:
    VAR_10->funcname = FUNC_7(VAR_12);
    break;
   default:
    FUNC_2(VAR_2, "unrecognized error field code: %d", (int) VAR_11);
    break;
  }
 }
}
