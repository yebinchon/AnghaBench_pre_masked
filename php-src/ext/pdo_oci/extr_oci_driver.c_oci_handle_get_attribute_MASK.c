
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef int verstr ;
typedef int ub4 ;
typedef int ub1 ;
typedef int text ;
typedef int sword ;
struct TYPE_4__ {int prefetch; int last_err; int err; int svc; } ;
typedef TYPE_1__ pdo_oci_db_handle ;
struct TYPE_5__ {int auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int infostr ;
typedef int dvoid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int ,int ) ;
 int FUNC_1 (int*,int*,int*,int*,int*) ;
 int FUNC_2 (int ,int ,int *,int,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;






 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(pdo_dbh_t *VAR_5, zend_long VAR_6, zval *VAR_7)
{
 pdo_oci_db_handle *VAR_8 = (pdo_oci_db_handle *)VAR_5->driver_data;

 switch (VAR_6) {
  case 129:
  case 130:
  {
   text VAR_9[512];
   char VAR_10[15];
   ub4 VAR_11;

   if (FUNC_2(VAR_8->svc, VAR_8->err, VAR_9, (ub4)sizeof(VAR_9), (ub1)VAR_2, &VAR_11))
   {
    FUNC_5(VAR_7, "<<Unknown>>");
   } else {
    if (VAR_6 == 130) {
     FUNC_5(VAR_7, (char *)VAR_9);
    } else {
     FUNC_7(VAR_10, sizeof(VAR_10), "%d.%d.%d.%d.%d",
        (int)((VAR_11>>24) & 0xFF),
        (int)((VAR_11>>20) & 0x0F),
        (int)((VAR_11>>12) & 0xFF),
        (int)((VAR_11>>8) & 0x0F),
        (int)((VAR_11>>0) & 0xFF));

     FUNC_5(VAR_7, VAR_10);
    }
   }
   return VAR_4;
  }

  case 132:
  {
   return VAR_0;



   return VAR_4;
  }

  case 133:
   FUNC_3(VAR_7, VAR_5->auto_commit);
   return VAR_4;

  case 131:
   FUNC_4(VAR_7, VAR_8->prefetch);
   return VAR_4;
  case 128:
  {
   FUNC_6("Unsupported attribute type");
   return VAR_0;

  }
  default:
   return VAR_0;

 }
 return VAR_0;

}
