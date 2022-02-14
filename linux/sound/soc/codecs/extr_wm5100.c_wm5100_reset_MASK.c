
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reset; } ;
struct wm5100_priv {int regmap; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct wm5100_priv *VAR_1)
{
 if (VAR_1->pdata.reset) {
  FUNC_0(VAR_1->pdata.reset, 0);
  FUNC_0(VAR_1->pdata.reset, 1);

  return 0;
 } else {
  return FUNC_1(VAR_1->regmap, VAR_0, 0);
 }
}
