
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int data0; int pipe_handle; int message_id; scalar_t__ utid; } ;
struct pep_sock {int pipe_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct sock*,int *,int ,int ) ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int *) ;
 struct pnpipehdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_4)
{
 struct pep_sock *VAR_5 = FUNC_1(VAR_4);
 struct pnpipehdr *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_4, ((void*)0), 0, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_7);
 VAR_6->utid = 0;
 VAR_6->message_id = VAR_3;
 VAR_6->pipe_handle = VAR_5->pipe_handle;
 VAR_6->data0 = VAR_2;
 return FUNC_2(VAR_4, VAR_7, ((void*)0));
}
