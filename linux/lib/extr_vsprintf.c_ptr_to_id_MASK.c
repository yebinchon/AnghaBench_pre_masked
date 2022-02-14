
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct printf_spec {int field_width; } ;
typedef int ptr ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,char const*,struct printf_spec) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char*,void const*,struct printf_spec) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static char *FUNC_7(char *VAR_3, char *VAR_4, const void *VAR_5,
         struct printf_spec VAR_6)
{
 const char *VAR_7 = sizeof(VAR_5) == 8 ? "(____ptrval____)" : "(ptrval)";
 unsigned long VAR_8;


 if (FUNC_6(VAR_0)) {
  VAR_8 = FUNC_1((unsigned long)VAR_5, 32);
  return FUNC_2(VAR_3, VAR_4, (const void *)VAR_8, VAR_6);
 }

 if (FUNC_5(&VAR_1)) {
  VAR_6.field_width = 2 * sizeof(VAR_5);

  return FUNC_0(VAR_3, VAR_4, VAR_7, VAR_6);
 }
 VAR_8 = (unsigned long)FUNC_3((u32)VAR_5, &VAR_2);

 return FUNC_2(VAR_3, VAR_4, (const void *)VAR_8, VAR_6);
}
