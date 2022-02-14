
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(void)
{
 char *VAR_1;
 int VAR_2 = VAR_0;

 VAR_1 = FUNC_0("PGCLIENTENCODING");
 if (VAR_1 && *VAR_1 != '\0')
 {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0)
   VAR_2 = VAR_0;
 }
 return VAR_2;
}
