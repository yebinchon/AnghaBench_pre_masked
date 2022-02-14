
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;

void FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = VAR_0-1; VAR_3 >= 0; --VAR_3)
 {
  FUNC_0(VAR_2, "%s ", VAR_1[VAR_3]);
 }
 FUNC_0(VAR_2, "\n");
}
