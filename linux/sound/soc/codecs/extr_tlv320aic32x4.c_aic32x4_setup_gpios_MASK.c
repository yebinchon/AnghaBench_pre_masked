
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct aic32x4_priv {TYPE_1__* setup; } ;
struct TYPE_2__ {scalar_t__* gpio_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct aic32x4_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_11)
{
 struct aic32x4_priv *VAR_12 = FUNC_2(VAR_11);



 if (VAR_12->setup->gpio_func[0] != VAR_3) {
  FUNC_3(VAR_11, VAR_0,
     VAR_12->setup->gpio_func[0]);
  FUNC_1(VAR_11, VAR_6,
   FUNC_0(VAR_6));
 }


 if (VAR_12->setup->gpio_func[1] != VAR_3) {
  FUNC_3(VAR_11, VAR_1,
     VAR_12->setup->gpio_func[1]);
  FUNC_1(VAR_11, VAR_7,
   FUNC_0(VAR_7));
 }


 if (VAR_12->setup->gpio_func[2] != VAR_3) {
  FUNC_3(VAR_11, VAR_5,
     VAR_12->setup->gpio_func[2]);
  FUNC_1(VAR_11, VAR_8,
   FUNC_0(VAR_8));
 }


 if (VAR_12->setup->gpio_func[3] != VAR_3) {
  FUNC_3(VAR_11, VAR_4,
     VAR_12->setup->gpio_func[3]);
  FUNC_1(VAR_11, VAR_9,
   FUNC_0(VAR_9));
 }


 if (VAR_12->setup->gpio_func[4] != VAR_3) {
  FUNC_3(VAR_11, VAR_2,
     VAR_12->setup->gpio_func[4]);
  FUNC_1(VAR_11, VAR_10,
   FUNC_0(VAR_10));
 }
}
