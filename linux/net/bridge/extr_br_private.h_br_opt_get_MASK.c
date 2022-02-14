
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int options; } ;
typedef enum net_bridge_opts { ____Placeholder_net_bridge_opts } net_bridge_opts ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(const struct net_bridge *VAR_0,
        enum net_bridge_opts VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->options);
}
