
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int ) ;

char *FUNC_1(char *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_1;

 while (VAR_2--)
  VAR_0 = FUNC_0(VAR_0, *VAR_3++);
 return VAR_0;
}
