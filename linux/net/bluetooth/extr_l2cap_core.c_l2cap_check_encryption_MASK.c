
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {scalar_t__ chan_type; scalar_t__ sec_level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct l2cap_chan *VAR_6, u8 VAR_7)
{
 if (VAR_6->chan_type != VAR_4)
  return;

 if (VAR_7 == 0x00) {
  if (VAR_6->sec_level == VAR_2) {
   FUNC_1(VAR_6, VAR_5);
  } else if (VAR_6->sec_level == VAR_1 ||
      VAR_6->sec_level == VAR_0)
   FUNC_2(VAR_6, VAR_3);
 } else {
  if (VAR_6->sec_level == VAR_2)
   FUNC_0(VAR_6);
 }
}
