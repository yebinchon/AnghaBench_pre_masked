
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int input; int output; int error; } ;
struct rt6_info {TYPE_1__ dst; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rt6_info *VAR_6, u8 VAR_7)
{
 VAR_6->dst.error = FUNC_0(VAR_7);

 switch (VAR_7) {
 case 131:
  VAR_6->dst.output = VAR_1;
  VAR_6->dst.input = VAR_0;
  break;
 case 130:
  VAR_6->dst.output = VAR_5;
  VAR_6->dst.input = VAR_4;
  break;
 case 129:
 case 128:
 default:
  VAR_6->dst.output = VAR_3;
  VAR_6->dst.input = VAR_2;
  break;
 }
}
