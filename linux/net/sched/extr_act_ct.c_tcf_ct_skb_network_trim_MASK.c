
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int len; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_4__ {int tot_len; } ;
struct TYPE_3__ {int payload_len; } ;




 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 switch (VAR_1) {
 case 129:
  VAR_2 = FUNC_2(FUNC_0(VAR_0)->tot_len);
  break;
 case 128:
  VAR_2 = sizeof(struct ipv6hdr)
   + FUNC_2(FUNC_1(VAR_0)->payload_len);
  break;
 default:
  VAR_2 = VAR_0->len;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_2);

 return VAR_3;
}
