
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(char *VAR_2)
{
 int VAR_3;
 char VAR_4[100];

 if (FUNC_1(VAR_1, VAR_2))
  FUNC_2(1, VAR_0, "bpf_obj_pin");
 if (FUNC_6(VAR_2) > 50) {
  FUNC_4("file path too long: %s\n", VAR_2);
  FUNC_3(1);
 }
 FUNC_5(VAR_4, "iptables -A OUTPUT -m bpf --object-pinned %s -j ACCEPT",
  VAR_2);
 VAR_3 = FUNC_7(VAR_4);
 if (VAR_3 < 0) {
  FUNC_4("iptables rule update failed: %d/n", FUNC_0(VAR_3));
  FUNC_3(1);
 }
}
