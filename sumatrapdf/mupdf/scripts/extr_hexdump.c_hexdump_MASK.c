
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_1, FILE *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_0)
  FUNC_1(VAR_1, "\"");

 VAR_4 = 0;
 VAR_3 = FUNC_0(VAR_2);
 while (VAR_3 != -1)
 {
  VAR_4 += FUNC_1(VAR_1, VAR_0 ? "\\x%02x" : "%d,", VAR_3);
  if (VAR_4 > 72) {
   FUNC_1(VAR_1, VAR_0 ? "\"\n\"" : "\n");
   VAR_4 = 0;
  }
  VAR_3 = FUNC_0(VAR_2);
 }

 if (VAR_0)
  FUNC_1(VAR_1, "\"\n");

 return VAR_4;
}
