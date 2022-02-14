
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct fsl_ssi {int dummy; } ;


 int FUNC_0 (struct fsl_ssi*,unsigned int) ;
 scalar_t__ FUNC_1 (struct fsl_ssi*) ;
 struct fsl_ssi* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 struct fsl_ssi *VAR_2 = FUNC_2(VAR_0);


 if (FUNC_1(VAR_2))
  return 0;

 return FUNC_0(VAR_2, VAR_1);
}
