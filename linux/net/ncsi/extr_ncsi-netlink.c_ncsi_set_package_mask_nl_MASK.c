
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct TYPE_2__ {int dev; } ;
struct ncsi_dev_priv {int flags; int multi_package; TYPE_1__ ndev; int lock; int package_whitelist; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct ncsi_dev_priv* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8,
        struct genl_info *VAR_9)
{
 struct ncsi_dev_priv *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (!VAR_9 || !VAR_9->attrs)
  return -VAR_0;

 if (!VAR_9->attrs[VAR_3])
  return -VAR_0;

 if (!VAR_9->attrs[VAR_5])
  return -VAR_0;

 VAR_10 = FUNC_2(FUNC_0(FUNC_6(VAR_8->sk)),
          FUNC_5(VAR_9->attrs[VAR_3]));
 if (!VAR_10)
  return -VAR_1;

 FUNC_7(&VAR_10->lock, VAR_11);
 if (FUNC_4(VAR_9->attrs[VAR_4])) {
  if (VAR_10->flags & VAR_6) {
   VAR_10->multi_package = 1;
   VAR_12 = 0;
  } else {
   FUNC_3(VAR_10->ndev.dev,
       "NCSI: Can't use multiple packages without HWA\n");
   VAR_12 = -VAR_2;
  }
 } else {
  VAR_10->multi_package = 0;
  VAR_12 = 0;
 }

 if (!VAR_12)
  VAR_10->package_whitelist =
   FUNC_5(VAR_9->attrs[VAR_5]);
 FUNC_8(&VAR_10->lock, VAR_11);

 if (!VAR_12) {

  if (!(VAR_10->flags & VAR_7))
   FUNC_1(&VAR_10->ndev);
 }

 return VAR_12;
}
