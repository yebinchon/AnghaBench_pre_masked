
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_igmp_qrv; } ;
struct net {TYPE_1__ ipv4; } ;
struct ip_sf_list {scalar_t__ sf_inaddr; scalar_t__* sf_count; struct ip_sf_list* sf_next; int sf_crcount; scalar_t__ sf_oldin; } ;
struct ip_mc_list {struct ip_sf_list* tomb; struct ip_sf_list* sources; struct in_device* interface; } ;
struct in_device {scalar_t__ mr_qrv; int dev; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct in_device*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct ip_sf_list*) ;

__attribute__((used)) static int FUNC_5(struct ip_mc_list *VAR_3, int VAR_4,
 __be32 *VAR_5)
{
 struct ip_sf_list *VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_7 = ((void*)0);
 for (VAR_6 = VAR_3->sources; VAR_6; VAR_6 = VAR_6->sf_next) {
  if (VAR_6->sf_inaddr == *VAR_5)
   break;
  VAR_7 = VAR_6;
 }
 if (!VAR_6 || VAR_6->sf_count[VAR_4] == 0) {

  return -VAR_0;
 }
 VAR_6->sf_count[VAR_4]--;
 if (VAR_6->sf_count[VAR_4] == 0) {
  FUNC_3(VAR_3->interface);
 }
 if (!VAR_6->sf_count[VAR_2] && !VAR_6->sf_count[VAR_1]) {






  if (VAR_7)
   VAR_7->sf_next = VAR_6->sf_next;
  else
   VAR_3->sources = VAR_6->sf_next;
   FUNC_4(VAR_6);
 }
 return VAR_8;
}
