
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ transport_header; scalar_t__ network_header; int mac_header; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, u32 VAR_1, u32 VAR_2)
{
 bool VAR_3 = VAR_0->transport_header == VAR_0->network_header;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (FUNC_1(!VAR_4)) {
  VAR_0->mac_header += VAR_2;
  VAR_0->network_header += VAR_2;
  if (VAR_3)
   VAR_0->transport_header = VAR_0->network_header;
 }

 return VAR_4;
}
