
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_1(VAR_2, "test: control single socket\n");

 if (FUNC_2(VAR_1 |
          VAR_0, 0) != -1) {
  FUNC_1(VAR_2, "ERROR: opened socket with dual rollover\n");
  FUNC_0(1);
 }
}
