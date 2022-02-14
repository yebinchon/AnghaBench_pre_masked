
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_7__ {int * errmsg; scalar_t__ errcode; } ;
struct TYPE_8__ {int db; TYPE_1__ einfo; } ;
typedef TYPE_2__ pdo_sqlite_db_handle ;
struct TYPE_9__ {int alloc_own_columns; int max_escaped_char_length; int * methods; int data_source; TYPE_2__* driver_data; int is_persistent; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (int,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int *,int,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_10 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_11(pdo_dbh_t *VAR_8, zval *VAR_9)
{
 pdo_sqlite_db_handle *VAR_10;
 int VAR_11, VAR_12 = 0;
 zend_long VAR_13 = 60, VAR_14;
 char *VAR_15;

 VAR_10 = FUNC_5(1, sizeof(pdo_sqlite_db_handle), VAR_8->is_persistent);

 VAR_10->einfo.errcode = 0;
 VAR_10->einfo.errmsg = ((void*)0);
 VAR_8->driver_data = VAR_10;

 VAR_15 = FUNC_2(VAR_8->data_source);

 if (!VAR_15) {
  FUNC_10(FUNC_6(), 0,
   "open_basedir prohibits opening %s",
   VAR_8->data_source);
  goto cleanup;
 }

 VAR_14 = FUNC_3(VAR_9, VAR_1, VAR_4 | VAR_3);

 VAR_11 = FUNC_8(VAR_15, &VAR_10->db, VAR_14, ((void*)0));

 FUNC_1(VAR_15);

 if (VAR_11 != VAR_2) {
  FUNC_4(VAR_8);
  goto cleanup;
 }

 if (FUNC_0(VAR_6) && *FUNC_0(VAR_6)) {
  FUNC_9(VAR_10->db, VAR_5, ((void*)0));
 }

 if (VAR_9) {
  VAR_13 = FUNC_3(VAR_9, VAR_0, VAR_13);
 }
 FUNC_7(VAR_10->db, VAR_13 * 1000);

 VAR_8->alloc_own_columns = 1;
 VAR_8->max_escaped_char_length = 2;

 VAR_12 = 1;

cleanup:
 VAR_8->methods = &VAR_7;

 return VAR_12;
}
