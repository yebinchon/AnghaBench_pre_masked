
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; struct net_device* dev; } ;
struct TYPE_4__ {unsigned int logflags; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
struct nf_loginfo {scalar_t__ type; TYPE_2__ u; } ;
struct nf_log_buf {int dummy; } ;
struct net_device {int type; unsigned int hard_header_len; } ;
struct TYPE_6__ {int h_proto; int h_dest; int h_source; } ;



 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct nf_log_buf*,char*,...) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_4(struct nf_log_buf *VAR_2,
       const struct nf_loginfo *VAR_3,
       const struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 unsigned int VAR_6 = 0;

 if (VAR_3->type == VAR_1)
  VAR_6 = VAR_3->u.log.logflags;

 if (!(VAR_6 & VAR_0))
  goto fallback;

 switch (VAR_5->type) {
 case 128:
  FUNC_1(VAR_2, "MACSRC=%pM MACDST=%pM MACPROTO=%04x ",
          FUNC_0(VAR_4)->h_source, FUNC_0(VAR_4)->h_dest,
          FUNC_2(FUNC_0(VAR_4)->h_proto));
  return;
 default:
  break;
 }

fallback:
 FUNC_1(VAR_2, "MAC=");
 if (VAR_5->hard_header_len &&
     VAR_4->mac_header != VAR_4->network_header) {
  const unsigned char *VAR_7 = FUNC_3(VAR_4);
  unsigned int VAR_8;

  FUNC_1(VAR_2, "%02x", *VAR_7++);
  for (VAR_8 = 1; VAR_8 < VAR_5->hard_header_len; VAR_8++, VAR_7++)
   FUNC_1(VAR_2, ":%02x", *VAR_7);
 }
 FUNC_1(VAR_2, " ");
}
