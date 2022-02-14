
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct smp_chan {int security_timer; } ;
struct msghdr {int msg_iter; } ;
struct l2cap_conn {struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct kvec {int iov_len; int * iov_base; } ;
typedef int msg ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,struct kvec*,int,int) ;
 int FUNC_3 (struct l2cap_chan*,struct msghdr*,int) ;
 int FUNC_4 (struct msghdr*,int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct l2cap_conn *VAR_2, u8 VAR_3, u16 VAR_4, void *VAR_5)
{
 struct l2cap_chan *VAR_6 = VAR_2->smp;
 struct smp_chan *VAR_7;
 struct kvec VAR_8[2];
 struct msghdr VAR_9;

 if (!VAR_6)
  return;

 FUNC_0("code 0x%2.2x", VAR_3);

 VAR_8[0].iov_base = &VAR_3;
 VAR_8[0].iov_len = 1;

 VAR_8[1].iov_base = VAR_5;
 VAR_8[1].iov_len = VAR_4;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 FUNC_2(&VAR_9.msg_iter, VAR_1, VAR_8, 2, 1 + VAR_4);

 FUNC_3(VAR_6, &VAR_9, 1 + VAR_4);

 if (!VAR_6->data)
  return;

 VAR_7 = VAR_6->data;

 FUNC_1(&VAR_7->security_timer);
 FUNC_5(&VAR_7->security_timer, VAR_0);
}
