
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0("len=%d, ind=%d, data=0x", VAR_1, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  FUNC_0("%02x", 0xff & VAR_0[VAR_3]);
 FUNC_0("\n");
}
