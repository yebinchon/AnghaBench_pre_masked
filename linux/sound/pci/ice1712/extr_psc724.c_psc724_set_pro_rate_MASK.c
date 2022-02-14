
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct psc724_spec* spec; } ;
struct psc724_spec {int wm8766; int wm8776; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_0, unsigned int VAR_1)
{
 struct psc724_spec *VAR_2 = VAR_0->spec;

 FUNC_1(&VAR_2->wm8776);
 FUNC_0(&VAR_2->wm8766);
}
