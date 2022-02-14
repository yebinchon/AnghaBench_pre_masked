
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int sversion; TYPE_2__* lobjfuncs; int errorMessage; } ;
struct TYPE_12__ {scalar_t__ fn_lo_open; scalar_t__ fn_lo_close; scalar_t__ fn_lo_creat; scalar_t__ fn_lo_unlink; scalar_t__ fn_lo_lseek; scalar_t__ fn_lo_tell; scalar_t__ fn_lo_read; scalar_t__ fn_lo_write; void* fn_lo_truncate64; void* fn_lo_truncate; void* fn_lo_tell64; void* fn_lo_lseek64; void* fn_lo_create; } ;
struct TYPE_11__ {scalar_t__ resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGlobjfuncs ;
typedef TYPE_3__ PGconn ;
typedef void* Oid ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,char const*) ;
 char* FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int
FUNC_11(PGconn *VAR_1)
{
 PGresult *VAR_2;
 PGlobjfuncs *VAR_3;
 int VAR_4;
 const char *VAR_5;
 const char *VAR_6;
 Oid VAR_7;

 if (!VAR_1)
  return -1;




 VAR_3 = (PGlobjfuncs *) FUNC_8(sizeof(PGlobjfuncs));
 if (VAR_3 == ((void*)0))
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("out of memory\n"));
  return -1;
 }
 FUNC_0((char *) VAR_3, 0, sizeof(PGlobjfuncs));






 if (VAR_1->sversion >= 70300)
  VAR_5 = "select proname, oid from pg_catalog.pg_proc "
   "where proname in ("
   "'lo_open', "
   "'lo_close', "
   "'lo_creat', "
   "'lo_create', "
   "'lo_unlink', "
   "'lo_lseek', "
   "'lo_lseek64', "
   "'lo_tell', "
   "'lo_tell64', "
   "'lo_truncate', "
   "'lo_truncate64', "
   "'loread', "
   "'lowrite') "
   "and pronamespace = (select oid from pg_catalog.pg_namespace "
   "where nspname = 'pg_catalog')";
 else
  VAR_5 = "select proname, oid from pg_proc "
   "where proname = 'lo_open' "
   "or proname = 'lo_close' "
   "or proname = 'lo_creat' "
   "or proname = 'lo_unlink' "
   "or proname = 'lo_lseek' "
   "or proname = 'lo_tell' "
   "or proname = 'loread' "
   "or proname = 'lowrite'";

 VAR_2 = FUNC_2(VAR_1, VAR_5);
 if (VAR_2 == ((void*)0))
 {
  FUNC_6(VAR_3);
  return -1;
 }

 if (VAR_2->resultStatus != VAR_0)
 {
  FUNC_6(VAR_3);
  FUNC_1(VAR_2);
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("query to initialize large object functions did not return data\n"));
  return -1;
 }




 for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_2); VAR_4++)
 {
  VAR_6 = FUNC_3(VAR_2, VAR_4, 0);
  VAR_7 = (Oid) FUNC_5(FUNC_3(VAR_2, VAR_4, 1));
  if (FUNC_10(VAR_6, "lo_open") == 0)
   VAR_3->fn_lo_open = VAR_7;
  else if (FUNC_10(VAR_6, "lo_close") == 0)
   VAR_3->fn_lo_close = VAR_7;
  else if (FUNC_10(VAR_6, "lo_creat") == 0)
   VAR_3->fn_lo_creat = VAR_7;
  else if (FUNC_10(VAR_6, "lo_create") == 0)
   VAR_3->fn_lo_create = VAR_7;
  else if (FUNC_10(VAR_6, "lo_unlink") == 0)
   VAR_3->fn_lo_unlink = VAR_7;
  else if (FUNC_10(VAR_6, "lo_lseek") == 0)
   VAR_3->fn_lo_lseek = VAR_7;
  else if (FUNC_10(VAR_6, "lo_lseek64") == 0)
   VAR_3->fn_lo_lseek64 = VAR_7;
  else if (FUNC_10(VAR_6, "lo_tell") == 0)
   VAR_3->fn_lo_tell = VAR_7;
  else if (FUNC_10(VAR_6, "lo_tell64") == 0)
   VAR_3->fn_lo_tell64 = VAR_7;
  else if (FUNC_10(VAR_6, "lo_truncate") == 0)
   VAR_3->fn_lo_truncate = VAR_7;
  else if (FUNC_10(VAR_6, "lo_truncate64") == 0)
   VAR_3->fn_lo_truncate64 = VAR_7;
  else if (FUNC_10(VAR_6, "loread") == 0)
   VAR_3->fn_lo_read = VAR_7;
  else if (FUNC_10(VAR_6, "lowrite") == 0)
   VAR_3->fn_lo_write = VAR_7;
 }

 FUNC_1(VAR_2);






 if (VAR_3->fn_lo_open == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_open\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_close == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_close\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_creat == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_creat\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_unlink == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_unlink\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_lseek == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_lseek\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_tell == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lo_tell\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_read == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function loread\n"));
  FUNC_6(VAR_3);
  return -1;
 }
 if (VAR_3->fn_lo_write == 0)
 {
  FUNC_9(&VAR_1->errorMessage,
        FUNC_7("cannot determine OID of function lowrite\n"));
  FUNC_6(VAR_3);
  return -1;
 }




 VAR_1->lobjfuncs = VAR_3;
 return 0;
}
