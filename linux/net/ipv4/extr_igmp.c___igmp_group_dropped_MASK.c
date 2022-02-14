
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_igmp_llm_reports; } ;
struct net {TYPE_1__ ipv4; } ;
struct ip_mc_list {scalar_t__ multiaddr; int reporter; scalar_t__ loaded; struct in_device* interface; } ;
struct in_device {int dead; int dev; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct in_device*,struct ip_mc_list*,int ) ;
 int FUNC_5 (struct ip_mc_list*) ;
 int FUNC_6 (struct in_device*,struct ip_mc_list*,int ) ;
 int FUNC_7 (struct in_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct ip_mc_list *VAR_2, gfp_t VAR_3)
{
 struct in_device *VAR_4 = VAR_2->interface;





 if (VAR_2->loaded) {
  VAR_2->loaded = 0;
  FUNC_7(VAR_4, VAR_2->multiaddr);
 }
}
