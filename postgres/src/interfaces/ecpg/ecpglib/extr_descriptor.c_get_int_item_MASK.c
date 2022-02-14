
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(int VAR_2, void *VAR_3, enum ECPGttype VAR_4, int VAR_5)
{
 switch (VAR_4)
 {
  case 132:
   *(short *) VAR_3 = (short) VAR_5;
   break;
  case 135:
   *(int *) VAR_3 = (int) VAR_5;
   break;
  case 134:
   *(long *) VAR_3 = (long) VAR_5;
   break;
  case 128:
   *(unsigned short *) VAR_3 = (unsigned short) VAR_5;
   break;
  case 131:
   *(unsigned int *) VAR_3 = (unsigned int) VAR_5;
   break;
  case 130:
   *(unsigned long *) VAR_3 = (unsigned long) VAR_5;
   break;
  case 133:
   *(long long int *) VAR_3 = (long long int) VAR_5;
   break;
  case 129:
   *(unsigned long long int *) VAR_3 = (unsigned long long int) VAR_5;
   break;
  case 136:
   *(float *) VAR_3 = (float) VAR_5;
   break;
  case 137:
   *(double *) VAR_3 = (double) VAR_5;
   break;
  default:
   FUNC_0(VAR_2, VAR_1, VAR_0, ((void*)0));
   return 0;
 }

 return 1;
}
