
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int diff_mode; } ;
struct wm8741_priv {TYPE_1__ pdata; } ;
struct wm8741_platform_data {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 struct wm8741_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*,struct wm8741_platform_data const*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct wm8741_priv *VAR_1)
{
 const struct wm8741_platform_data *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (VAR_0->of_node) {
  if (FUNC_2(VAR_0->of_node, "diff-mode", &VAR_3)
    >= 0)
   VAR_1->pdata.diff_mode = VAR_3;
 } else {
  if (VAR_2 != ((void*)0))
   FUNC_1(&VAR_1->pdata, VAR_2, sizeof(VAR_1->pdata));
 }

 return 0;
}
