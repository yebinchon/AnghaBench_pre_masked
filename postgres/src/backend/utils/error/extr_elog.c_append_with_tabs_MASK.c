
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char) ;

__attribute__((used)) static void
FUNC_1(StringInfo VAR_0, const char *VAR_1)
{
 char VAR_2;

 while ((VAR_2 = *VAR_1++) != '\0')
 {
  FUNC_0(VAR_0, VAR_2);
  if (VAR_2 == '\n')
   FUNC_0(VAR_0, '\t');
 }
}
