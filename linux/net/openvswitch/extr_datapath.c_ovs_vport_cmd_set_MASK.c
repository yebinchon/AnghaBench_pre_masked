
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* ops; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int userhdr; struct nlattr** attrs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vport*) ;
 int VAR_7 ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct vport* FUNC_5 (int ,int ,struct nlattr**) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,struct sk_buff*,struct genl_info*) ;
 int FUNC_9 () ;
 struct sk_buff* FUNC_10 () ;
 int FUNC_11 (struct vport*,struct sk_buff*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct vport*,struct nlattr*) ;
 int FUNC_13 (struct vport*,struct nlattr*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct nlattr **VAR_10 = VAR_9->attrs;
 struct sk_buff *VAR_11;
 struct vport *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_10();
 if (!VAR_11)
  return -VAR_1;

 FUNC_7();
 VAR_12 = FUNC_5(FUNC_14(VAR_8->sk), VAR_9->userhdr, VAR_10);
 VAR_13 = FUNC_2(VAR_12);
 if (FUNC_1(VAR_12))
  goto exit_unlock_free;

 if (VAR_10[VAR_4] &&
     FUNC_6(VAR_10[VAR_4]) != VAR_12->ops->type) {
  VAR_13 = -VAR_0;
  goto exit_unlock_free;
 }

 if (VAR_10[VAR_3]) {
  VAR_13 = FUNC_12(VAR_12, VAR_10[VAR_3]);
  if (VAR_13)
   goto exit_unlock_free;
 }


 if (VAR_10[VAR_5]) {
  struct nlattr *VAR_14 = VAR_10[VAR_5];

  VAR_13 = FUNC_13(VAR_12, VAR_14);
  if (VAR_13)
   goto exit_unlock_free;
 }

 VAR_13 = FUNC_11(VAR_12, VAR_11, FUNC_3(VAR_9),
          VAR_9->snd_portid, VAR_9->snd_seq, 0,
          VAR_6, VAR_2);
 FUNC_0(VAR_13 < 0);

 FUNC_9();
 FUNC_8(&VAR_7, VAR_11, VAR_9);
 return 0;

exit_unlock_free:
 FUNC_9();
 FUNC_4(VAR_11);
 return VAR_13;
}
