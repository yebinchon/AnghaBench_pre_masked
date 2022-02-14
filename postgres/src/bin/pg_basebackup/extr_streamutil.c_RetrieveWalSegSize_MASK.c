
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,char*,int*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;

bool
FUNC_14(PGconn *VAR_4)
{
 PGresult *VAR_5;
 char VAR_6[3];
 int VAR_7,
    VAR_8 = 1;


 FUNC_0(VAR_4 != ((void*)0));


 if (FUNC_9(VAR_4) < VAR_1)
 {
  VAR_3 = VAR_0;
  return 1;
 }

 VAR_5 = FUNC_4(VAR_4, "SHOW wal_segment_size");
 if (FUNC_8(VAR_5) != VAR_2)
 {
  FUNC_11("could not send replication command \"%s\": %s",
      "SHOW wal_segment_size", FUNC_3(VAR_4));

  FUNC_2(VAR_5);
  return 0;
 }
 if (FUNC_7(VAR_5) != 1 || FUNC_6(VAR_5) < 1)
 {
  FUNC_11("could not fetch WAL segment size: got %d rows and %d fields, expected %d rows and %d or more fields",
      FUNC_7(VAR_5), FUNC_6(VAR_5), 1, 1);

  FUNC_2(VAR_5);
  return 0;
 }


 if (FUNC_12(FUNC_5(VAR_5, 0, 0), "%d%s", &VAR_7, VAR_6) != 2)
 {
  FUNC_11("WAL segment size could not be parsed");
  return 0;
 }


 if (FUNC_13(VAR_6, "MB") == 0)
  VAR_8 = 1024 * 1024;
 else if (FUNC_13(VAR_6, "GB") == 0)
  VAR_8 = 1024 * 1024 * 1024;


 VAR_3 = VAR_7 * VAR_8;

 if (!FUNC_1(VAR_3))
 {
  FUNC_11(FUNC_10("WAL segment size must be a power of two between 1 MB and 1 GB, but the remote server reported a value of %d byte",
         "WAL segment size must be a power of two between 1 MB and 1 GB, but the remote server reported a value of %d bytes",
         VAR_3),
      VAR_3);
  return 0;
 }

 FUNC_2(VAR_5);
 return 1;
}
