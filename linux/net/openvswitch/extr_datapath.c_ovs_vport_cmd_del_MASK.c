
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {scalar_t__ port_no; int dev; struct datapath* dp; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int userhdr; struct nlattr** attrs; } ;
struct datapath {unsigned int max_headroom; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct vport*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vport*) ;
 int VAR_5 ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct vport* FUNC_5 (int ,int ,struct nlattr**) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vport*) ;
 unsigned int FUNC_9 (struct datapath*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,struct sk_buff*,struct genl_info*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct datapath*,unsigned int) ;
 struct sk_buff* FUNC_14 () ;
 int FUNC_15 (struct vport*,struct sk_buff*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 bool VAR_8 = 0;
 struct nlattr **VAR_9 = VAR_7->attrs;
 struct sk_buff *VAR_10;
 struct datapath *VAR_11;
 struct vport *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_14();
 if (!VAR_10)
  return -VAR_1;

 FUNC_10();
 VAR_12 = FUNC_5(FUNC_16(VAR_6->sk), VAR_7->userhdr, VAR_9);
 VAR_14 = FUNC_2(VAR_12);
 if (FUNC_1(VAR_12))
  goto exit_unlock_free;

 if (VAR_12->port_no == VAR_3) {
  VAR_14 = -VAR_0;
  goto exit_unlock_free;
 }

 VAR_14 = FUNC_15(VAR_12, VAR_10, FUNC_3(VAR_7),
          VAR_7->snd_portid, VAR_7->snd_seq, 0,
          VAR_4, VAR_2);
 FUNC_0(VAR_14 < 0);


 VAR_11 = VAR_12->dp;
 if (FUNC_6(VAR_12->dev) == VAR_11->max_headroom)
  VAR_8 = 1;

 FUNC_7(VAR_12->dev);
 FUNC_8(VAR_12);

 if (VAR_8) {
  VAR_13 = FUNC_9(VAR_11);

  if (VAR_13 < VAR_11->max_headroom)
   FUNC_13(VAR_11, VAR_13);
 }
 FUNC_12();

 FUNC_11(&VAR_5, VAR_10, VAR_7);
 return 0;

exit_unlock_free:
 FUNC_12();
 FUNC_4(VAR_10);
 return VAR_14;
}
