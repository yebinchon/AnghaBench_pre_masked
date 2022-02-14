
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,...) ;
 int VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;

 if (FUNC_0(VAR_2, VAR_1) == 0)
  FUNC_2(0, "no CPUs requested");

 for (VAR_4 = 0; VAR_4 <= VAR_3; ++VAR_4) {
  if (FUNC_1(VAR_4, VAR_2, VAR_1))
   if (!FUNC_1(VAR_4, VAR_2, VAR_0))
    FUNC_2(1, "Requested cpu% is not present", VAR_4);
 }
}
