
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2000_priv {int anc_mode; struct i2c_client* i2c; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wm2000_priv *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->i2c;

 FUNC_0(VAR_6, VAR_4, VAR_1);
 FUNC_0(VAR_6, VAR_4, VAR_2);
 FUNC_0(VAR_6, VAR_3, 0);

 VAR_5->anc_mode = VAR_0;
}
