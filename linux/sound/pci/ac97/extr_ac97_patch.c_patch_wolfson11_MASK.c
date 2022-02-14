
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int flags; int * build_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct snd_ac97 * VAR_7)
{

 VAR_7->build_ops = &VAR_6;

 VAR_7->flags |= VAR_3 | VAR_5 | VAR_1 |
  VAR_2 | VAR_4 | VAR_0;

 return 0;
}
