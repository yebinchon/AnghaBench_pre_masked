
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct aaci* private_data; } ;
struct amba_device {int dummy; } ;
struct aaci {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct snd_card* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct amba_device *VAR_1)
{
 struct snd_card *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  struct aaci *VAR_3 = VAR_2->private_data;
  FUNC_3(0, VAR_3->base + VAR_0);

  FUNC_2(VAR_2);
  FUNC_1(VAR_1);
 }

 return 0;
}
