
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; int * rates; int flags; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_ac97 * VAR_6)
{
 VAR_6->build_ops = &VAR_5;
 VAR_6->flags |= VAR_1;
 VAR_6->rates[VAR_3] &= ~VAR_4;
        VAR_6->ext_id |= VAR_2;
 FUNC_0(VAR_6, VAR_0, 0x0080);
 return 0;
}
