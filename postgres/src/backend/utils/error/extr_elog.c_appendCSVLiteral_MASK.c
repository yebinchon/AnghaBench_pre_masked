
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ,char) ;

__attribute__((used)) static inline void
FUNC_1(StringInfo VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 char VAR_3;


 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_0, '"');
 while ((VAR_3 = *VAR_2++) != '\0')
 {
  if (VAR_3 == '"')
   FUNC_0(VAR_0, '"');
  FUNC_0(VAR_0, VAR_3);
 }
 FUNC_0(VAR_0, '"');
}
