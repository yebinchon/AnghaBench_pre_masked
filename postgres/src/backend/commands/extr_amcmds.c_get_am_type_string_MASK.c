
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char) ;

__attribute__((used)) static const char *
FUNC_1(char VAR_1)
{
 switch (VAR_1)
 {
  case 129:
   return "INDEX";
  case 128:
   return "TABLE";
  default:

   FUNC_0(VAR_0, "invalid access method type '%c'", VAR_1);
   return ((void*)0);
 }
}
