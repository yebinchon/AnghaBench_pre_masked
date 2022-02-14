
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int imtu; int mode; int chan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct l2cap_chan* FUNC_0 () ;
 int FUNC_1 (struct l2cap_chan*) ;

__attribute__((used)) static struct l2cap_chan *FUNC_2(void)
{
 struct l2cap_chan *VAR_2;

 VAR_2 = FUNC_0();
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2);

 VAR_2->chan_type = VAR_0;
 VAR_2->mode = VAR_1;
 VAR_2->imtu = 1280;

 return VAR_2;
}
