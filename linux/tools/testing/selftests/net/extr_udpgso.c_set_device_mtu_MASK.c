
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 FUNC_2(VAR_1, "device mtu (orig): %u\n", VAR_4);

 FUNC_0(VAR_2, VAR_0, VAR_3);
 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 != VAR_3)
  FUNC_1(1, 0, "unable to set device mtu to %u\n", VAR_4);

 FUNC_2(VAR_1, "device mtu (test): %u\n", VAR_4);
}
