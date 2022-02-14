
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int data; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct igmpv3_report {int ngrec; } ;
struct igmpv3_grec {int grec_type; int grec_nsrcs; int grec_mca; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned char* h_source; } ;


 int VAR_0 ;






 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int ,int,unsigned char const*) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*,int ,int,unsigned char const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 struct igmpv3_report* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct net_bridge *VAR_1,
      struct net_bridge_port *VAR_2,
      struct sk_buff *VAR_3,
      u16 VAR_4)
{
 const unsigned char *VAR_5;
 struct igmpv3_report *VAR_6;
 struct igmpv3_grec *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 __be32 VAR_13;
 u16 VAR_14;

 VAR_6 = FUNC_3(VAR_3);
 VAR_10 = FUNC_5(VAR_6->ngrec);
 VAR_9 = FUNC_6(VAR_3) + sizeof(*VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_9 += sizeof(*VAR_7);
  if (!FUNC_4(VAR_3, VAR_9))
   return -VAR_0;

  VAR_7 = (void *)(VAR_3->data + VAR_9 - sizeof(*VAR_7));
  VAR_13 = VAR_7->grec_mca;
  VAR_11 = VAR_7->grec_type;
  VAR_14 = FUNC_5(VAR_7->grec_nsrcs);

  VAR_9 += VAR_14 * 4;
  if (!FUNC_4(VAR_3, VAR_9))
   return -VAR_0;


  switch (VAR_11) {
  case 128:
  case 129:
  case 130:
  case 131:
  case 133:
  case 132:
   break;

  default:
   continue;
  }

  VAR_5 = FUNC_2(VAR_3)->h_source;
  if ((VAR_11 == 130 ||
       VAR_11 == 128) &&
      VAR_14 == 0) {
   FUNC_1(VAR_1, VAR_2, VAR_13, VAR_4, VAR_5);
  } else {
   VAR_12 = FUNC_0(VAR_1, VAR_2, VAR_13, VAR_4,
        VAR_5);
   if (VAR_12)
    break;
  }
 }

 return VAR_12;
}
