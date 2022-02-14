
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct psc724_spec* spec; } ;
struct psc724_spec {int hp_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0)
{
 struct psc724_spec *VAR_1 = VAR_0->spec;

 FUNC_0(&VAR_1->hp_work);
}
