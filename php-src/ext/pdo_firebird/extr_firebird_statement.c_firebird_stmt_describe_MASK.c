
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pdo_column_data {void* param_type; int name; int maxlen; int precision; } ;
struct TYPE_9__ {struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_5__* sqlvar; } ;
struct TYPE_10__ {TYPE_2__* H; TYPE_1__ out_sqlda; } ;
typedef TYPE_4__ pdo_firebird_stmt ;
struct TYPE_11__ {int relname_length; int aliasname_length; int sqltype; int sqlscale; int aliasname; int relname; int sqllen; } ;
typedef TYPE_5__ XSQLVAR ;
struct TYPE_8__ {scalar_t__ fetch_table_names; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;




 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_3, int VAR_4)
{
 pdo_firebird_stmt *VAR_5 = (pdo_firebird_stmt*)VAR_3->driver_data;
 struct pdo_column_data *VAR_6 = &VAR_3->columns[VAR_4];
 XSQLVAR *VAR_7 = &VAR_5->out_sqlda.sqlvar[VAR_4];
 int VAR_8;
 char *VAR_9;

 VAR_8 = (VAR_5->H->fetch_table_names && VAR_7->relname_length)
     ? (VAR_7->aliasname_length + VAR_7->relname_length + 1)
     : (VAR_7->aliasname_length);
 VAR_6->precision = -VAR_7->sqlscale;
 VAR_6->maxlen = VAR_7->sqllen;
 VAR_6->name = FUNC_2(VAR_8, 0);
 VAR_9 = FUNC_0(VAR_6->name);
 if (VAR_8 > VAR_7->aliasname_length) {
  FUNC_1(VAR_9, VAR_7->relname, VAR_7->relname_length);
  VAR_9 += VAR_7->relname_length;
  *VAR_9++ = '.';
 }
 FUNC_1(VAR_9, VAR_7->aliasname, VAR_7->aliasname_length);
 *(VAR_9+VAR_7->aliasname_length) = '\0';

 if (VAR_7->sqlscale < 0) {
  VAR_6->param_type = VAR_2;
 } else {
  switch (VAR_7->sqltype & ~1) {
   case 128:
   case 129:



    VAR_6->param_type = VAR_1;
    break;

   case 131:
    VAR_6->param_type = VAR_0;
    break;

   default:
    VAR_6->param_type = VAR_2;
    break;
  }
 }

 return 1;
}
