
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int,char const*,int ) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(int VAR_5, const char *VAR_6, const char *VAR_7)
{
 int VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_2);
 if (VAR_8 == -1)
  FUNC_1("open copy source - %s\n", FUNC_5(VAR_4));

 int VAR_9 = FUNC_2(VAR_7, VAR_0 | VAR_3 | VAR_1, 0700);

 while (1) {
  char VAR_10[4096];
  ssize_t VAR_11 = FUNC_4(VAR_8, VAR_10, sizeof(VAR_10));
  if (VAR_11 == 0)
   break;
  if (VAR_11 < 0)
   FUNC_1("read - %s\n", FUNC_5(VAR_4));

  if (FUNC_6(VAR_9, VAR_10, VAR_11) != VAR_11)

   FUNC_1("write - %s\n", FUNC_5(VAR_4));
 }

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
}
