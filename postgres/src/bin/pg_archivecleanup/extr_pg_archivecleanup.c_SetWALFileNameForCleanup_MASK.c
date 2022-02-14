
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int,int) ;
 char* FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,int*,int*,int*,...) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(void)
{
 bool VAR_5 = 0;

 FUNC_3(VAR_3, VAR_0);
 if (FUNC_2(VAR_3))
 {
  FUNC_10(VAR_1, VAR_3);
  VAR_5 = 1;
 }
 else if (FUNC_1(VAR_3))
 {
  int VAR_6;
  uint32 VAR_7 = 1,
     VAR_8 = 0,
     VAR_9 = 0;

  VAR_6 = FUNC_9(VAR_3, "%08X%08X%08X.partial",
       &VAR_7, &VAR_8, &VAR_9);
  if (VAR_6 == 3)
  {
   VAR_5 = 1;





   FUNC_4(VAR_1, VAR_7, VAR_8, VAR_9);
  }
 }
 else if (FUNC_0(VAR_3))
 {
  int VAR_10;
  uint32 VAR_11 = 1,
     VAR_12 = 0,
     VAR_13 = 0,
     VAR_14 = 0;

  VAR_10 = FUNC_9(VAR_3, "%08X%08X%08X.%08X.backup", &VAR_11, &VAR_12, &VAR_13, &VAR_14);
  if (VAR_10 == 4)
  {
   VAR_5 = 1;





   FUNC_4(VAR_1, VAR_11, VAR_12, VAR_13);
  }
 }

 if (!VAR_5)
 {
  FUNC_8("invalid file name argument");
  FUNC_7(VAR_4, FUNC_5("Try \"%s --help\" for more information.\n"), VAR_2);
  FUNC_6(2);
 }
}
