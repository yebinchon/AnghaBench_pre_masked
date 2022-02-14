
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_6, VAR_7, VAR_8 = 1;

 FUNC_4(VAR_5, "Testing filter add without bind...\n");
 VAR_6 = FUNC_6(VAR_0, VAR_1, 0);
 if (VAR_6 < 0)
  FUNC_3(1, VAR_4, "failed to create socket 1");
 VAR_7 = FUNC_6(VAR_0, VAR_1, 0);
 if (VAR_7 < 0)
  FUNC_3(1, VAR_4, "failed to create socket 2");
 if (FUNC_5(VAR_6, VAR_2, VAR_3, &VAR_8, sizeof(VAR_8)))
  FUNC_3(1, VAR_4, "failed to set SO_REUSEPORT on socket 1");
 if (FUNC_5(VAR_7, VAR_2, VAR_3, &VAR_8, sizeof(VAR_8)))
  FUNC_3(1, VAR_4, "failed to set SO_REUSEPORT on socket 2");

 FUNC_1(VAR_6, 10);
 FUNC_0(VAR_7, 10);

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
}
