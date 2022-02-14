
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; struct ovs_header* userhdr; struct nlattr** attrs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 int VAR_2 ;
 int FUNC_2 (struct vport*) ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct vport* FUNC_6 (int ,struct ovs_header*,struct nlattr**) ;
 struct sk_buff* FUNC_7 () ;
 int FUNC_8 (struct vport*,struct sk_buff*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct nlattr **VAR_5 = VAR_4->attrs;
 struct ovs_header *VAR_6 = VAR_4->userhdr;
 struct sk_buff *VAR_7;
 struct vport *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7();
 if (!VAR_7)
  return -VAR_0;

 FUNC_9();
 VAR_8 = FUNC_6(FUNC_11(VAR_3->sk), VAR_6, VAR_5);
 VAR_9 = FUNC_2(VAR_8);
 if (FUNC_1(VAR_8))
  goto exit_unlock_free;
 VAR_9 = FUNC_8(VAR_8, VAR_7, FUNC_3(VAR_4),
          VAR_4->snd_portid, VAR_4->snd_seq, 0,
          VAR_2, VAR_1);
 FUNC_0(VAR_9 < 0);
 FUNC_10();

 return FUNC_4(VAR_7, VAR_4);

exit_unlock_free:
 FUNC_10();
 FUNC_5(VAR_7);
 return VAR_9;
}
