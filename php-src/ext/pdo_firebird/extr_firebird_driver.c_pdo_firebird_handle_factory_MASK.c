
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int vars ;
struct pdo_data_src_parser {char* member_0; char* member_1; char const* optval; scalar_t__ freeme; int member_2; } ;
struct TYPE_6__ {int * isc_status; int db; int sql_dialect; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_7__ {char const* username; char const* password; int alloc_own_columns; int * methods; int native_case; int is_persistent; int data_source_len; int data_source; TYPE_1__* driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int errmsg ;
typedef int dpb_flags ;
typedef int ISC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int,int const**) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int ,char const*,int *,short,char*) ;




 char VAR_3 ;
 TYPE_1__* FUNC_5 (int,int,int ) ;
 void* FUNC_6 (char const*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,struct pdo_data_src_parser*,int) ;
 short FUNC_9 (char*,short,char*,char const,unsigned char,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int ,int ,char*,char*,int ,char*) ;

__attribute__((used)) static int FUNC_12(pdo_dbh_t *VAR_4, zval *VAR_5)
{
 struct pdo_data_src_parser VAR_6[] = {
  { "dbname", ((void*)0), 0 },
  { "charset", ((void*)0), 0 },
  { "role", ((void*)0), 0 },
  { "dialect", "3", 0 },
  { "user", ((void*)0), 0 },
  { "password", ((void*)0), 0 }
 };
 int VAR_7, VAR_8 = 0;
 short VAR_9 = 256, VAR_10;

 pdo_firebird_db_handle *VAR_11 = VAR_4->driver_data = FUNC_5(1,sizeof(*VAR_11),VAR_4->is_persistent);

 FUNC_8(VAR_4->data_source, VAR_4->data_source_len, VAR_6, 6);

 if (!VAR_4->username && VAR_6[4].optval) {
  VAR_4->username = FUNC_6(VAR_6[4].optval, VAR_4->is_persistent);
 }

 if (!VAR_4->password && VAR_6[5].optval) {
  VAR_4->password = FUNC_6(VAR_6[5].optval, VAR_4->is_persistent);
 }

 do {
  static char const VAR_12[] = {
   128, 130, 131, 129 };
  char const *VAR_13[] = { VAR_4->username, VAR_4->password, VAR_6[1].optval, VAR_6[2].optval };
  char VAR_14[256] = { VAR_3 }, *VAR_15;

  VAR_15 = VAR_14 + 1;


  for (VAR_7 = 0; VAR_7 < sizeof(VAR_12); ++VAR_7) {
   if (VAR_13[VAR_7] && VAR_9 > 0) {
    VAR_10 = FUNC_9(VAR_15, VAR_9, "%c%c%s", VAR_12[VAR_7], (unsigned char)FUNC_10(VAR_13[VAR_7]),
     VAR_13[VAR_7]);
    VAR_15 += VAR_10;
    VAR_9 -= VAR_10;
   }
  }

  VAR_11->sql_dialect = VAR_1;
  if (VAR_6[3].optval) {
   VAR_11->sql_dialect = FUNC_0(VAR_6[3].optval);
  }


  if (FUNC_4(VAR_11->isc_status, 0, VAR_6[0].optval, &VAR_11->db,(short)(VAR_15-VAR_14), VAR_14)) {
   break;
  }

  VAR_4->methods = &VAR_2;
  VAR_4->native_case = VAR_0;
  VAR_4->alloc_own_columns = 1;

  VAR_8 = 1;

 } while (0);

 for (VAR_7 = 0; VAR_7 < sizeof(VAR_6)/sizeof(VAR_6[0]); ++VAR_7) {
  if (VAR_6[VAR_7].freeme) {
   FUNC_1(VAR_6[VAR_7].optval);
  }
 }

 if (!VAR_4->methods) {
  char VAR_16[512];
  const ISC_STATUS *VAR_17 = VAR_11->isc_status;
  FUNC_2(VAR_16, sizeof(VAR_16),&VAR_17);
  FUNC_11(FUNC_7(), VAR_11->isc_status[1], "SQLSTATE[%s] [%d] %s",
    "HY000", VAR_11->isc_status[1], VAR_16);
 }

 if (!VAR_8) {
  FUNC_3(VAR_4);
 }

 return VAR_8;
}
