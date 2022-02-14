
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct psc724_spec* spec; } ;
struct psc724_spec {int jack_detect; int hp_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_2, bool VAR_3)
{
 struct psc724_spec *VAR_4 = VAR_2->spec;

 if (VAR_4->jack_detect == VAR_3)
  return;

 VAR_4->jack_detect = VAR_3;
 if (VAR_3) {
  bool VAR_5 = FUNC_4(VAR_2) & VAR_0;
  FUNC_2(VAR_2, VAR_5);
  FUNC_3(&VAR_4->hp_work,
     FUNC_1(VAR_1));
 } else
  FUNC_0(&VAR_4->hp_work);
}
