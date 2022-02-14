
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct wm8350_data {TYPE_1__ hpr; struct wm8350* wm8350; } ;
struct wm8350 {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct wm8350_data *VAR_4 = VAR_3;
 struct wm8350 *VAR_5 = VAR_4->wm8350;


 FUNC_4("WM8350 HPR");


 if (FUNC_0(VAR_5->dev))
  FUNC_2(VAR_5->dev, 250);

 FUNC_3(VAR_1,
      &VAR_4->hpr.work, FUNC_1(200));

 return VAR_0;
}
