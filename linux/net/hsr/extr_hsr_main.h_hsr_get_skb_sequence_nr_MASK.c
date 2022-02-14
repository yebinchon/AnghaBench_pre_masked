
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sequence_nr; } ;
struct hsr_ethhdr {TYPE_1__ hsr_tag; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline u16 FUNC_2(struct sk_buff *VAR_0)
{
 struct hsr_ethhdr *VAR_1;

 VAR_1 = (struct hsr_ethhdr *)FUNC_1(VAR_0);
 return FUNC_0(VAR_1->hsr_tag.sequence_nr);
}
