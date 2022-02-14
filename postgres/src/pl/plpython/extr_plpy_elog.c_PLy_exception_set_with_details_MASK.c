
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constraint_name; int datatype_name; int column_name; int table_name; int schema_name; int internalquery; int hint; int detail; int sqlerrcode; int message; } ;
typedef int PyObject ;
typedef TYPE_1__ ErrorData ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(PyObject *VAR_1, ErrorData *VAR_2)
{
 PyObject *VAR_3 = ((void*)0);
 PyObject *VAR_4 = ((void*)0);

 VAR_3 = FUNC_2("(s)", VAR_2->message);
 if (!VAR_3)
  goto failure;


 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_4)
  goto failure;

 if (!FUNC_6(VAR_4, "sqlstate",
       FUNC_7(VAR_2->sqlerrcode)))
  goto failure;

 if (!FUNC_6(VAR_4, "detail", VAR_2->detail))
  goto failure;

 if (!FUNC_6(VAR_4, "hint", VAR_2->hint))
  goto failure;

 if (!FUNC_6(VAR_4, "query", VAR_2->internalquery))
  goto failure;

 if (!FUNC_6(VAR_4, "schema_name", VAR_2->schema_name))
  goto failure;

 if (!FUNC_6(VAR_4, "table_name", VAR_2->table_name))
  goto failure;

 if (!FUNC_6(VAR_4, "column_name", VAR_2->column_name))
  goto failure;

 if (!FUNC_6(VAR_4, "datatype_name", VAR_2->datatype_name))
  goto failure;

 if (!FUNC_6(VAR_4, "constraint_name", VAR_2->constraint_name))
  goto failure;

 FUNC_0(VAR_1, VAR_4);

 FUNC_3(VAR_3);
 FUNC_3(VAR_4);

 return;

failure:
 FUNC_4(VAR_3);
 FUNC_4(VAR_4);

 FUNC_5(VAR_0, "could not convert error to Python exception");
}
