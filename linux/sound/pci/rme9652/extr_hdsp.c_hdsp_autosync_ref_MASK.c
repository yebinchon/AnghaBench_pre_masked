
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int VAR_7 ;
 unsigned int FUNC_0 (struct hdsp*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_8)
{

 unsigned int VAR_9 = FUNC_0(VAR_8, VAR_7);

 switch (VAR_9 & 134) {
 case 128:
  return VAR_6;
 case 130:
  return VAR_3;
 case 129:
  return VAR_5;
 case 134:
  return VAR_4;
 case 133:
  return VAR_0;
 case 132:
  return VAR_1;
 case 131:
  return VAR_2;
 default:
  return VAR_6;
 }
 return 0;
}
