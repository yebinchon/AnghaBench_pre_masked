
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_3__ {scalar_t__ internalpos; scalar_t__ lineno; scalar_t__ funcname; scalar_t__ filename; scalar_t__ internalquery; scalar_t__ constraint_name; scalar_t__ datatype_name; scalar_t__ column_name; scalar_t__ table_name; scalar_t__ schema_name; scalar_t__ context; scalar_t__ hint; scalar_t__ detail; scalar_t__ message; int sqlerrcode; } ;
typedef TYPE_1__ ErrorData ;


 char* VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(Tcl_Interp *VAR_3, ErrorData *VAR_4)
{
 Tcl_Obj *VAR_5 = FUNC_2();

 FUNC_0(VAR_3, VAR_5,
        FUNC_3("POSTGRES", -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3(VAR_0, -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3("SQLSTATE", -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3(FUNC_7(VAR_4->sqlerrcode), -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3("condition", -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3(FUNC_6(VAR_4->sqlerrcode), -1));
 FUNC_0(VAR_3, VAR_5,
        FUNC_3("message", -1));
 VAR_1;
 FUNC_0(VAR_3, VAR_5,
        FUNC_3(FUNC_5(VAR_4->message), -1));
 VAR_2;
 if (VAR_4->detail)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("detail", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->detail), -1));
  VAR_2;
 }
 if (VAR_4->hint)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("hint", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->hint), -1));
  VAR_2;
 }
 if (VAR_4->context)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("context", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->context), -1));
  VAR_2;
 }
 if (VAR_4->schema_name)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("schema", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->schema_name), -1));
  VAR_2;
 }
 if (VAR_4->table_name)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("table", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->table_name), -1));
  VAR_2;
 }
 if (VAR_4->column_name)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("column", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->column_name), -1));
  VAR_2;
 }
 if (VAR_4->datatype_name)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("datatype", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->datatype_name), -1));
  VAR_2;
 }
 if (VAR_4->constraint_name)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("constraint", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->constraint_name), -1));
  VAR_2;
 }

 if (VAR_4->internalquery)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("statement", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->internalquery), -1));
  VAR_2;
 }
 if (VAR_4->internalpos > 0)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("cursor_position", -1));
  FUNC_0(VAR_3, VAR_5,
         FUNC_1(VAR_4->internalpos));
 }
 if (VAR_4->filename)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("filename", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->filename), -1));
  VAR_2;
 }
 if (VAR_4->lineno > 0)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("lineno", -1));
  FUNC_0(VAR_3, VAR_5,
         FUNC_1(VAR_4->lineno));
 }
 if (VAR_4->funcname)
 {
  FUNC_0(VAR_3, VAR_5,
         FUNC_3("funcname", -1));
  VAR_1;
  FUNC_0(VAR_3, VAR_5,
         FUNC_3(FUNC_5(VAR_4->funcname), -1));
  VAR_2;
 }

 FUNC_4(VAR_3, VAR_5);
}
