
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct esp_output_extra {scalar_t__ esphoff; } ;
typedef int __be32 ;
struct TYPE_2__ {void* tmp; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct esp_output_extra* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0)
{
 void *VAR_1 = FUNC_0(VAR_0)->tmp;
 struct esp_output_extra *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0, FUNC_3(VAR_0) + VAR_2->esphoff -
    sizeof(__be32));
}
