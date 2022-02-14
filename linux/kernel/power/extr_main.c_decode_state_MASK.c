
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t suspend_state_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (char const*,char,size_t) ;
 char** VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static suspend_state_t FUNC_4(const char *VAR_4, size_t VAR_5)
{



 char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4, '\n', VAR_5);
 VAR_7 = VAR_6 ? VAR_6 - VAR_4 : VAR_5;


 if (VAR_7 == 4 && FUNC_1(VAR_4, "disk"))
  return VAR_0;
 return VAR_2;
}
