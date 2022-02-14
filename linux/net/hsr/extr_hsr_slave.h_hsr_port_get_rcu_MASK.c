
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_handler_data; } ;
struct hsr_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device const*) ;
 struct hsr_port* FUNC_1 (int ) ;

__attribute__((used)) static inline struct hsr_port *FUNC_2(const struct net_device *VAR_0)
{
 return FUNC_0(VAR_0) ?
    FUNC_1(VAR_0->rx_handler_data) : ((void*)0);
}
