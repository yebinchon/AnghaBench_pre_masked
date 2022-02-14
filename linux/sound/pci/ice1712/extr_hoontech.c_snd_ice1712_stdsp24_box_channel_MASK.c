
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int gpio_mutex; struct hoontech_spec* spec; } ;
struct hoontech_spec {int * boxbits; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_ice1712*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct snd_ice1712 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct hoontech_spec *VAR_4 = VAR_0->spec;

 FUNC_6(&VAR_0->gpio_mutex);


 FUNC_0(VAR_4->boxbits, VAR_1);
 FUNC_8(VAR_0, VAR_4->boxbits[0]);


 if (VAR_2 == 3)
  FUNC_4(VAR_4->boxbits, 0);
 FUNC_5(VAR_4->boxbits, VAR_3);
 FUNC_8(VAR_0, VAR_4->boxbits[2]);
 FUNC_8(VAR_0, VAR_4->boxbits[3]);

 FUNC_1(VAR_4->boxbits, 1);
 FUNC_2(VAR_4->boxbits, 1);
 FUNC_3(VAR_4->boxbits, 1);
 FUNC_4(VAR_4->boxbits, 1);
 FUNC_8(VAR_0, VAR_4->boxbits[1]);
 FUNC_8(VAR_0, VAR_4->boxbits[2]);
 FUNC_9(100);
 if (VAR_2 == 3) {
  FUNC_4(VAR_4->boxbits, 0);
  FUNC_8(VAR_0, VAR_4->boxbits[2]);
 } else {
  switch (VAR_2) {
  case 0: FUNC_1(VAR_4->boxbits, 0); break;
  case 1: FUNC_2(VAR_4->boxbits, 0); break;
  case 2: FUNC_3(VAR_4->boxbits, 0); break;
  }
  FUNC_8(VAR_0, VAR_4->boxbits[1]);
 }
 FUNC_9(100);
 FUNC_1(VAR_4->boxbits, 1);
 FUNC_2(VAR_4->boxbits, 1);
 FUNC_3(VAR_4->boxbits, 1);
 FUNC_4(VAR_4->boxbits, 1);
 FUNC_8(VAR_0, VAR_4->boxbits[1]);
 FUNC_8(VAR_0, VAR_4->boxbits[2]);
 FUNC_9(100);

 FUNC_5(VAR_4->boxbits, 0);
 FUNC_8(VAR_0, VAR_4->boxbits[2]);

 FUNC_7(&VAR_0->gpio_mutex);
}
