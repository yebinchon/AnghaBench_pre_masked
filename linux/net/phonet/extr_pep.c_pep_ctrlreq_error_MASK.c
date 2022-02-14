
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int * data; int data0; int pipe_handle; int message_id; int utid; int pep_type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct sock*,int *,int,int ) ;
 int FUNC_1 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,struct sockaddr_pn*) ;
 void* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, struct sk_buff *VAR_4, u8 VAR_5,
    gfp_t VAR_6)
{
 const struct pnpipehdr *VAR_7 = FUNC_3(VAR_4);
 struct sk_buff *VAR_8;
 struct pnpipehdr *VAR_9;
 struct sockaddr_pn VAR_10;
 u8 VAR_11[4] = {
  VAR_7->pep_type,
  VAR_5,
  VAR_1, VAR_1,
 };

 VAR_8 = FUNC_0(VAR_3, VAR_11, 4, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->utid = VAR_7->utid;
 VAR_9->message_id = VAR_2;
 VAR_9->pipe_handle = VAR_7->pipe_handle;
 VAR_9->data0 = VAR_7->data[0];

 FUNC_1(VAR_4, &VAR_10);
 return FUNC_2(VAR_3, VAR_8, &VAR_10);
}
