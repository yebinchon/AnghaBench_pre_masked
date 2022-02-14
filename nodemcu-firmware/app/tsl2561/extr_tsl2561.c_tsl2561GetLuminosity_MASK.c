
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ tsl2561Error_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int *) ;

tsl2561Error_t FUNC_4(uint16_t *VAR_8, uint16_t *VAR_9) {
 if (!VAR_6)
  return VAR_1;

 tsl2561Error_t VAR_10 = VAR_2;


 VAR_10 = FUNC_2();
 if (VAR_10)
  return VAR_10;


 switch (VAR_7) {
 case 128:
  FUNC_0(14000);
  break;
 case 129:
  FUNC_0(102000);
  break;
 default:
  FUNC_0(404000);
  break;
 }


 VAR_10 = FUNC_3(
 VAR_0 | VAR_5 | VAR_3, VAR_8);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(
 VAR_0 | VAR_5 | VAR_4, VAR_9);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_1();
 if (VAR_10)
  return VAR_10;

 return VAR_10;
}
