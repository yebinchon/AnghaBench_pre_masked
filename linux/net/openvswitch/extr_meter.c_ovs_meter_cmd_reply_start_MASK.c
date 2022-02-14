
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ovs_header {int dp_ifindex; } ;
struct genl_info {int snd_seq; int snd_portid; struct ovs_header* userhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ovs_header* FUNC_1 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct genl_info *VAR_5, u8 VAR_6,
     struct ovs_header **VAR_7)
{
 struct sk_buff *VAR_8;
 struct ovs_header *VAR_9 = VAR_5->userhdr;

 VAR_8 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 *VAR_7 = FUNC_1(VAR_8, VAR_5->snd_portid,
     VAR_5->snd_seq,
     &VAR_4, 0, VAR_6);
 if (!*VAR_7) {
  FUNC_2(VAR_8);
  return FUNC_0(-VAR_0);
 }
 (*VAR_7)->dp_ifindex = VAR_9->dp_ifindex;

 return VAR_8;
}
