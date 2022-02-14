
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_proto {struct garp_application* data; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct net_device {int garp_port; } ;
struct garp_port {int * applicants; } ;
struct garp_pdu_hdr {int protocol; } ;
struct garp_application {size_t type; } ;
struct garp_applicant {int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct garp_applicant*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(const struct stp_proto *VAR_1, struct sk_buff *VAR_2,
    struct net_device *VAR_3)
{
 struct garp_application *VAR_4 = VAR_1->data;
 struct garp_port *VAR_5;
 struct garp_applicant *VAR_6;
 const struct garp_pdu_hdr *VAR_7;

 VAR_5 = FUNC_6(VAR_3->garp_port);
 if (!VAR_5)
  goto err;
 VAR_6 = FUNC_6(VAR_5->applicants[VAR_4->type]);
 if (!VAR_6)
  goto err;

 if (!FUNC_5(VAR_2, sizeof(*VAR_7)))
  goto err;
 VAR_7 = (struct garp_pdu_hdr *)VAR_2->data;
 if (FUNC_2(&VAR_7->protocol) != FUNC_3(VAR_0))
  goto err;
 FUNC_7(VAR_2, sizeof(*VAR_7));

 FUNC_8(&VAR_6->lock);
 while (VAR_2->len > 0) {
  if (FUNC_1(VAR_6, VAR_2) < 0)
   break;
  if (FUNC_0(VAR_2) < 0)
   break;
 }
 FUNC_9(&VAR_6->lock);
err:
 FUNC_4(VAR_2);
}
