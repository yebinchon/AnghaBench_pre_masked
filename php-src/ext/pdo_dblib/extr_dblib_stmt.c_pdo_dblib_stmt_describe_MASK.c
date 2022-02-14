
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pdo_column_data {int param_type; int maxlen; void* name; } ;
struct TYPE_5__ {int column_count; struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {scalar_t__ computed_column_name_count; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_7__ {int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*,int,int ) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_2, int VAR_3)
{
 pdo_dblib_stmt *VAR_4 = (pdo_dblib_stmt*)VAR_2->driver_data;
 pdo_dblib_db_handle *VAR_5 = VAR_4->H;
 struct pdo_column_data *VAR_6;
 char *VAR_7;

 if(VAR_3 >= VAR_2->column_count || VAR_3 < 0) {
  return VAR_0;
 }

 if (VAR_3 == 0) {
  VAR_4->computed_column_name_count = 0;
 }

 VAR_6 = &VAR_2->columns[VAR_3];
 VAR_7 = (char*)FUNC_1(VAR_5->link, VAR_3+1);

 if (VAR_7 && *VAR_7) {
  VAR_6->name = FUNC_4(VAR_7, FUNC_3(VAR_7), 0);
 } else {
  if (VAR_4->computed_column_name_count > 0) {
   char VAR_8[16];
   int VAR_9;

   VAR_9 = FUNC_2(VAR_8, sizeof(VAR_8), "computed%d", VAR_4->computed_column_name_count);
   VAR_6->name = FUNC_4(VAR_8, VAR_9, 0);
  } else {
   VAR_6->name = FUNC_4("computed", FUNC_3("computed"), 0);
  }

  VAR_4->computed_column_name_count++;
 }

 VAR_6->maxlen = FUNC_0(VAR_5->link, VAR_3+1);
 VAR_6->param_type = VAR_1;

 return 1;
}
