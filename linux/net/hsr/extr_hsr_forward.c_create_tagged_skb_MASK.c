
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; int csum_start; } ;
struct hsr_port {TYPE_1__* hsr; } ;
struct hsr_frame_info {scalar_t__ is_vlan; } ;
struct TYPE_2__ {int prot_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,struct hsr_frame_info*,struct hsr_port*,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sk_buff *VAR_5,
      struct hsr_frame_info *VAR_6,
      struct hsr_port *VAR_7)
{
 int VAR_8;
 unsigned char *VAR_9, *VAR_10;
 struct sk_buff *VAR_11;


 VAR_11 = FUNC_0(VAR_5, FUNC_3(VAR_5) + VAR_3, VAR_2);
 if (!VAR_11)
  return ((void*)0);
 FUNC_6(VAR_11);

 if (VAR_11->ip_summed == VAR_0)
  VAR_11->csum_start += VAR_3;

 VAR_8 = VAR_1;
 if (VAR_6->is_vlan)
  VAR_8 += VAR_4;

 VAR_10 = FUNC_4(VAR_11);
 VAR_9 = FUNC_5(VAR_11, VAR_3);
 FUNC_2(VAR_9, VAR_10, VAR_8);
 FUNC_6(VAR_11);

 FUNC_1(VAR_11, VAR_6, VAR_7, VAR_7->hsr->prot_version);

 return VAR_11;
}
