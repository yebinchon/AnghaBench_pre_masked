
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dump {int dummy; } ;


 int FUNC_0 (struct btf_dump const*,char*,int ,char const*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const struct btf_dump *VAR_0,
          int VAR_1, int VAR_2, int VAR_3,
          int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2 - VAR_1;
 int VAR_7 = sizeof(void *) * 8;

 if (VAR_6 <= 0)

  return;
 if (VAR_3 == 0 && VAR_6 < VAR_4 * 8)

  return;

 while (VAR_6 > 0) {
  const char *VAR_8;
  int VAR_9;

  if (VAR_7 > 32 && VAR_6 > 32) {
   VAR_8 = "long";
   VAR_9 = FUNC_1(VAR_6, VAR_7);
  } else if (VAR_6 > 16) {
   VAR_8 = "int";
   VAR_9 = FUNC_1(VAR_6, 32);
  } else if (VAR_6 > 8) {
   VAR_8 = "short";
   VAR_9 = FUNC_1(VAR_6, 16);
  } else {
   VAR_8 = "char";
   VAR_9 = FUNC_1(VAR_6, 8);
  }
  FUNC_0(VAR_0, "\n%s%s: %d;", FUNC_2(VAR_5), VAR_8, VAR_9);
  VAR_6 -= VAR_9;
 }
}
