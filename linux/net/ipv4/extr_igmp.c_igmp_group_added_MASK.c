
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_igmp_qrv; int sysctl_igmp_llm_reports; } ;
struct net {TYPE_1__ ipv4; } ;
struct ip_mc_list {int loaded; scalar_t__ sfmode; int crcount; int lock; int unsolicit_count; int multiaddr; struct in_device* interface; } ;
struct in_device {scalar_t__ mr_qrv; scalar_t__ dead; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 scalar_t__ VAR_2 ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct ip_mc_list*,int ) ;
 int FUNC_5 (struct in_device*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ip_mc_list *VAR_3)
{
 struct in_device *VAR_4 = VAR_3->interface;




 if (VAR_3->loaded == 0) {
  VAR_3->loaded = 1;
  FUNC_5(VAR_4, VAR_3->multiaddr);
 }
}
