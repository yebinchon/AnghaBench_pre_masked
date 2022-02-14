
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; TYPE_1__* dev; } ;
struct ifeheadr {void* tlv_data; int metalen; } ;
struct ethhdr {int dummy; } ;
struct TYPE_2__ {int hard_header_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,struct ethhdr*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

void *FUNC_6(struct sk_buff *VAR_1, u16 VAR_2)
{



 int VAR_3 = VAR_2 + VAR_0;
 int VAR_4 = VAR_3 + VAR_1->dev->hard_header_len;
 struct ifeheadr *VAR_5;
 struct ethhdr *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_1, VAR_4);
 if (FUNC_5(VAR_8))
  return ((void*)0);

 VAR_6 = (struct ethhdr *) VAR_1->data;

 FUNC_0(VAR_1, VAR_4);
 FUNC_2(VAR_1->data, VAR_6, VAR_1->dev->hard_header_len);
 FUNC_4(VAR_1);
 VAR_7 += VAR_1->dev->hard_header_len;


 VAR_5 = (struct ifeheadr *) (VAR_1->data + VAR_7);
 VAR_2 += VAR_0;
 VAR_5->metalen = FUNC_1(VAR_2);

 return VAR_5->tlv_data;
}
