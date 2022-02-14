
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (char*,char*,long) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (long VAR_1, char *VAR_2, int VAR_3)
{
  VAR_0 = VAR_1;
  FUNC_0 (VAR_2, VAR_3 ? "%ld" : "%lu", VAR_1);

  return VAR_2 + FUNC_1 (VAR_2);
}
