
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ id; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {struct fsi_priv fsib; struct fsi_priv fsia; } ;


 struct fsi_master* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static struct fsi_priv *FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct fsi_master *VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->id == 0)
  return &VAR_1->fsia;
 else
  return &VAR_1->fsib;
}
