
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_flags {int mask; int flags; } ;
struct ip_vs_service_user_kern {int flags; int netmask; void* timeout; int * pe_name; int * sched_name; int port; struct ip_vs_flags addr; void* protocol; void* af; void* fwmark; } ;
struct ip_vs_service {int flags; } ;
typedef int flags ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 struct ip_vs_service* FUNC_0 (struct netns_ipvs*,void*,void*,struct ip_vs_flags*,int ) ;
 struct ip_vs_service* FUNC_1 (struct netns_ipvs*,void*,void*) ;
 int FUNC_2 (void*) ;
 int VAR_14 ;
 int FUNC_3 (struct ip_vs_service_user_kern*,int ,int) ;
 int * FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 void* FUNC_7 (struct nlattr*) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct ip_vs_flags*,struct nlattr*,int) ;
 scalar_t__ FUNC_10 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct netns_ipvs *VAR_15,
        struct ip_vs_service_user_kern *VAR_16,
        struct nlattr *VAR_17, bool VAR_18,
        struct ip_vs_service **VAR_19)
{
 struct nlattr *VAR_20[VAR_7 + 1];
 struct nlattr *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 struct ip_vs_service *VAR_26;


 if (VAR_17 == ((void*)0) ||
     FUNC_10(VAR_20, VAR_7, VAR_17, VAR_14, ((void*)0)))
  return -VAR_1;

 VAR_21 = VAR_20[VAR_4];
 VAR_24 = VAR_20[VAR_11];
 VAR_25 = VAR_20[VAR_3];
 VAR_22 = VAR_20[VAR_10];
 VAR_23 = VAR_20[VAR_6];

 if (!(VAR_21 && (VAR_23 || (VAR_22 && VAR_24 && VAR_25))))
  return -VAR_1;

 FUNC_3(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->af = FUNC_7(VAR_21);
 if (!FUNC_2(VAR_16->af))
  return -VAR_0;

 if (VAR_23) {
  VAR_16->protocol = VAR_2;
  VAR_16->fwmark = FUNC_8(VAR_23);
 } else {
  VAR_16->protocol = FUNC_7(VAR_24);
  FUNC_9(&VAR_16->addr, VAR_25, sizeof(VAR_16->addr));
  VAR_16->port = FUNC_5(VAR_22);
  VAR_16->fwmark = 0;
 }

 FUNC_11();
 if (VAR_16->fwmark)
  VAR_26 = FUNC_1(VAR_15, VAR_16->af, VAR_16->fwmark);
 else
  VAR_26 = FUNC_0(VAR_15, VAR_16->af, VAR_16->protocol,
        &VAR_16->addr, VAR_16->port);
 FUNC_12();
 *VAR_19 = VAR_26;


 if (VAR_18) {
  struct nlattr *VAR_27, *VAR_28, *VAR_29, *VAR_30,
         *VAR_31;
  struct ip_vs_flags VAR_32;

  VAR_27 = VAR_20[VAR_12];
  VAR_29 = VAR_20[VAR_9];
  VAR_28 = VAR_20[VAR_5];
  VAR_30 = VAR_20[VAR_13];
  VAR_31 = VAR_20[VAR_8];

  if (!(VAR_27 && VAR_28 && VAR_30 && VAR_31))
   return -VAR_1;

  FUNC_9(&VAR_32, VAR_28, sizeof(VAR_32));


  if (VAR_26)
   VAR_16->flags = VAR_26->flags;


  VAR_16->flags = (VAR_16->flags & ~VAR_32.mask) |
         (VAR_32.flags & VAR_32.mask);
  VAR_16->sched_name = FUNC_4(VAR_27);
  VAR_16->pe_name = VAR_29 ? FUNC_4(VAR_29) : ((void*)0);
  VAR_16->timeout = FUNC_8(VAR_30);
  VAR_16->netmask = FUNC_6(VAR_31);
 }

 return 0;
}
