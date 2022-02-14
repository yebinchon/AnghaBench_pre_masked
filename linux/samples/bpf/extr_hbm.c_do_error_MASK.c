
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_1("ERROR: %s, errno: %d\n", VAR_1, VAR_0);
 else
  FUNC_1("ERROR: %s\n", VAR_1);
 FUNC_0(1);
}
