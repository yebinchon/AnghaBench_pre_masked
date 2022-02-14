
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int error_code; int pipe_handle; scalar_t__ message_id; int utid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sock*,void const*,int,int ) ;
 int FUNC_1 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,struct sockaddr_pn*) ;
 void* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2, u8 VAR_3,
   const void *VAR_4, int VAR_5, gfp_t VAR_6)
{
 const struct pnpipehdr *VAR_7 = FUNC_3(VAR_2);
 struct pnpipehdr *VAR_8;
 struct sk_buff *VAR_9;
 struct sockaddr_pn VAR_10;

 VAR_9 = FUNC_0(VAR_1, VAR_4, VAR_5, VAR_6);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_9);
 VAR_8->utid = VAR_7->utid;
 VAR_8->message_id = VAR_7->message_id + 1;
 VAR_8->pipe_handle = VAR_7->pipe_handle;
 VAR_8->error_code = VAR_3;

 FUNC_1(VAR_2, &VAR_10);
 return FUNC_2(VAR_1, VAR_9, &VAR_10);
}
