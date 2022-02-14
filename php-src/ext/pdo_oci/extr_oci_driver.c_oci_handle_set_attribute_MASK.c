
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_long ;
typedef int ub4 ;
struct TYPE_4__ {void* last_err; int err; int svc; int session; int prefetch; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_5__ {int auto_commit; int in_txn; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int dvoid ;


 void* FUNC_0 (int ,int ,int *,int ,int ,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(pdo_dbh_t *VAR_7, zend_long VAR_8, zval *VAR_9)
{
 zend_long VAR_10 = FUNC_7(VAR_9);
 pdo_oci_db_handle *VAR_11 = (pdo_oci_db_handle *)VAR_7->driver_data;

 switch (VAR_8) {
  case 134:
  {
   if (VAR_7->in_txn) {

    VAR_11->last_err = FUNC_1(VAR_11->svc, VAR_11->err, 0);

    if (VAR_11->last_err) {
     VAR_11->last_err = FUNC_5("OCITransCommit");
     return 0;
    }
    VAR_7->in_txn = 0;
   }

   VAR_7->auto_commit = (unsigned int)VAR_10? 1 : 0;
   return 1;
  }
  case 133:
  {
   VAR_11->prefetch = FUNC_6(VAR_10);
   return 1;
  }
  case 132:
  {
   FUNC_5("Unsupported attribute type");
   return 0;

  }
  case 129:
  {
   FUNC_5("Unsupported attribute type");
   return 0;

  }
  case 130:
  {
   FUNC_5("Unsupported attribute type");
   return 0;

  }
  case 128:
  {
   FUNC_5("Unsupported attribute type");
   return 0;

  }
  case 131:
  {
   FUNC_5("Unsupported attribute type");
   return 0;

  }
  default:
   return 0;
 }

}
