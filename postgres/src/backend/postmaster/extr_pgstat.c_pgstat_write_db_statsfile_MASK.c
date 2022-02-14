
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int format_id ;
struct TYPE_3__ {int functions; int tables; int databaseid; } ;
typedef int PgStat_StatTabEntry ;
typedef int PgStat_StatFuncEntry ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef int Oid ;
typedef int HASH_SEQ_STATUS ;
typedef int FILE ;


 int * FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,...) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char,int *) ;
 int FUNC_8 (int *,int,int,int *) ;
 int FUNC_9 (int,int,int ,char*,int) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(PgStat_StatDBEntry *VAR_5, bool VAR_6)
{
 HASH_SEQ_STATUS VAR_7;
 HASH_SEQ_STATUS VAR_8;
 PgStat_StatTabEntry *VAR_9;
 PgStat_StatFuncEntry *VAR_10;
 FILE *VAR_11;
 int32 VAR_12;
 Oid VAR_13 = VAR_5->databaseid;
 int VAR_14;
 char VAR_15[VAR_2];
 char VAR_16[VAR_2];

 FUNC_9(VAR_6, 1, VAR_13, VAR_15, VAR_2);
 FUNC_9(VAR_6, 0, VAR_13, VAR_16, VAR_2);

 FUNC_2(VAR_0, "writing stats file \"%s\"", VAR_16);




 VAR_11 = FUNC_0(VAR_15, VAR_4);
 if (VAR_11 == ((void*)0))
 {
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not open temporary statistics file \"%s\": %m",
      VAR_15)));
  return;
 }




 VAR_12 = VAR_3;
 VAR_14 = FUNC_8(&VAR_12, sizeof(VAR_12), 1, VAR_11);
 (void) VAR_14;




 FUNC_10(&VAR_7, VAR_5->tables);
 while ((VAR_9 = (PgStat_StatTabEntry *) FUNC_11(&VAR_7)) != ((void*)0))
 {
  FUNC_7('T', VAR_11);
  VAR_14 = FUNC_8(VAR_9, sizeof(PgStat_StatTabEntry), 1, VAR_11);
  (void) VAR_14;
 }




 FUNC_10(&VAR_8, VAR_5->functions);
 while ((VAR_10 = (PgStat_StatFuncEntry *) FUNC_11(&VAR_8)) != ((void*)0))
 {
  FUNC_7('F', VAR_11);
  VAR_14 = FUNC_8(VAR_10, sizeof(PgStat_StatFuncEntry), 1, VAR_11);
  (void) VAR_14;
 }






 FUNC_7('E', VAR_11);

 if (FUNC_6(VAR_11))
 {
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not write temporary statistics file \"%s\": %m",
      VAR_15)));
  FUNC_1(VAR_11);
  FUNC_13(VAR_15);
 }
 else if (FUNC_1(VAR_11) < 0)
 {
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not close temporary statistics file \"%s\": %m",
      VAR_15)));
  FUNC_13(VAR_15);
 }
 else if (FUNC_12(VAR_15, VAR_16) < 0)
 {
  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not rename temporary statistics file \"%s\" to \"%s\": %m",
      VAR_15, VAR_16)));
  FUNC_13(VAR_15);
 }

 if (VAR_6)
 {
  FUNC_9(0, 0, VAR_13, VAR_16, VAR_2);

  FUNC_2(VAR_0, "removing temporary stats file \"%s\"", VAR_16);
  FUNC_13(VAR_16);
 }
}
