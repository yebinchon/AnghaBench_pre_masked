
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_4(char **VAR_2, u64 *VAR_3, const char **VAR_4,
       const char *VAR_5)
{
 *VAR_2 += FUNC_2(*VAR_2, " ");

 if (FUNC_0(**VAR_2)) {
  char *VAR_6;

  if (!VAR_3)
   return -VAR_0;
  VAR_1 = 0;
  *VAR_3 = FUNC_3(*VAR_2, &VAR_6, 0);
  if (VAR_1)
   return -VAR_1;
  if (VAR_6 == *VAR_2)
   return -VAR_0;
  *VAR_2 = VAR_6;
 } else {
  size_t VAR_7;

  if (!VAR_4)
   return -VAR_0;
  *VAR_2 += FUNC_2(*VAR_2, " ");
  *VAR_4 = *VAR_2;
  VAR_7 = FUNC_1(*VAR_2, VAR_5);
  if (!VAR_7)
   return -VAR_0;
  *VAR_2 += VAR_7;
  if (**VAR_2) {
   **VAR_2 = '\0';
   *VAR_2 += 1;
  }
 }
 return 0;
}
