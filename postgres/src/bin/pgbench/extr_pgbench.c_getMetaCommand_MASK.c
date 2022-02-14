
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MetaCommand ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static MetaCommand
FUNC_1(const char *VAR_10)
{
 MetaCommand VAR_11;

 if (VAR_10 == ((void*)0))
  VAR_11 = VAR_5;
 else if (FUNC_0(VAR_10, "set") == 0)
  VAR_11 = VAR_6;
 else if (FUNC_0(VAR_10, "setshell") == 0)
  VAR_11 = VAR_7;
 else if (FUNC_0(VAR_10, "shell") == 0)
  VAR_11 = VAR_8;
 else if (FUNC_0(VAR_10, "sleep") == 0)
  VAR_11 = VAR_9;
 else if (FUNC_0(VAR_10, "if") == 0)
  VAR_11 = VAR_4;
 else if (FUNC_0(VAR_10, "elif") == 0)
  VAR_11 = VAR_0;
 else if (FUNC_0(VAR_10, "else") == 0)
  VAR_11 = VAR_1;
 else if (FUNC_0(VAR_10, "endif") == 0)
  VAR_11 = VAR_2;
 else if (FUNC_0(VAR_10, "gset") == 0)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_5;
 return VAR_11;
}
