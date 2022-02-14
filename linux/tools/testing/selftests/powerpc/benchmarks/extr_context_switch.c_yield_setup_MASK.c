
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(int VAR_1, int VAR_2)
{
 if (VAR_1 != VAR_2) {
  FUNC_1(VAR_0, "Both threads must be on the same CPU for yield test\n");
  FUNC_0(1);
 }
}
