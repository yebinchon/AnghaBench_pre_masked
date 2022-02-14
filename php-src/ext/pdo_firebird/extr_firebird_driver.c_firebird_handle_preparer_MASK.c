
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zval ;
typedef int result ;
struct TYPE_14__ {int column_count; int supports_placeholders; int * methods; TYPE_2__* driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_18__ {int sqln; void* version; } ;
struct TYPE_15__ {int sqln; int sqld; char statement_type; struct TYPE_15__* in_sqlda; void* version; TYPE_7__ out_sqlda; int * named_params; void* fetch_buf; int stmt; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_firebird_stmt ;
struct TYPE_16__ {int isc_status; } ;
typedef TYPE_3__ pdo_firebird_db_handle ;
struct TYPE_17__ {scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;
typedef int isc_stmt_handle ;
typedef int info ;
typedef TYPE_2__ XSQLDA ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,char const*,size_t,TYPE_2__*,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int *,void*,TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,int *,void*,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int *,int,int ,int,char*) ;

 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int *,int *,int ) ;

__attribute__((used)) static int FUNC_13(pdo_dbh_t *VAR_4, const char *VAR_5, size_t VAR_6,
 pdo_stmt_t *VAR_7, zval *VAR_8)
{
 pdo_firebird_db_handle *VAR_9 = (pdo_firebird_db_handle *)VAR_4->driver_data;
 pdo_firebird_stmt *VAR_10 = ((void*)0);
 HashTable *VAR_11;

 do {
  isc_stmt_handle VAR_12 = VAR_1;
  XSQLDA VAR_13;
  static char const VAR_14[] = { 128 };
  char VAR_15[8];

  VAR_13.version = VAR_0;
  VAR_13.sqln = 1;

  FUNC_0(VAR_11);
  FUNC_12(VAR_11, 8, ((void*)0), ((void*)0), 0);


  if (!FUNC_7(VAR_4, VAR_5, VAR_6, &VAR_13, &VAR_12, VAR_11)) {
   break;
  }


  VAR_10 = FUNC_5(1, sizeof(*VAR_10)-sizeof(XSQLDA) + FUNC_3(VAR_13.sqld));
  VAR_10->H = VAR_9;
  VAR_10->stmt = VAR_12;
  VAR_10->fetch_buf = FUNC_5(1,sizeof(char*) * VAR_13.sqld);
  VAR_10->out_sqlda.version = VAR_0;
  VAR_10->out_sqlda.sqln = VAR_7->column_count = VAR_13.sqld;
  VAR_10->named_params = VAR_11;


  if (FUNC_10(VAR_9->isc_status, &VAR_12, sizeof(VAR_14), FUNC_4(VAR_14), sizeof(VAR_15),
    VAR_15)) {
   break;
  }
  VAR_10->statement_type = VAR_15[3];


  if (FUNC_8(VAR_9->isc_status, &VAR_12, VAR_0, &VAR_10->out_sqlda)) {
   FUNC_2(VAR_4);
   break;
  }


  if (FUNC_9(VAR_9->isc_status, &VAR_12, VAR_0, &VAR_13)) {
   break;
  }

  if (VAR_13.sqld) {
   VAR_10->in_sqlda = FUNC_5(1,FUNC_3(VAR_13.sqld));
   VAR_10->in_sqlda->version = VAR_0;
   VAR_10->in_sqlda->sqln = VAR_13.sqld;

   if (FUNC_9(VAR_9->isc_status, &VAR_12, VAR_0, VAR_10->in_sqlda)) {
    break;
   }
  }

  VAR_7->driver_data = VAR_10;
  VAR_7->methods = &VAR_3;
  VAR_7->supports_placeholders = VAR_2;

  return 1;

 } while (0);

 FUNC_2(VAR_4);

 FUNC_11(VAR_11);
 FUNC_1(VAR_11);

 if (VAR_10) {
  if (VAR_10->in_sqlda) {
   FUNC_6(VAR_10->in_sqlda);
  }
  FUNC_6(VAR_10);
 }

 return 0;
}
