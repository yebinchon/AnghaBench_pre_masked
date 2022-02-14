
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int VAR_3 ;
 int FUNC_2 (struct snd_ac97*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_4)
{
 FUNC_1(VAR_4);
 VAR_4->build_ops = &VAR_3;
 FUNC_2(VAR_4, VAR_1, VAR_0, VAR_0);
 VAR_4->flags |= VAR_2;
 FUNC_0(VAR_4);
 return 0;
}
