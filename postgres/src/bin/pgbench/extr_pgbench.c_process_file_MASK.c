
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char const*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_3, int VAR_4)
{
 FILE *VAR_5;
 char *VAR_6;


 if (FUNC_8(VAR_3, "-") == 0)
  VAR_5 = VAR_2;
 else if ((VAR_5 = FUNC_4(VAR_3, "r")) == ((void*)0))
 {
  FUNC_5(VAR_1, "could not open file \"%s\": %s\n",
    VAR_3, FUNC_9(VAR_0));
  FUNC_1(1);
 }

 VAR_6 = FUNC_7(VAR_5);

 if (FUNC_3(VAR_5))
 {
  FUNC_5(VAR_1, "could not read file \"%s\": %s\n",
    VAR_3, FUNC_9(VAR_0));
  FUNC_1(1);
 }

 if (VAR_5 != VAR_2)
  FUNC_2(VAR_5);

 FUNC_0(VAR_6, VAR_3, VAR_4);

 FUNC_6(VAR_6);
}
