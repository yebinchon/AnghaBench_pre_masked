
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock {int protocol; int type; int family; } ;
typedef int fmt2 ;
typedef int fmt ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int,int,...) ;

int FUNC_2(struct bpf_sock *VAR_3)
{
 char VAR_4[] = "socket: family %d type %d protocol %d\n";
 char VAR_5[] = "socket: uid %u gid %u\n";
 __u64 VAR_6 = FUNC_0();
 __u32 VAR_7 = VAR_6 & 0xffffffff;
 __u32 VAR_8 = VAR_6 >> 32;

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_3->family, VAR_3->type, VAR_3->protocol);
 FUNC_1(VAR_5, sizeof(VAR_5), VAR_7, VAR_8);




 if (VAR_3->family == VAR_1 &&
     VAR_3->type == VAR_2 &&
     VAR_3->protocol == VAR_0)
  return 0;

 return 1;
}
