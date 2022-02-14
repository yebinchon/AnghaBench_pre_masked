
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int tos; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct ipv6hdr*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0)
{
 struct ipv6hdr *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_0(FUNC_2(VAR_0)->tos))
  FUNC_1(VAR_0, VAR_1);
}
