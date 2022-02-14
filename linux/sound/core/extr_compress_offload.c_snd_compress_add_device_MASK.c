
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr {int card; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_compr *VAR_1)
{
 int VAR_2;

 if (!VAR_1->card)
  return -VAR_0;


 VAR_2 = FUNC_1(VAR_1->card);
 if (VAR_2)
  goto out;
 return 0;

out:
 FUNC_0("failed with %d\n", VAR_2);
 return VAR_2;

}
