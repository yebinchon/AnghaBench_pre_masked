
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; unsigned char const* head; struct net_device* dev; } ;
struct TYPE_4__ {unsigned int logflags; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
struct nf_loginfo {scalar_t__ type; TYPE_2__ u; } ;
struct nf_log_buf {int dummy; } ;
struct net_device {int type; unsigned int hard_header_len; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_6__ {int h_proto; int h_dest; int h_source; } ;



 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct nf_log_buf*,char*,...) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_4(struct nf_log_buf *VAR_4,
     const struct nf_loginfo *VAR_5,
     const struct sk_buff *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->dev;
 unsigned int VAR_8 = 0;

 if (VAR_5->type == VAR_3)
  VAR_8 = VAR_5->u.log.logflags;

 if (!(VAR_8 & VAR_2))
  goto fallback;

 switch (VAR_7->type) {
 case 128:
  FUNC_1(VAR_4, "MACSRC=%pM MACDST=%pM MACPROTO=%04x ",
         FUNC_0(VAR_6)->h_source, FUNC_0(VAR_6)->h_dest,
         FUNC_2(FUNC_0(VAR_6)->h_proto));
  return;
 default:
  break;
 }

fallback:
 FUNC_1(VAR_4, "MAC=");
 if (VAR_7->hard_header_len &&
     VAR_6->mac_header != VAR_6->network_header) {
  const unsigned char *VAR_9 = FUNC_3(VAR_6);
  unsigned int VAR_10 = VAR_7->hard_header_len;
  unsigned int VAR_11;

  if (VAR_7->type == VAR_0) {
   VAR_9 -= VAR_1;

   if (VAR_9 < VAR_6->head)
    VAR_9 = ((void*)0);
  }

  if (VAR_9 != ((void*)0)) {
   FUNC_1(VAR_4, "%02x", *VAR_9++);
   for (VAR_11 = 1; VAR_11 < VAR_10; VAR_11++)
    FUNC_1(VAR_4, ":%02x", *VAR_9++);
  }
  FUNC_1(VAR_4, " ");

  if (VAR_7->type == VAR_0) {
   const struct iphdr *VAR_12 =
    (struct iphdr *)FUNC_3(VAR_6);
   FUNC_1(VAR_4, "TUNNEL=%pI4->%pI4 ", &VAR_12->saddr,
           &VAR_12->daddr);
  }
 } else {
  FUNC_1(VAR_4, " ");
 }
}
