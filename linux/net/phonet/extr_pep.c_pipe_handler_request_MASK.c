
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {void* error_code; int pipe_handle; void* message_id; void* utid; } ;
struct pep_sock {int pipe_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sock*,void const*,int,int ) ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int *) ;
 struct pnpipehdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, u8 VAR_3, u8 VAR_4,
    const void *VAR_5, int VAR_6)
{
 struct pep_sock *VAR_7 = FUNC_1(VAR_2);
 struct pnpipehdr *VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_9);
 VAR_8->utid = VAR_3;
 VAR_8->message_id = VAR_3;
 VAR_8->pipe_handle = VAR_7->pipe_handle;
 VAR_8->error_code = VAR_4;
 return FUNC_2(VAR_2, VAR_9, ((void*)0));
}
