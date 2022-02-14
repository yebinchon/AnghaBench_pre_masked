
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct qtet_spec* spec; } ;
struct qtet_spec {unsigned int scr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_1, unsigned int VAR_2)
{
 struct qtet_spec *VAR_3 = VAR_1->spec;
 FUNC_0(VAR_1, VAR_0, VAR_2);
 VAR_3->scr = VAR_2;
}
