
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_ac97c {int reset_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct atmel_ac97c*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct atmel_ac97c *VAR_5)
{
 FUNC_1(VAR_5, VAR_4, 0);
 FUNC_1(VAR_5, VAR_4, VAR_0);
 FUNC_1(VAR_5, VAR_2, 0);
 FUNC_1(VAR_5, VAR_3, 0);

 if (!FUNC_0(VAR_5->reset_pin)) {
  FUNC_2(VAR_5->reset_pin, 0);

  FUNC_3(2);
  FUNC_2(VAR_5->reset_pin, 1);
 } else {
  FUNC_1(VAR_5, VAR_4, VAR_1 | VAR_0);
  FUNC_3(2);
  FUNC_1(VAR_5, VAR_4, VAR_0);
 }
}
