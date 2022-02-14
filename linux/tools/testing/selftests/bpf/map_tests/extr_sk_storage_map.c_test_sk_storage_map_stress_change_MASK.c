
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_6;

 FUNC_3(VAR_2, VAR_5);
 FUNC_3(VAR_1, VAR_5);
 if (VAR_4 > 0) {
  FUNC_3(VAR_0, VAR_5);
  FUNC_1(VAR_4);
 }

 VAR_6 = FUNC_2();

 FUNC_3(VAR_2, VAR_3);
 FUNC_3(VAR_1, VAR_3);
 if (VAR_4 > 0) {
  FUNC_3(VAR_0, VAR_3);
  FUNC_1(0);
 }

 FUNC_0(VAR_6, "test_sk_storage_map_stress_change", "err:%d\n", VAR_6);
}
