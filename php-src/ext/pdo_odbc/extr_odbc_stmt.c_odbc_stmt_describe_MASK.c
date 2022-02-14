
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pdo_column_data {int maxlen; int param_type; int name; } ;
struct TYPE_7__ {struct pdo_column_data* columns; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {int going_long; TYPE_1__* cols; int stmt; } ;
typedef TYPE_3__ pdo_odbc_stmt ;
struct TYPE_6__ {scalar_t__ coltype; int datalen; int is_long; void* data; int fetched_len; scalar_t__ is_unicode; int colname; } ;
typedef int SWORD ;
typedef int SQLULEN ;
typedef int SQLLEN ;
typedef scalar_t__ RETCODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ,void*,int,int *) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int *,int*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int *,scalar_t__*,int*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(pdo_stmt_t *VAR_12, int VAR_13)
{
 pdo_odbc_stmt *VAR_14 = (pdo_odbc_stmt*)VAR_12->driver_data;
 struct pdo_column_data *VAR_15 = &VAR_12->columns[VAR_13];
 RETCODE VAR_16;
 SWORD VAR_17;
 SQLULEN VAR_18;
 SQLLEN VAR_19;

 VAR_16 = FUNC_2(VAR_14->stmt, VAR_13+1, VAR_14->cols[VAR_13].colname,
   sizeof(VAR_14->cols[VAR_13].colname)-1, &VAR_17,
   &VAR_14->cols[VAR_13].coltype, &VAR_18, ((void*)0), ((void*)0));





 if (0 == VAR_18 &&
  (VAR_14->cols[VAR_13].coltype == VAR_9 ||
   VAR_14->cols[VAR_13].coltype == VAR_5 ||






   VAR_14->cols[VAR_13].coltype == VAR_8 ||
   VAR_14->cols[VAR_13].coltype == VAR_4)) {
    VAR_14->going_long = 1;
 }

 if (VAR_16 != VAR_6) {
  FUNC_5("SQLDescribeCol");
  if (VAR_16 != VAR_7) {
   return 0;
  }
 }

 VAR_16 = FUNC_1(VAR_14->stmt, VAR_13+1,
   VAR_3,
   ((void*)0), 0, ((void*)0), &VAR_19);

 if (VAR_16 != VAR_6) {
  FUNC_5("SQLColAttribute");
  if (VAR_16 != VAR_7) {
   return 0;
  }
 }
 VAR_18 = VAR_19;

 VAR_15->maxlen = VAR_14->cols[VAR_13].datalen = VAR_18;
 VAR_15->name = FUNC_6(VAR_14->cols[VAR_13].colname, VAR_17, 0);
 VAR_14->cols[VAR_13].is_unicode = FUNC_4(VAR_14, VAR_14->cols[VAR_13].coltype);


 VAR_15->param_type = VAR_0;




 if (VAR_18 < 256 && !VAR_14->going_long) {
  VAR_14->cols[VAR_13].data = FUNC_3(VAR_18+1);
  VAR_14->cols[VAR_13].is_long = 0;

  VAR_16 = FUNC_0(VAR_14->stmt, VAR_13+1,
   VAR_14->cols[VAR_13].is_unicode ? VAR_1 : VAR_2,
   VAR_14->cols[VAR_13].data,
    VAR_14->cols[VAR_13].datalen+1, &VAR_14->cols[VAR_13].fetched_len);

  if (VAR_16 != VAR_6) {
   FUNC_5("SQLBindCol");
   return 0;
  }
 } else {


  VAR_14->cols[VAR_13].data = FUNC_3(256);
  VAR_14->going_long = 1;
  VAR_14->cols[VAR_13].is_long = 1;
 }

 return 1;
}
