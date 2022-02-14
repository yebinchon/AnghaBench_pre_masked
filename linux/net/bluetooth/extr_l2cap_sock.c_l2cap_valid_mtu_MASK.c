
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_chan {int scid; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct l2cap_chan *VAR_2, u16 VAR_3)
{
 switch (VAR_2->scid) {
 case 128:
  if (VAR_3 < VAR_1)
   return 0;
  break;

 default:
  if (VAR_3 < VAR_0)
   return 0;
 }

 return 1;
}
