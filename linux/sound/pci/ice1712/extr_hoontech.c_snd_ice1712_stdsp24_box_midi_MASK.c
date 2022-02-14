
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; struct hoontech_spec* spec; } ;
struct hoontech_spec {int * boxbits; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_ice1712*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct snd_ice1712 *VAR_0, int VAR_1, int VAR_2)
{
 struct hoontech_spec *VAR_3 = VAR_0->spec;

 FUNC_4(&VAR_0->gpio_mutex);


 FUNC_0(VAR_3->boxbits, VAR_1);
 FUNC_6(VAR_0, VAR_3->boxbits[0]);

 FUNC_2(VAR_3->boxbits, 1);
 FUNC_1(VAR_3->boxbits, VAR_2);
 FUNC_6(VAR_0, VAR_3->boxbits[2]);
 FUNC_6(VAR_0, VAR_3->boxbits[3]);

 FUNC_7(100);

 FUNC_2(VAR_3->boxbits, 0);
 FUNC_6(VAR_0, VAR_3->boxbits[2]);

 FUNC_3(10);

 FUNC_2(VAR_3->boxbits, 1);
 FUNC_6(VAR_0, VAR_3->boxbits[2]);

 FUNC_5(&VAR_0->gpio_mutex);
}
