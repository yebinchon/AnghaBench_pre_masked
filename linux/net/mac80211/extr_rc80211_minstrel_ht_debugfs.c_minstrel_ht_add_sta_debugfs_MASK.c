
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_ht_sta_priv {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int,struct dentry*,struct minstrel_ht_sta_priv*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(void *VAR_2, void *VAR_3, struct dentry *VAR_4)
{
 struct minstrel_ht_sta_priv *VAR_5 = VAR_3;

 FUNC_0("rc_stats", 0444, VAR_4, VAR_5,
       &VAR_1);
 FUNC_0("rc_stats_csv", 0444, VAR_4, VAR_5,
       &VAR_0);
}
