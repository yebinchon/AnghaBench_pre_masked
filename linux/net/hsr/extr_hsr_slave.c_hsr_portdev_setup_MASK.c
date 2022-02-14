
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hsr_port {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct net_device*,int ,struct hsr_port*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct hsr_port *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1);
 VAR_3 = FUNC_3(VAR_1, 1);
 if (VAR_3)
  goto fail_promiscuity;






 VAR_3 = FUNC_4(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  goto fail_rx_handler;
 FUNC_0(VAR_1);

 return 0;

fail_rx_handler:
 FUNC_3(VAR_1, -1);
fail_promiscuity:
 FUNC_2(VAR_1);

 return VAR_3;
}
