
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_chan {int dummy; } ;


 struct l2cap_chan* FUNC_0 (struct l2cap_conn*,int ) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct l2cap_chan *FUNC_4(struct l2cap_conn *VAR_0,
        u8 VAR_1)
{
 struct l2cap_chan *VAR_2;

 FUNC_2(&VAR_0->chan_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);
 FUNC_3(&VAR_0->chan_lock);

 return VAR_2;
}
