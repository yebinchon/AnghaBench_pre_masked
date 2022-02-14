
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int rev; int boot_work; int * ops; scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct wm_adsp*,char*,int) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct wm_adsp*) ;

int FUNC_4(struct wm_adsp *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 switch (VAR_4->rev) {
 case 0:




  VAR_5 = FUNC_2(VAR_4->regmap, VAR_4->base + VAR_0,
      VAR_1, 0);
  if (VAR_5) {
   FUNC_1(VAR_4,
     "Failed to clear memory retention: %d\n", VAR_5);
   return VAR_5;
  }

  VAR_4->ops = &VAR_2[0];
  break;
 case 1:
  VAR_4->ops = &VAR_2[1];
  break;
 default:
  VAR_4->ops = &VAR_2[2];
  break;
 }

 FUNC_0(&VAR_4->boot_work, VAR_3);

 return 0;
}
