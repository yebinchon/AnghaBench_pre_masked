
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int off_voices; } ;
struct opl4_voice {int reg_misc; scalar_t__ number; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct snd_opl4*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct snd_opl4 *VAR_3, struct opl4_voice *VAR_4)
{
 FUNC_0(&VAR_4->list, &VAR_3->off_voices);

 VAR_4->reg_misc = (VAR_4->reg_misc & ~VAR_1) | VAR_0;
 FUNC_1(VAR_3, VAR_2 + VAR_4->number, VAR_4->reg_misc);
}
