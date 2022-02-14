
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int * build_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_2)
{
 FUNC_1(VAR_2);
 VAR_2->build_ops = &VAR_1;
 VAR_2->flags |= VAR_0;


 FUNC_0(VAR_2);

 return 0;
}
