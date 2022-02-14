
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct chnl_net {int chnl; int state; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 struct chnl_net* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct chnl_net *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(VAR_1);
 VAR_2->state = VAR_0;
 FUNC_1(FUNC_2(VAR_1), &VAR_2->chnl);
 return 0;
}
