
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_priv {int capture; int playback; } ;
struct fsi_master {struct fsi_priv fsib; struct fsi_priv fsia; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct fsi_priv*,int *,struct device*) ;
 struct fsi_master* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct fsi_master *VAR_1 = FUNC_1(VAR_0);
 struct fsi_priv *VAR_2 = &VAR_1->fsia;
 struct fsi_priv *VAR_3 = &VAR_1->fsib;

 FUNC_0(VAR_2, &VAR_2->playback, VAR_0);
 FUNC_0(VAR_2, &VAR_2->capture, VAR_0);

 FUNC_0(VAR_3, &VAR_3->playback, VAR_0);
 FUNC_0(VAR_3, &VAR_3->capture, VAR_0);

 return 0;
}
