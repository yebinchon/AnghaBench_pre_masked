
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* path; void* oid; } ;
typedef TYPE_1__ tablespaceinfo ;
typedef int List ;
typedef int FILE ;


 int * FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 void* FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char*,int*) ;

__attribute__((used)) static bool
FUNC_12(List **VAR_7)
{
 tablespaceinfo *VAR_8;
 FILE *VAR_9;
 char VAR_10[VAR_4];
 char *VAR_11;
 char VAR_12[VAR_4];
 int VAR_13,
    VAR_14 = -1,
    VAR_15 = 0,
    VAR_16;




 VAR_9 = FUNC_0(VAR_5, "r");
 if (!VAR_9)
 {
  if (VAR_6 != VAR_0)
   FUNC_2(VAR_3,
     (FUNC_4(),
      FUNC_5("could not read file \"%s\": %m",
       VAR_5)));
  return 0;
 }
 while ((VAR_13 = FUNC_7(VAR_9)) != VAR_1)
 {
  if ((VAR_13 == '\n' || VAR_13 == '\r') && VAR_14 != '\\')
  {
   VAR_12[VAR_15] = '\0';
   if (FUNC_11(VAR_12, "%s %n", VAR_10, &VAR_16) != 1)
    FUNC_2(VAR_3,
      (FUNC_3(VAR_2),
       FUNC_5("invalid data in file \"%s\"", VAR_5)));
   VAR_11 = VAR_12 + VAR_16;
   VAR_15 = 0;

   VAR_8 = FUNC_9(sizeof(tablespaceinfo));
   VAR_8->oid = FUNC_10(VAR_10);
   VAR_8->path = FUNC_10(VAR_11);

   *VAR_7 = FUNC_8(*VAR_7, VAR_8);
   continue;
  }
  else if ((VAR_13 == '\n' || VAR_13 == '\r') && VAR_14 == '\\')
   VAR_12[VAR_15 - 1] = VAR_13;
  else
   VAR_12[VAR_15++] = VAR_13;
  VAR_14 = VAR_13;
 }

 if (FUNC_6(VAR_9) || FUNC_1(VAR_9))
  FUNC_2(VAR_3,
    (FUNC_4(),
     FUNC_5("could not read file \"%s\": %m",
      VAR_5)));

 return 1;
}
