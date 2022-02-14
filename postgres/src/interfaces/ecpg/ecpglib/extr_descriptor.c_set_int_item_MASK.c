
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(int VAR_2, int *VAR_3, const void *VAR_4, enum ECPGttype VAR_5)
{
 switch (VAR_5)
 {
  case 132:
   *VAR_3 = *(const short *) VAR_4;
   break;
  case 135:
   *VAR_3 = *(const int *) VAR_4;
   break;
  case 134:
   *VAR_3 = *(const long *) VAR_4;
   break;
  case 128:
   *VAR_3 = *(const unsigned short *) VAR_4;
   break;
  case 131:
   *VAR_3 = *(const unsigned int *) VAR_4;
   break;
  case 130:
   *VAR_3 = *(const unsigned long *) VAR_4;
   break;
  case 133:
   *VAR_3 = *(const long long int *) VAR_4;
   break;
  case 129:
   *VAR_3 = *(const unsigned long long int *) VAR_4;
   break;
  case 136:
   *VAR_3 = *(const float *) VAR_4;
   break;
  case 137:
   *VAR_3 = *(const double *) VAR_4;
   break;
  default:
   FUNC_0(VAR_2, VAR_1, VAR_0, ((void*)0));
   return 0;
 }

 return 1;
}
