
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netns_ipvs {int net; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct TYPE_4__ {int rt_flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*,int ) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct netns_ipvs*) ;

__attribute__((used)) static int FUNC_5(struct netns_ipvs *VAR_5, int VAR_6,
     struct sk_buff *VAR_7, unsigned int VAR_8)
{
 if (!FUNC_4(VAR_5))
  return 0;

 if (VAR_2 == VAR_8)
  return 0;
  if (!(FUNC_3(VAR_7)->rt_flags & VAR_3) &&
      FUNC_1(VAR_5->net, VAR_7, VAR_4) != 0)
   return 1;

 return 0;
}
