
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_message {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rds_message *VAR_3,
     int VAR_4,
     void (*VAR_5)(struct rds_message *VAR_6, int VAR_7))
{
 int VAR_8;

 switch (VAR_4) {
 case 128:
  return;

 case 129:
  VAR_8 = VAR_2;
  break;

 case 130:
  VAR_8 = VAR_1;
  break;

 default:
  VAR_8 = VAR_0;
  break;
 }
 VAR_5(VAR_3, VAR_8);
}
