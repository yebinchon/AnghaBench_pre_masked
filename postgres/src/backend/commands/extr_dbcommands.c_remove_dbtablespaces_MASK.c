
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tablespace_id; scalar_t__ db_id; } ;
typedef TYPE_1__ xl_dbase_drop_rec ;
struct stat {int st_mode; } ;
typedef int TableScanDesc ;
struct TYPE_4__ {scalar_t__ oid; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_tablespace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*) ;
 int * FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_8)
{
 Relation VAR_9;
 TableScanDesc VAR_10;
 HeapTuple VAR_11;

 VAR_9 = FUNC_15(VAR_4, VAR_0);
 VAR_10 = FUNC_12(VAR_9, 0, ((void*)0));
 while ((VAR_11 = FUNC_8(VAR_10, VAR_1)) != ((void*)0))
 {
  Form_pg_tablespace VAR_12 = (Form_pg_tablespace) FUNC_0(VAR_11);
  Oid VAR_13 = VAR_12->oid;
  char *VAR_14;
  struct stat VAR_15;


  if (VAR_13 == VAR_2)
   continue;

  VAR_14 = FUNC_1(VAR_8, VAR_13);

  if (FUNC_9(VAR_14, &VAR_15) < 0 || !FUNC_2(VAR_15.st_mode))
  {

   FUNC_10(VAR_14);
   continue;
  }

  if (!FUNC_11(VAR_14, 1))
   FUNC_6(VAR_5,
     (FUNC_7("some useless files may be left behind in old database directory \"%s\"",
       VAR_14)));


  {
   xl_dbase_drop_rec VAR_16;

   VAR_16.db_id = VAR_8;
   VAR_16.tablespace_id = VAR_13;

   FUNC_3();
   FUNC_5((char *) &VAR_16, sizeof(xl_dbase_drop_rec));

   (void) FUNC_4(VAR_3,
         VAR_6 | VAR_7);
  }

  FUNC_10(VAR_14);
 }

 FUNC_14(VAR_10);
 FUNC_13(VAR_9, VAR_0);
}
