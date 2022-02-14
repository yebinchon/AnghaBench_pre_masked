
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct l2cap_chan*,int *,int *,int ) ;

void FUNC_1(struct l2cap_chan *VAR_3, int VAR_4)
{
 u8 VAR_5;

 if (VAR_3->mode != VAR_2)
  return;

 VAR_5 = VAR_4 ? VAR_1 : VAR_0;
 FUNC_0(VAR_3, ((void*)0), ((void*)0), VAR_5);
}
