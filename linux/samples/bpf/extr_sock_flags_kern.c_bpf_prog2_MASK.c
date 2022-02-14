
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock {int protocol; int type; int family; } ;
typedef int fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int ,int ) ;

int FUNC_1(struct bpf_sock *VAR_3)
{
 char VAR_4[] = "socket: family %d type %d protocol %d\n";

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_3->family, VAR_3->type, VAR_3->protocol);




 if (VAR_3->family == VAR_1 &&
     VAR_3->type == VAR_2 &&
     VAR_3->protocol == VAR_0)
  return 0;

 return 1;
}
