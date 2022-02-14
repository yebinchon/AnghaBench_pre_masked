
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct ipt_ip {scalar_t__ proto; int flags; int outiface_mask; int outiface; int iniface_mask; int iniface; TYPE_4__ dst; TYPE_3__ dmsk; TYPE_2__ src; TYPE_1__ smsk; } ;
struct iphdr {int saddr; int daddr; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ipt_ip const*,int ,int) ;
 unsigned long FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(const struct iphdr *VAR_7,
  const char *VAR_8,
  const char *VAR_9,
  const struct ipt_ip *VAR_10,
  int VAR_11)
{
 unsigned long VAR_12;

 if (FUNC_0(VAR_10, VAR_4,
      (VAR_7->saddr & VAR_10->smsk.s_addr) != VAR_10->src.s_addr) ||
     FUNC_0(VAR_10, VAR_1,
      (VAR_7->daddr & VAR_10->dmsk.s_addr) != VAR_10->dst.s_addr))
  return 0;

 VAR_12 = FUNC_1(VAR_8, VAR_10->iniface, VAR_10->iniface_mask);

 if (FUNC_0(VAR_10, VAR_5, VAR_12 != 0))
  return 0;

 VAR_12 = FUNC_1(VAR_9, VAR_10->outiface, VAR_10->outiface_mask);

 if (FUNC_0(VAR_10, VAR_6, VAR_12 != 0))
  return 0;


 if (VAR_10->proto &&
     FUNC_0(VAR_10, VAR_3, VAR_7->protocol != VAR_10->proto))
  return 0;



 if (FUNC_0(VAR_10, VAR_2,
      (VAR_10->flags & VAR_0) && !VAR_11))
  return 0;

 return 1;
}
