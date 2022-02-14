
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int path ;
typedef scalar_t__ XLogRecPtr ;
typedef int TransactionId ;
typedef int Oid ;
typedef int DIR ;


 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;
 int VAR_6 ;
 struct dirent* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int,char*,char*) ;
 int FUNC_18 (char*,int ,int *,int *,int*,int*,int *,int *) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 scalar_t__ FUNC_21 (char*) ;

void
FUNC_22(void)
{
 XLogRecPtr VAR_8;
 XLogRecPtr VAR_9;
 DIR *VAR_10;
 struct dirent *VAR_11;
 char VAR_12[VAR_4 + 20];





 VAR_9 = FUNC_3();


 VAR_8 = FUNC_6();


 if (VAR_8 != VAR_2 && VAR_9 < VAR_8)
  VAR_8 = VAR_9;

 VAR_10 = FUNC_0("pg_logical/mappings");
 while ((VAR_11 = FUNC_5(VAR_10, "pg_logical/mappings")) != ((void*)0))
 {
  struct stat VAR_13;
  Oid VAR_14;
  Oid VAR_15;
  XLogRecPtr VAR_16;
  TransactionId VAR_17;
  TransactionId VAR_18;
  uint32 VAR_19,
     VAR_20;

  if (FUNC_19(VAR_11->d_name, ".") == 0 ||
   FUNC_19(VAR_11->d_name, "..") == 0)
   continue;

  FUNC_17(VAR_12, sizeof(VAR_12), "pg_logical/mappings/%s", VAR_11->d_name);
  if (FUNC_13(VAR_12, &VAR_13) == 0 && !FUNC_7(VAR_13.st_mode))
   continue;


  if (FUNC_20(VAR_11->d_name, "map-", 4) != 0)
   continue;

  if (FUNC_18(VAR_11->d_name, VAR_3,
       &VAR_14, &VAR_15, &VAR_19, &VAR_20, &VAR_17, &VAR_18) != 6)
   FUNC_9(VAR_1, "could not parse filename \"%s\"", VAR_11->d_name);

  VAR_16 = ((uint64) VAR_19) << 32 | VAR_20;

  if (VAR_16 < VAR_8 || VAR_8 == VAR_2)
  {
   FUNC_9(VAR_0, "removing logical rewrite file \"%s\"", VAR_12);
   if (FUNC_21(VAR_12) < 0)
    FUNC_10(VAR_1,
      (FUNC_11(),
       FUNC_12("could not remove file \"%s\": %m", VAR_12)));
  }
  else
  {

   int VAR_21 = FUNC_4(VAR_12, VAR_5 | VAR_6);






   if (VAR_21 < 0)
    FUNC_10(VAR_1,
      (FUNC_11(),
       FUNC_12("could not open file \"%s\": %m", VAR_12)));






   FUNC_16(VAR_7);
   if (FUNC_14(VAR_21) != 0)
    FUNC_10(FUNC_8(VAR_1),
      (FUNC_11(),
       FUNC_12("could not fsync file \"%s\": %m", VAR_12)));
   FUNC_15();

   if (FUNC_1(VAR_21) != 0)
    FUNC_10(VAR_1,
      (FUNC_11(),
       FUNC_12("could not close file \"%s\": %m", VAR_12)));
  }
 }
 FUNC_2(VAR_10);
}
