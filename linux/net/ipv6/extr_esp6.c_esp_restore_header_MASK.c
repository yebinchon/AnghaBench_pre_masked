
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ip_esp_hdr {int spi; int seq_no; } ;
typedef int __be32 ;
struct TYPE_2__ {void* tmp; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int * FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 struct ip_esp_hdr *VAR_2 = (void *)(VAR_0->data + VAR_1);
 void *VAR_3 = FUNC_0(VAR_0)->tmp;
 __be32 *VAR_4 = FUNC_1(VAR_3);

 VAR_2->seq_no = VAR_2->spi;
 VAR_2->spi = *VAR_4;
}
