
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int *,int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,char*) ;
 scalar_t__ FUNC_10 (int *,int,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int,int,int) ;
 int FUNC_13 (int *,int,int,int) ;
 int FUNC_14 (char*,...) ;
 int VAR_2 ;

int
FUNC_15(int VAR_3, char **VAR_4)
{
 char *VAR_5,
      *VAR_6;
 char *VAR_7;
 Oid VAR_8;
 PGconn *VAR_9;
 PGresult *VAR_10;

 if (VAR_3 != 4)
 {
  FUNC_9(VAR_2, "Usage: %s database_name in_filename out_filename\n",
    VAR_4[0]);
  FUNC_7(1);
 }

 VAR_7 = VAR_4[1];
 VAR_5 = VAR_4[2];
 VAR_6 = VAR_4[3];




 VAR_9 = FUNC_5(((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_7);


 if (FUNC_6(VAR_9) != VAR_0)
 {
  FUNC_9(VAR_2, "Connection to database failed: %s",
    FUNC_1(VAR_9));
  FUNC_8(VAR_9);
 }


 VAR_10 = FUNC_2(VAR_9,
     "SELECT pg_catalog.set_config('search_path', '', false)");
 if (FUNC_4(VAR_10) != VAR_1)
 {
  FUNC_9(VAR_2, "SET failed: %s", FUNC_1(VAR_9));
  FUNC_0(VAR_10);
  FUNC_8(VAR_9);
 }
 FUNC_0(VAR_10);

 VAR_10 = FUNC_2(VAR_9, "begin");
 FUNC_0(VAR_10);
 FUNC_14("importing file \"%s\" ...\n", VAR_5);

 VAR_8 = FUNC_11(VAR_9, VAR_5);
 if (VAR_8 == 0)
  FUNC_9(VAR_2, "%s\n", FUNC_1(VAR_9));
 else
 {
  FUNC_14("\tas large object %u.\n", VAR_8);

  FUNC_14("picking out bytes 1000-2000 of the large object\n");
  FUNC_13(VAR_9, VAR_8, 1000, 1000);

  FUNC_14("overwriting bytes 1000-2000 of the large object with X's\n");
  FUNC_12(VAR_9, VAR_8, 1000, 1000);

  FUNC_14("exporting large object to file \"%s\" ...\n", VAR_6);

  if (FUNC_10(VAR_9, VAR_8, VAR_6) < 0)
   FUNC_9(VAR_2, "%s\n", FUNC_1(VAR_9));
 }

 VAR_10 = FUNC_2(VAR_9, "end");
 FUNC_0(VAR_10);
 FUNC_3(VAR_9);
 return 0;
}
