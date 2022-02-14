
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum sprd_mcdt_fifo_int { ____Placeholder_sprd_mcdt_fifo_int } sprd_mcdt_fifo_int ;



__attribute__((used)) static u32 FUNC_0(u8 VAR_0,
        enum sprd_mcdt_fifo_int VAR_1)
{
 switch (VAR_0) {
 case 0:
 case 4:
 case 8:
  return VAR_1;

 case 1:
 case 5:
 case 9:
  return 8 + VAR_1;

 case 2:
 case 6:
  return 16 + VAR_1;

 case 3:
 case 7:
  return 24 + VAR_1;

 default:
  return 0;
 }
}
