
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int dummy; } ;
struct ar8327_led_entry {int shift; int reg; } ;
typedef enum ar8327_led_pattern { ____Placeholder_ar8327_led_pattern } ar8327_led_pattern ;


 int FUNC_0 (int ) ;
 struct ar8327_led_entry* VAR_0 ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_1, unsigned int VAR_2,
         enum ar8327_led_pattern VAR_3)
{
 const struct ar8327_led_entry *VAR_4;

 VAR_4 = &VAR_0[VAR_2];
 FUNC_1(VAR_1, FUNC_0(VAR_4->reg),
     (3 << VAR_4->shift), VAR_3 << VAR_4->shift);
}
