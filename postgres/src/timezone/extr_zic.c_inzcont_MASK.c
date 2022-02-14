
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,int,int) ;

__attribute__((used)) static bool
FUNC_3(char **VAR_2, int VAR_3)
{
 if (VAR_3 < VAR_1 || VAR_3 > VAR_0)
 {
  FUNC_1(FUNC_0("wrong number of fields on Zone continuation line"));
  return 0;
 }
 return FUNC_2(VAR_2, VAR_3, 1);
}
