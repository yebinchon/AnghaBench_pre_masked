
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ag71xx {unsigned int max_frame_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct ag71xx*,int ,unsigned int) ;
 struct ag71xx* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct ag71xx *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_4 < 68 || VAR_6 > VAR_5->max_frame_len)
  return -VAR_2;

 if (FUNC_3(VAR_3))
  return -VAR_1;

 VAR_3->mtu = VAR_4;
 FUNC_1(VAR_5, VAR_0,
    FUNC_0(VAR_3->mtu));

 return 0;
}
