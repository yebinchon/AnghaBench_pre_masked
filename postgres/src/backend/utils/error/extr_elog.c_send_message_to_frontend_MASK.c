
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_13__ {scalar_t__ elevel; int sqlerrcode; char* message; char* detail; char* hint; char* context; char* schema_name; char* table_name; char* column_name; char* datatype_name; char* constraint_name; int cursorpos; int internalpos; char* internalquery; char* filename; int lineno; char* funcname; scalar_t__ show_funcname; } ;
struct TYPE_12__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ErrorData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,char) ;
 int FUNC_14 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_15(ErrorData *VAR_20)
{
 StringInfoData VAR_21;


 FUNC_10(&VAR_21, (VAR_20->elevel < VAR_0) ? 'N' : 'E');

 if (FUNC_1(VAR_1) >= 3)
 {

  const char *VAR_22;
  char VAR_23[12];
  int VAR_24;
  int VAR_25;

  VAR_22 = FUNC_7(VAR_20->elevel);
  FUNC_13(&VAR_21, VAR_12);
  FUNC_6(&VAR_21, FUNC_2(VAR_22));
  FUNC_13(&VAR_21, VAR_13);
  FUNC_6(&VAR_21, VAR_22);


  VAR_24 = VAR_20->sqlerrcode;
  for (VAR_25 = 0; VAR_25 < 5; VAR_25++)
  {
   VAR_23[VAR_25] = FUNC_0(VAR_24);
   VAR_24 >>= 6;
  }
  VAR_23[VAR_25] = '\0';

  FUNC_13(&VAR_21, VAR_17);
  FUNC_6(&VAR_21, VAR_23);


  FUNC_13(&VAR_21, VAR_10);
  if (VAR_20->message)
   FUNC_6(&VAR_21, VAR_20->message);
  else
   FUNC_6(&VAR_21, FUNC_2("missing error text"));

  if (VAR_20->detail)
  {
   FUNC_13(&VAR_21, VAR_8);
   FUNC_6(&VAR_21, VAR_20->detail);
  }



  if (VAR_20->hint)
  {
   FUNC_13(&VAR_21, VAR_9);
   FUNC_6(&VAR_21, VAR_20->hint);
  }

  if (VAR_20->context)
  {
   FUNC_13(&VAR_21, VAR_4);
   FUNC_6(&VAR_21, VAR_20->context);
  }

  if (VAR_20->schema_name)
  {
   FUNC_13(&VAR_21, VAR_11);
   FUNC_6(&VAR_21, VAR_20->schema_name);
  }

  if (VAR_20->table_name)
  {
   FUNC_13(&VAR_21, VAR_19);
   FUNC_6(&VAR_21, VAR_20->table_name);
  }

  if (VAR_20->column_name)
  {
   FUNC_13(&VAR_21, VAR_2);
   FUNC_6(&VAR_21, VAR_20->column_name);
  }

  if (VAR_20->datatype_name)
  {
   FUNC_13(&VAR_21, VAR_5);
   FUNC_6(&VAR_21, VAR_20->datatype_name);
  }

  if (VAR_20->constraint_name)
  {
   FUNC_13(&VAR_21, VAR_3);
   FUNC_6(&VAR_21, VAR_20->constraint_name);
  }

  if (VAR_20->cursorpos > 0)
  {
   FUNC_14(VAR_23, sizeof(VAR_23), "%d", VAR_20->cursorpos);
   FUNC_13(&VAR_21, VAR_18);
   FUNC_6(&VAR_21, VAR_23);
  }

  if (VAR_20->internalpos > 0)
  {
   FUNC_14(VAR_23, sizeof(VAR_23), "%d", VAR_20->internalpos);
   FUNC_13(&VAR_21, VAR_6);
   FUNC_6(&VAR_21, VAR_23);
  }

  if (VAR_20->internalquery)
  {
   FUNC_13(&VAR_21, VAR_7);
   FUNC_6(&VAR_21, VAR_20->internalquery);
  }

  if (VAR_20->filename)
  {
   FUNC_13(&VAR_21, VAR_14);
   FUNC_6(&VAR_21, VAR_20->filename);
  }

  if (VAR_20->lineno > 0)
  {
   FUNC_14(VAR_23, sizeof(VAR_23), "%d", VAR_20->lineno);
   FUNC_13(&VAR_21, VAR_16);
   FUNC_6(&VAR_21, VAR_23);
  }

  if (VAR_20->funcname)
  {
   FUNC_13(&VAR_21, VAR_15);
   FUNC_6(&VAR_21, VAR_20->funcname);
  }

  FUNC_13(&VAR_21, '\0');
 }
 else
 {

  StringInfoData VAR_26;

  FUNC_8(&VAR_26);

  FUNC_3(&VAR_26, "%s:  ", FUNC_2(FUNC_7(VAR_20->elevel)));

  if (VAR_20->show_funcname && VAR_20->funcname)
   FUNC_3(&VAR_26, "%s: ", VAR_20->funcname);

  if (VAR_20->message)
   FUNC_5(&VAR_26, VAR_20->message);
  else
   FUNC_5(&VAR_26, FUNC_2("missing error text"));

  if (VAR_20->cursorpos > 0)
   FUNC_3(&VAR_26, FUNC_2(" at character %d"),
        VAR_20->cursorpos);
  else if (VAR_20->internalpos > 0)
   FUNC_3(&VAR_26, FUNC_2(" at character %d"),
        VAR_20->internalpos);

  FUNC_4(&VAR_26, '\n');

  FUNC_6(&VAR_21, VAR_26.data);

  FUNC_9(VAR_26.data);
 }

 FUNC_11(&VAR_21);
 FUNC_12();
}
