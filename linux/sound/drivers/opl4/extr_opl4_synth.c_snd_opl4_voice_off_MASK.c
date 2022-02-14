
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int off_voices; } ;
struct opl4_voice {int reg_misc; scalar_t__ number; int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct snd_opl4*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_opl4 *VAR_2, struct opl4_voice *VAR_3)
{
 FUNC_0(&VAR_3->list, &VAR_2->off_voices);

 VAR_3->reg_misc &= ~VAR_0;
 FUNC_1(VAR_2, VAR_1 + VAR_3->number, VAR_3->reg_misc);
}
