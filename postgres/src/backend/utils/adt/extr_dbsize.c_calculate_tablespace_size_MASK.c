
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int pathname ;
typedef int int64 ;
typedef scalar_t__ Oid ;
typedef int DIR ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct dirent* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 char* VAR_10 ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (char*,int,char*,...) ;
 scalar_t__ FUNC_15 (char*,struct stat*) ;
 scalar_t__ FUNC_16 (char*,char*) ;

__attribute__((used)) static int64
FUNC_17(Oid VAR_12)
{
 char VAR_13[VAR_7];
 char VAR_14[VAR_7 * 2];
 int64 VAR_15 = 0;
 DIR *VAR_16;
 struct dirent *VAR_17;
 AclResult VAR_18;






 if (VAR_12 != VAR_8 &&
  !FUNC_12(FUNC_3(), VAR_3))
 {
  VAR_18 = FUNC_13(VAR_12, FUNC_3(), VAR_1);
  if (VAR_18 != VAR_0)
   FUNC_6(VAR_18, VAR_9,
         FUNC_11(VAR_12));
 }

 if (VAR_12 == VAR_2)
  FUNC_14(VAR_13, VAR_7, "base");
 else if (VAR_12 == VAR_6)
  FUNC_14(VAR_13, VAR_7, "global");
 else
  FUNC_14(VAR_13, VAR_7, "pg_tblspc/%u/%s", VAR_12,
     VAR_10);

 VAR_16 = FUNC_0(VAR_13);

 if (!VAR_16)
  return -1;

 while ((VAR_17 = FUNC_4(VAR_16, VAR_13)) != ((void*)0))
 {
  struct stat VAR_19;

  FUNC_1();

  if (FUNC_16(VAR_17->d_name, ".") == 0 ||
   FUNC_16(VAR_17->d_name, "..") == 0)
   continue;

  FUNC_14(VAR_14, sizeof(VAR_14), "%s/%s", VAR_13, VAR_17->d_name);

  if (FUNC_15(VAR_14, &VAR_19) < 0)
  {
   if (VAR_11 == VAR_4)
    continue;
   else
    FUNC_8(VAR_5,
      (FUNC_9(),
       FUNC_10("could not stat file \"%s\": %m", VAR_14)));
  }

  if (FUNC_5(VAR_19.st_mode))
   VAR_15 += FUNC_7(VAR_14);

  VAR_15 += VAR_19.st_size;
 }

 FUNC_2(VAR_16);

 return VAR_15;
}
