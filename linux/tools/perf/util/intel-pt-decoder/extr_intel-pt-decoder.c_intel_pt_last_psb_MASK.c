
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (unsigned char*,char const*,size_t) ;
 unsigned char* FUNC_1 (unsigned char*,char const,size_t) ;

__attribute__((used)) static unsigned char *FUNC_2(unsigned char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_1;
 unsigned char *VAR_5;
 size_t VAR_6;

 if (VAR_3 < VAR_0)
  return ((void*)0);

 VAR_6 = VAR_3 - VAR_0 + 1;
 while (1) {
  VAR_5 = FUNC_1(VAR_2, VAR_4[0], VAR_6);
  if (!VAR_5)
   return ((void*)0);
  if (!FUNC_0(VAR_5 + 1, VAR_4 + 1, VAR_0 - 1))
   return VAR_5;
  VAR_6 = VAR_5 - VAR_2;
  if (!VAR_6)
   return ((void*)0);
 }
}
