
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int protocol; TYPE_3__* dev; } ;
struct mrp_pdu_hdr {int version; } ;
struct mrp_applicant {struct sk_buff* pdu; TYPE_2__* app; TYPE_3__* dev; } ;
struct TYPE_6__ {scalar_t__ mtu; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int version; TYPE_1__ pkttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 struct mrp_pdu_hdr* FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct mrp_applicant *VAR_2)
{
 struct sk_buff *VAR_3;
 struct mrp_pdu_hdr *VAR_4;

 VAR_3 = FUNC_2(VAR_2->dev->mtu + FUNC_0(VAR_2->dev),
   VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = VAR_2->dev;
 VAR_3->protocol = VAR_2->app->pkttype.type;
 FUNC_3(VAR_3, FUNC_0(VAR_2->dev));
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
 VAR_4->version = VAR_2->app->version;

 VAR_2->pdu = VAR_3;
 return 0;
}
