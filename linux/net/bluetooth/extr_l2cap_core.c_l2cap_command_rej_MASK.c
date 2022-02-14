
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int info_state; scalar_t__ info_ident; int info_timer; } ;
struct l2cap_cmd_rej_unk {scalar_t__ reason; } ;
struct l2cap_cmd_hdr {scalar_t__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l2cap_conn*) ;

__attribute__((used)) static inline int FUNC_2(struct l2cap_conn *VAR_4,
        struct l2cap_cmd_hdr *VAR_5, u16 VAR_6,
        u8 *VAR_7)
{
 struct l2cap_cmd_rej_unk *VAR_8 = (struct l2cap_cmd_rej_unk *) VAR_7;

 if (VAR_6 < sizeof(*VAR_8))
  return -VAR_0;

 if (VAR_8->reason != VAR_3)
  return 0;

 if ((VAR_4->info_state & VAR_2) &&
     VAR_5->ident == VAR_4->info_ident) {
  FUNC_0(&VAR_4->info_timer);

  VAR_4->info_state |= VAR_1;
  VAR_4->info_ident = 0;

  FUNC_1(VAR_4);
 }

 return 0;
}
