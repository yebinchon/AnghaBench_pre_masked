
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct psc724_spec* spec; } ;
struct psc724_spec {int jack_detect; } ;



__attribute__((used)) static bool FUNC_0(struct snd_ice1712 *VAR_0)
{
 struct psc724_spec *VAR_1 = VAR_0->spec;

 return VAR_1->jack_detect;
}
