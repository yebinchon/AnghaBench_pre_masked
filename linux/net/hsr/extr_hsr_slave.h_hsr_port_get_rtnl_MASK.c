
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_handler_data; } ;
struct hsr_port {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 struct hsr_port* FUNC_2 (int ) ;

__attribute__((used)) static inline struct hsr_port *FUNC_3(const struct net_device *VAR_0)
{
 FUNC_0();
 return FUNC_1(VAR_0) ?
    FUNC_2(VAR_0->rx_handler_data) : ((void*)0);
}
