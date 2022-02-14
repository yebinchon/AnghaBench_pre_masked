
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zend_ulong ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {char** fetch_buf; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_firebird_stmt ;
struct TYPE_8__ {int* isc_status; char* last_app_error; int tr; int db; } ;
typedef TYPE_3__ pdo_firebird_db_handle ;
typedef int isc_blob_handle ;
typedef int bl_info ;
typedef scalar_t__ ISC_STATUS ;
typedef int ISC_QUAD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int*,int *,int,int ,int,char*) ;
 scalar_t__ FUNC_4 (int*,int *) ;
 scalar_t__ FUNC_5 (int*,int *,unsigned short*,unsigned short,char*) ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_6 (int*,int *,int *,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (char*,unsigned short) ;

__attribute__((used)) static int FUNC_8(pdo_stmt_t *VAR_8, int VAR_9, char **VAR_10,
 zend_ulong *VAR_11, ISC_QUAD *VAR_12)
{
 pdo_firebird_stmt *VAR_13 = (pdo_firebird_stmt*)VAR_8->driver_data;
 pdo_firebird_db_handle *VAR_14 = VAR_13->H;
 isc_blob_handle VAR_15 = VAR_0;
 char const VAR_16 = VAR_2;
 char VAR_17[20];
 unsigned short VAR_18;
 int VAR_19 = *VAR_11 = 0;

 if (FUNC_6(VAR_14->isc_status, &VAR_14->db, &VAR_14->tr, &VAR_15, VAR_12)) {
  FUNC_0(VAR_8);
  return 0;
 }

 if (FUNC_3(VAR_14->isc_status, &VAR_15, 1, FUNC_1(&VAR_16),
   sizeof(VAR_17), VAR_17)) {
  FUNC_0(VAR_8);
  goto fetch_blob_end;
 }


 for (VAR_18 = 0; VAR_18 < sizeof(VAR_17); ) {
  unsigned short VAR_20;
  char VAR_21 = VAR_17[VAR_18++];

  if (VAR_21 == VAR_3 || VAR_21 == VAR_5 || VAR_21 == VAR_4
    || VAR_18 >= sizeof(VAR_17)) {
   VAR_14->last_app_error = "Couldn't determine BLOB size";
   goto fetch_blob_end;
  }

  VAR_20 = (unsigned short) FUNC_7(&VAR_17[VAR_18], 2);

  if (VAR_21 == VAR_2) {
   *VAR_11 = FUNC_7(&VAR_17[VAR_18+2], VAR_20);
   break;
  }
  VAR_18 += VAR_20+2;
 }



 if (*VAR_11) {
  zend_ulong VAR_22;
  unsigned short VAR_23;
  ISC_STATUS VAR_24;

  *VAR_10 = VAR_13->fetch_buf[VAR_9] = FUNC_2(VAR_13->fetch_buf[VAR_9], *VAR_11+1);

  for (VAR_22 = VAR_24 = 0; (!VAR_24 || VAR_24 == VAR_6) && VAR_22 < *VAR_11; VAR_22 += VAR_23) {

   unsigned short VAR_25 = (*VAR_11-VAR_22) > VAR_1 ? VAR_1
    : (unsigned short)(*VAR_11-VAR_22);

   VAR_24 = FUNC_5(VAR_14->isc_status, &VAR_15, &VAR_23, VAR_25, &(*VAR_10)[VAR_22]);
  }

  (*VAR_10)[*VAR_11++] = '\0';

  if (VAR_14->isc_status[0] == 1 && (VAR_24 != 0 && VAR_24 != VAR_7 && VAR_24 != VAR_6)) {
   VAR_14->last_app_error = "Error reading from BLOB";
   goto fetch_blob_end;
  }
 }
 VAR_19 = 1;

fetch_blob_end:
 if (FUNC_4(VAR_14->isc_status, &VAR_15)) {
  FUNC_0(VAR_8);
  return 0;
 }
 return VAR_19;
}
