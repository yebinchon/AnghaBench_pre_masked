
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int * rates; int ext_id; int flags; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_ac97 * VAR_5)
{
 VAR_5->build_ops = &VAR_4;
 VAR_5->flags |= VAR_0;
        VAR_5->ext_id |= VAR_1;
 VAR_5->rates[VAR_2] = VAR_3;
 return 0;
}
