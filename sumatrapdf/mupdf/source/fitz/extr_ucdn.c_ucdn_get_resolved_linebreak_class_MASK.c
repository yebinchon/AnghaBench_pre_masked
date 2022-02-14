
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int linebreak_class; int category; } ;
typedef TYPE_1__ UCDRecord ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int VAR_6 ;



 TYPE_1__* FUNC_0 (int ) ;

int FUNC_1(uint32_t VAR_7)
{
 const UCDRecord *VAR_8 = FUNC_0(VAR_7);

 switch (VAR_8->linebreak_class)
 {
 case 134:
 case 129:
 case 128:
  return VAR_2;

 case 130:
  if (VAR_8->category == VAR_0 ||
   VAR_8->category == VAR_1)
   return VAR_5;
  return VAR_2;

 case 132:
  return VAR_6;

 case 133:
  return VAR_3;

 case 131:
  return VAR_4;

 default:
  return VAR_8->linebreak_class;
 }
}
