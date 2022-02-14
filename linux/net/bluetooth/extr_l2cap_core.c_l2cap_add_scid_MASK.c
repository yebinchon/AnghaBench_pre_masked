
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int scid; int chan_type; int omtu; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct l2cap_chan *VAR_3, __u16 VAR_4)
{
 FUNC_0(&VAR_2);


 VAR_3->omtu = VAR_1;
 VAR_3->chan_type = VAR_0;

 VAR_3->scid = VAR_4;

 FUNC_1(&VAR_2);

 return 0;
}
