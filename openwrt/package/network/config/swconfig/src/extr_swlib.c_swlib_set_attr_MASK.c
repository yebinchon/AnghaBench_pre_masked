
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {struct switch_attr* attr; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int atype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int,int *,int ,struct switch_val*) ;

int
FUNC_1(struct switch_dev *VAR_5, struct switch_attr *VAR_6, struct switch_val *VAR_7)
{
 int VAR_8;

 switch(VAR_6->atype) {
 case 130:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_7->attr = VAR_6;
 return FUNC_0(VAR_8, ((void*)0), VAR_4, VAR_7);
}
