
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcp_mem_name ;
struct bpf_sysctl {int dummy; } ;
typedef int name ;


 int FUNC_0 (struct bpf_sysctl*,char*,int,int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static __attribute__((noinline)) int FUNC_2(struct bpf_sysctl *VAR_0)
{
 volatile char VAR_1[] = "net/ipv4/tcp_mem/very_very_very_very_long_pointless_string_to_stress_byte_loop";
 unsigned char VAR_2;
 char VAR_3[64];
 int VAR_4;

 FUNC_1(VAR_3, 0, sizeof(VAR_3));
 VAR_4 = FUNC_0(VAR_0, VAR_3, sizeof(VAR_3), 0);
 if (VAR_4 < 0 || VAR_4 != sizeof(VAR_1) - 1)
  return 0;

#pragma clang loop unroll(disable)
 for (VAR_2 = 0; VAR_2 < sizeof(VAR_1); ++VAR_2)
  if (VAR_3[VAR_2] != VAR_1[VAR_2])
   return 0;

 return 1;
}
