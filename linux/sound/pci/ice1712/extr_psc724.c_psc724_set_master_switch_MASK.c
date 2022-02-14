
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct psc724_spec* spec; } ;
struct psc724_spec {int mute_all; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2);
 struct psc724_spec *VAR_5 = VAR_2->spec;

 VAR_5->mute_all = !VAR_3;
 if (VAR_3)
  VAR_4 &= ~(VAR_0 | VAR_1);
 else
  VAR_4 |= VAR_0 | VAR_1;
 FUNC_1(VAR_2, VAR_4);
}
