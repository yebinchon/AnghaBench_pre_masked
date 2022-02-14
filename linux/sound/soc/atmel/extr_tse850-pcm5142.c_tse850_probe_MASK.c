
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse850_priv {int add_cache; int loop1_cache; int loop2_cache; void* ana; void* loop2; void* loop1; void* add; } ;
struct snd_soc_card {struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 struct tse850_priv* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct snd_soc_card*,struct tse850_priv*) ;
 int FUNC_9 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_4 ;
 int FUNC_10 (struct platform_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct snd_soc_card *VAR_6 = &VAR_4;
 struct device *VAR_7 = VAR_6->dev = &VAR_5->dev;
 struct tse850_priv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_8(VAR_6, VAR_8);

 VAR_9 = FUNC_10(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_7, "failed to init dt info\n");
  return VAR_9;
 }

 VAR_8->add = FUNC_3(VAR_7, "axentia,add", VAR_3);
 if (FUNC_0(VAR_8->add)) {
  if (FUNC_1(VAR_8->add) != -VAR_1)
   FUNC_2(VAR_7, "failed to get 'add' gpio\n");
  return FUNC_1(VAR_8->add);
 }
 VAR_8->add_cache = 1;

 VAR_8->loop1 = FUNC_3(VAR_7, "axentia,loop1", VAR_3);
 if (FUNC_0(VAR_8->loop1)) {
  if (FUNC_1(VAR_8->loop1) != -VAR_1)
   FUNC_2(VAR_7, "failed to get 'loop1' gpio\n");
  return FUNC_1(VAR_8->loop1);
 }
 VAR_8->loop1_cache = 1;

 VAR_8->loop2 = FUNC_3(VAR_7, "axentia,loop2", VAR_3);
 if (FUNC_0(VAR_8->loop2)) {
  if (FUNC_1(VAR_8->loop2) != -VAR_1)
   FUNC_2(VAR_7, "failed to get 'loop2' gpio\n");
  return FUNC_1(VAR_8->loop2);
 }
 VAR_8->loop2_cache = 1;

 VAR_8->ana = FUNC_5(VAR_7, "axentia,ana");
 if (FUNC_0(VAR_8->ana)) {
  if (FUNC_1(VAR_8->ana) != -VAR_1)
   FUNC_2(VAR_7, "failed to get 'ana' regulator\n");
  return FUNC_1(VAR_8->ana);
 }

 VAR_9 = FUNC_7(VAR_8->ana);
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, "failed to enable the 'ana' regulator\n");
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_7, "snd_soc_register_card failed\n");
  goto err_disable_ana;
 }

 return 0;

err_disable_ana:
 FUNC_6(VAR_8->ana);
 return VAR_9;
}
