
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(int *VAR_2, const char ***VAR_3)
{
 while (*VAR_2 > 0) {
  const char *VAR_4 = (*VAR_3)[0];

  if (VAR_4[0] != '-')
   break;

  if (!FUNC_2(VAR_4, "--help") || !FUNC_2(VAR_4, "-h")) {
   VAR_0 = 1;
   break;
  } else {
   FUNC_1(VAR_1, "Unknown option: %s\n", VAR_4);
   FUNC_0();
  }

  (*VAR_3)++;
  (*VAR_2)--;
 }
}
