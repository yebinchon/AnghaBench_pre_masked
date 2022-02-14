
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_info_rsp {int* data; void* result; void* type; } ;
typedef struct l2cap_info_rsp u8 ;
typedef int u32 ;
typedef int u16 ;
struct l2cap_info_req {int type; } ;
struct l2cap_conn {int local_fixed_chan; } ;
struct l2cap_cmd_hdr {int ident; } ;
typedef int rsp ;
typedef int buf ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_info_rsp*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int,int*) ;

__attribute__((used)) static inline int FUNC_6(struct l2cap_conn *VAR_14,
     struct l2cap_cmd_hdr *VAR_15, u16 VAR_16,
     u8 *VAR_17)
{
 struct l2cap_info_req *VAR_18 = (struct l2cap_info_req *) VAR_17;
 u16 VAR_19;

 if (VAR_16 != sizeof(*VAR_18))
  return -VAR_0;

 VAR_19 = FUNC_1(VAR_18->type);

 FUNC_0("type 0x%4.4x", VAR_19);

 if (VAR_19 == VAR_10) {
  u8 VAR_20[8];
  u32 VAR_21 = VAR_13;
  struct l2cap_info_rsp *VAR_22 = (struct l2cap_info_rsp *) VAR_20;
  VAR_22->type = FUNC_2(VAR_10);
  VAR_22->result = FUNC_2(VAR_9);
  if (!VAR_12)
   VAR_21 |= VAR_2 | VAR_6
    | VAR_5;
  if (VAR_14->local_fixed_chan & VAR_1)
   VAR_21 |= VAR_3
    | VAR_4;

  FUNC_5(VAR_21, VAR_22->data);
  FUNC_3(VAR_14, VAR_15->ident, VAR_7, sizeof(VAR_20),
          VAR_20);
 } else if (VAR_19 == VAR_11) {
  u8 VAR_23[12];
  struct l2cap_info_rsp *VAR_24 = (struct l2cap_info_rsp *) VAR_23;

  VAR_24->type = FUNC_2(VAR_11);
  VAR_24->result = FUNC_2(VAR_9);
  VAR_24->data[0] = VAR_14->local_fixed_chan;
  FUNC_4(VAR_24->data + 1, 0, 7);
  FUNC_3(VAR_14, VAR_15->ident, VAR_7, sizeof(VAR_23),
          VAR_23);
 } else {
  struct l2cap_info_rsp VAR_25;
  VAR_25.type = FUNC_2(VAR_19);
  VAR_25.result = FUNC_2(VAR_8);
  FUNC_3(VAR_14, VAR_15->ident, VAR_7, sizeof(VAR_25),
          &VAR_25);
 }

 return 0;
}
