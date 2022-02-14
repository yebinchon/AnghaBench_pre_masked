
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct netns_ipvs {int nullsvc_counter; int net; int ftpsvc_counter; } ;
struct ip_vs_service {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,union nf_inet_addr const*) ;
 int FUNC_1 (int,char*,scalar_t__,int ,int ,scalar_t__,char*) ;
 struct ip_vs_service* FUNC_2 (struct netns_ipvs*,int,scalar_t__,union nf_inet_addr const*,scalar_t__) ;
 struct ip_vs_service* FUNC_3 (struct netns_ipvs*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

struct ip_vs_service *
FUNC_8(struct netns_ipvs *VAR_3, int VAR_4, __u32 VAR_5, __u16 VAR_6,
     const union nf_inet_addr *VAR_7, __be16 VAR_8)
{
 struct ip_vs_service *VAR_9;




 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_9)
   goto out;
 }





 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);

 if (!VAR_9 && VAR_6 == VAR_2 &&
     FUNC_4(&VAR_3->ftpsvc_counter) &&
     (VAR_8 == VAR_0 || FUNC_7(VAR_8) >= FUNC_5(VAR_3->net))) {




  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_1);
 }

 if (VAR_9 == ((void*)0)
     && FUNC_4(&VAR_3->nullsvc_counter)) {



  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, 0);
 }

  out:
 FUNC_1(9, "lookup service: fwm %u %s %s:%u %s\n",
        VAR_5, FUNC_6(VAR_6),
        FUNC_0(VAR_4, VAR_7), FUNC_7(VAR_8),
        VAR_9 ? "hit" : "not hit");

 return VAR_9;
}
