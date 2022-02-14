
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {int anc_active; scalar_t__ spk_ena; int anc_eng_ena; struct i2c_client* i2c; } ;
struct i2c_client {int dev; } ;
typedef enum wm2000_anc_mode { ____Placeholder_wm2000_anc_mode } wm2000_anc_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ,int,int ) ;
 int FUNC_1 (struct wm2000_priv*,int) ;

__attribute__((used)) static int FUNC_2(struct wm2000_priv *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->i2c;
 enum wm2000_anc_mode VAR_5;

 if (VAR_3->anc_eng_ena && VAR_3->spk_ena)
  if (VAR_3->anc_active)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2;

 FUNC_0(&VAR_4->dev, "Set mode %d (enabled %d, mute %d, active %d)\n",
  VAR_5, VAR_3->anc_eng_ena, !VAR_3->spk_ena,
  VAR_3->anc_active);

 return FUNC_1(VAR_3, VAR_5);
}
