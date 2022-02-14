
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {scalar_t__ master_bias_users; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wcd9335_codec *VAR_6)
{
 if (VAR_6->master_bias_users <= 0)
  return -VAR_0;

 VAR_6->master_bias_users--;
 if (VAR_6->master_bias_users == 0) {
  FUNC_0(VAR_6->regmap, VAR_1,
    VAR_3,
    VAR_2);
  FUNC_0(VAR_6->regmap, VAR_1,
    VAR_4,
    VAR_5);
 }
 return 0;
}
