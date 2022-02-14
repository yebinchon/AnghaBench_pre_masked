
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct msghdr {int msg_iter; } ;
struct l2cap_chan {int dummy; } ;
struct kvec {scalar_t__ iov_len; struct a2mp_cmd* iov_base; } ;
struct amp_mgr {struct l2cap_chan* a2mp_chan; } ;
struct a2mp_cmd {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 struct a2mp_cmd* FUNC_0 (int ,int ,scalar_t__,void*) ;
 int FUNC_1 (int *,int ,struct kvec*,int,scalar_t__) ;
 int FUNC_2 (struct a2mp_cmd*) ;
 int FUNC_3 (struct l2cap_chan*,struct msghdr*,scalar_t__) ;
 int FUNC_4 (struct msghdr*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct amp_mgr *VAR_1, u8 VAR_2, u8 VAR_3, u16 VAR_4, void *VAR_5)
{
 struct l2cap_chan *VAR_6 = VAR_1->a2mp_chan;
 struct a2mp_cmd *VAR_7;
 u16 VAR_8 = VAR_4 + sizeof(*VAR_7);
 struct kvec VAR_9;
 struct msghdr VAR_10;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7)
  return;

 VAR_9.iov_base = VAR_7;
 VAR_9.iov_len = VAR_8;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 FUNC_1(&VAR_10.msg_iter, VAR_0, &VAR_9, 1, VAR_8);

 FUNC_3(VAR_6, &VAR_10, VAR_8);

 FUNC_2(VAR_7);
}
