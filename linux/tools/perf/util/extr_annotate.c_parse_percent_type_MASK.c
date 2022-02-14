
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static unsigned int FUNC_1(char *VAR_4, char *VAR_5)
{
 unsigned int VAR_6 = (unsigned int) -1;

 if (!FUNC_0("period", VAR_4)) {
  if (!FUNC_0("local", VAR_5))
   VAR_6 = VAR_3;
  else if (!FUNC_0("global", VAR_5))
   VAR_6 = VAR_2;
 }

 if (!FUNC_0("hits", VAR_4)) {
  if (!FUNC_0("local", VAR_5))
   VAR_6 = VAR_1;
  else if (!FUNC_0("global", VAR_5))
   VAR_6 = VAR_0;
 }

 return VAR_6;
}
