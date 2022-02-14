
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int socklen_t ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int*,int*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct bpf_object*,int,char*) ;
 int FUNC_3 (struct bpf_object*,int,char*) ;
 int FUNC_4 (int,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct bpf_object *VAR_2, int VAR_3,
          int VAR_4, int VAR_5)
{
 socklen_t VAR_6;
 __u8 VAR_7;
 int VAR_8;



 VAR_7 = 0x80;
 VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_0, &VAR_7, 1);
 if (VAR_8 < 0) {
  FUNC_1("Failed to call setsockopt(IP_TOS)");
  goto detach;
 }

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (VAR_8) {
  FUNC_1("Failed to call getsockopt(IP_TOS)");
  goto detach;
 }

 if (VAR_7 != 0x80) {
  FUNC_1("Unexpected getsockopt 0x%x != 0x80 without BPF", VAR_7);
  VAR_8 = -1;
  goto detach;
 }






 VAR_8 = FUNC_2(VAR_2, VAR_4, "cgroup/getsockopt/child");
 if (VAR_8)
  goto detach;

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (VAR_8) {
  FUNC_1("Failed to call getsockopt(IP_TOS)");
  goto detach;
 }

 if (VAR_7 != 0x90) {
  FUNC_1("Unexpected getsockopt 0x%x != 0x90", VAR_7);
  VAR_8 = -1;
  goto detach;
 }







 VAR_8 = FUNC_2(VAR_2, VAR_3, "cgroup/getsockopt/parent");
 if (VAR_8)
  goto detach;

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (VAR_8) {
  FUNC_1("Failed to call getsockopt(IP_TOS)");
  goto detach;
 }

 if (VAR_7 != 0xA0) {
  FUNC_1("Unexpected getsockopt 0x%x != 0xA0", VAR_7);
  VAR_8 = -1;
  goto detach;
 }







 VAR_7 = 0x40;
 if (FUNC_4(VAR_5, VAR_1, VAR_0, &VAR_7, 1) < 0) {
  FUNC_1("Failed to call setsockopt(IP_TOS)");
  goto detach;
 }

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (!VAR_8) {
  FUNC_1("Unexpected success from getsockopt(IP_TOS)");
  goto detach;
 }






 VAR_8 = FUNC_3(VAR_2, VAR_4, "cgroup/getsockopt/child");
 if (VAR_8) {
  FUNC_1("Failed to detach child program");
  goto detach;
 }

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (!VAR_8) {
  FUNC_1("Unexpected success from getsockopt(IP_TOS)");
  goto detach;
 }






 VAR_7 = 0x90;
 VAR_8 = FUNC_4(VAR_5, VAR_1, VAR_0, &VAR_7, 1);
 if (VAR_8 < 0) {
  FUNC_1("Failed to call setsockopt(IP_TOS)");
  goto detach;
 }

 VAR_7 = 0x00;
 VAR_6 = 1;
 VAR_8 = FUNC_0(VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
 if (VAR_8) {
  FUNC_1("Failed to call getsockopt(IP_TOS)");
  goto detach;
 }

 if (VAR_7 != 0xA0) {
  FUNC_1("Unexpected getsockopt 0x%x != 0xA0", VAR_7);
  VAR_8 = -1;
  goto detach;
 }

detach:
 FUNC_3(VAR_2, VAR_4, "cgroup/getsockopt/child");
 FUNC_3(VAR_2, VAR_3, "cgroup/getsockopt/parent");

 return VAR_8;
}
