
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; struct hoontech_spec* spec; } ;
struct hoontech_spec {int * boxbits; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_0, int VAR_1)
{
 struct hoontech_spec *VAR_2 = VAR_0->spec;
 FUNC_1(&VAR_0->gpio_mutex);
 FUNC_0(VAR_2->boxbits, VAR_1);
 FUNC_3(VAR_0, VAR_2->boxbits[3]);
 FUNC_2(&VAR_0->gpio_mutex);
}
