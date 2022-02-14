
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * table; } ;
struct lowpan_dev {TYPE_1__ ctx; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lowpan_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5,
     struct dentry *VAR_6, u8 VAR_7)
{
 struct lowpan_dev *VAR_8 = FUNC_3(VAR_5);
 struct dentry *VAR_9;
 char VAR_10[32];

 FUNC_0(VAR_7 > VAR_0);

 FUNC_4(VAR_10, "%d", VAR_7);

 VAR_9 = FUNC_1(VAR_10, VAR_6);

 FUNC_2("active", 0644, VAR_9, &VAR_8->ctx.table[VAR_7],
       &VAR_1);

 FUNC_2("compression", 0644, VAR_9, &VAR_8->ctx.table[VAR_7],
       &VAR_2);

 FUNC_2("prefix", 0644, VAR_9, &VAR_8->ctx.table[VAR_7],
       &VAR_3);

 FUNC_2("prefix_len", 0644, VAR_9, &VAR_8->ctx.table[VAR_7],
       &VAR_4);
}
