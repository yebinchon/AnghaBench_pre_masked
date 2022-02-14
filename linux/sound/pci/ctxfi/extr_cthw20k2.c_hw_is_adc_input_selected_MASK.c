
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {scalar_t__ model; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_2, enum ADCSRC VAR_3)
{
 u32 VAR_4;
 if (VAR_2->model == VAR_0) {


  return 1;
 }
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 switch (VAR_3) {
 case 128:
  VAR_4 = (VAR_4 & (0x1 << 14)) ? 1 : 0;
  break;
 case 129:
  VAR_4 = (VAR_4 & (0x1 << 14)) ? 0 : 1;
  break;
 default:
  VAR_4 = 0;
 }
 return VAR_4;
}
