
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
struct stat {int dummy; } ;
typedef scalar_t__ int64 ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;

__attribute__((used)) static int64
FUNC_10(text *VAR_2, text *VAR_3, bool VAR_4)
{
 FILE *VAR_5;
 char *VAR_6;
 int64 VAR_7 = 0;

 VAR_6 = FUNC_4(VAR_2, 0);

 if (!VAR_4)
 {
  struct stat VAR_8;

  if (FUNC_9(VAR_6, &VAR_8) >= 0)
   FUNC_5(VAR_1,
     (VAR_0,
      FUNC_7("file \"%s\" exists", VAR_6)));

  VAR_5 = FUNC_0(VAR_6, "wb");
 }
 else
  VAR_5 = FUNC_0(VAR_6, "ab");

 if (!VAR_5)
  FUNC_5(VAR_1,
    (FUNC_6(),
     FUNC_7("could not open file \"%s\" for writing: %m",
      VAR_6)));

 VAR_7 = FUNC_8(FUNC_2(VAR_3), 1, FUNC_3(VAR_3), VAR_5);
 if (VAR_7 != FUNC_3(VAR_3) || FUNC_1(VAR_5))
  FUNC_5(VAR_1,
    (FUNC_6(),
     FUNC_7("could not write file \"%s\": %m", VAR_6)));

 return (VAR_7);
}
