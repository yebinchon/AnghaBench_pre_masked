
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_ulong ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_firebird_stmt ;
struct TYPE_8__ {int isc_status; int tr; int db; } ;
typedef TYPE_3__ pdo_firebird_db_handle ;
typedef int isc_blob_handle ;
typedef int ISC_QUAD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int *,unsigned short,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(pdo_stmt_t *VAR_3, ISC_QUAD *VAR_4, zval *VAR_5)
{
 pdo_firebird_stmt *VAR_6 = (pdo_firebird_stmt*)VAR_3->driver_data;
 pdo_firebird_db_handle *VAR_7 = VAR_6->H;
 isc_blob_handle VAR_8 = VAR_1;
 zval VAR_9;
 zend_ulong VAR_10 = 0, VAR_11;
 unsigned short VAR_12;
 int VAR_13 = 1;

 if (FUNC_7(VAR_7->isc_status, &VAR_7->db, &VAR_7->tr, &VAR_8, VAR_4)) {
  FUNC_0(VAR_3);
  return 0;
 }

 if (FUNC_5(VAR_5) != VAR_0) {
  FUNC_2(&VAR_9, FUNC_9(VAR_5));
 } else {
  FUNC_1(&VAR_9, VAR_5);
 }

 for (VAR_11 = FUNC_3(VAR_9); VAR_11 > 0; VAR_11 -= VAR_12) {
  VAR_12 = VAR_11 > VAR_2 ? VAR_2 : (unsigned short)VAR_11;
  if (FUNC_8(VAR_7->isc_status, &VAR_8, VAR_12, &FUNC_4(VAR_9)[VAR_10])) {
   FUNC_0(VAR_3);
   VAR_13 = 0;
   break;
  }
  VAR_10 += VAR_12;
 }

 if (FUNC_5(VAR_5) != VAR_0) {
  FUNC_10(&VAR_9);
 }

 if (FUNC_6(VAR_7->isc_status, &VAR_8)) {
  FUNC_0(VAR_3);
  return 0;
 }
 return VAR_13;
}
