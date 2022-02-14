
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ag71xx_platform_data {scalar_t__ is_ar724x; scalar_t__ use_flow_control; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ag71xx_platform_data* FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ,int) ;
 int FUNC_2 (struct ag71xx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_16)
{
 struct ag71xx_platform_data *VAR_17 = FUNC_0(VAR_16);
 u32 VAR_18 = VAR_11;


 if (VAR_17->use_flow_control)
  VAR_18 |= VAR_13 | VAR_12;
 FUNC_2(VAR_16, VAR_5, VAR_18);

 FUNC_1(VAR_16, VAR_6,
    VAR_15 | VAR_14);


 FUNC_2(VAR_16, VAR_7, 0);


 FUNC_2(VAR_16, VAR_0, VAR_8);
 if (VAR_17->is_ar724x) {
  FUNC_2(VAR_16, VAR_1, 0x0010ffff);
  FUNC_2(VAR_16, VAR_2, 0x015500aa);
 } else {
  FUNC_2(VAR_16, VAR_1, 0x0fff0000);
  FUNC_2(VAR_16, VAR_2, 0x00001fff);
 }
 FUNC_2(VAR_16, VAR_3, VAR_9);
 FUNC_2(VAR_16, VAR_4, VAR_10);
}
