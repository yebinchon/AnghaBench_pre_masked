
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_info_rsp {int * data; int result; int type; } ;
struct l2cap_info_req {int type; } ;
struct l2cap_conn {scalar_t__ info_ident; int info_state; int feat_mask; int remote_fixed_chan; int info_timer; } ;
struct l2cap_cmd_hdr {scalar_t__ ident; } ;
typedef int req ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct l2cap_conn*) ;
 scalar_t__ FUNC_6 (struct l2cap_conn*) ;
 int FUNC_7 (struct l2cap_conn*,scalar_t__,int ,int,struct l2cap_info_req*) ;

__attribute__((used)) static inline int FUNC_8(struct l2cap_conn *VAR_5,
     struct l2cap_cmd_hdr *VAR_6, u16 VAR_7,
     u8 *VAR_8)
{
 struct l2cap_info_rsp *VAR_9 = (struct l2cap_info_rsp *) VAR_8;
 u16 VAR_10, VAR_11;

 if (VAR_7 < sizeof(*VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9->type);
 VAR_11 = FUNC_1(VAR_9->result);

 FUNC_0("type 0x%4.4x result 0x%2.2x", VAR_10, VAR_11);


 if (VAR_6->ident != VAR_5->info_ident ||
     VAR_5->info_state & VAR_2)
  return 0;

 FUNC_2(&VAR_5->info_timer);

 if (VAR_11 != VAR_4) {
  VAR_5->info_state |= VAR_2;
  VAR_5->info_ident = 0;

  FUNC_5(VAR_5);

  return 0;
 }

 switch (VAR_10) {
 case 129:
  VAR_5->feat_mask = FUNC_4(VAR_9->data);

  if (VAR_5->feat_mask & VAR_1) {
   struct l2cap_info_req VAR_12;
   VAR_12.type = FUNC_3(128);

   VAR_5->info_ident = FUNC_6(VAR_5);

   FUNC_7(VAR_5, VAR_5->info_ident,
           VAR_3, sizeof(VAR_12), &VAR_12);
  } else {
   VAR_5->info_state |= VAR_2;
   VAR_5->info_ident = 0;

   FUNC_5(VAR_5);
  }
  break;

 case 128:
  VAR_5->remote_fixed_chan = VAR_9->data[0];
  VAR_5->info_state |= VAR_2;
  VAR_5->info_ident = 0;

  FUNC_5(VAR_5);
  break;
 }

 return 0;
}
