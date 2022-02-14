
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {int id; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct cstate *VAR_8,
       unsigned int *VAR_9,
       unsigned int *VAR_10,
       unsigned int VAR_11)
{
 switch (VAR_8->id) {
 case 130:
  *VAR_10 = VAR_2;
  *VAR_9 = VAR_3;
  break;
 case 129:
  *VAR_10 = VAR_4;
  *VAR_9 = VAR_5;
  break;
 case 128:
  *VAR_10 = VAR_6;
  *VAR_9 = VAR_7;
  break;
 case 131:
  *VAR_10 = VAR_0;
  *VAR_9 = VAR_1;
  break;
 default:
  return -1;
 };
 return 0;
}
