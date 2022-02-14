
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct qtet_spec* spec; } ;
struct qtet_spec {unsigned int cpld; } ;



__attribute__((used)) static unsigned int FUNC_0(struct snd_ice1712 *VAR_0)
{
 struct qtet_spec *VAR_1 = VAR_0->spec;
 return VAR_1->cpld;
}
