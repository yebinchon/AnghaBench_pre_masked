
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCWSTR ;
typedef int * LPBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static LPCWSTR FUNC_1(LPCWSTR VAR_5, LPBYTE VAR_6)
{




 switch(FUNC_0(*VAR_5++))
 {
 case 'E':
  *VAR_6 = VAR_0;
  break;
 case 'M':
  *VAR_6 = VAR_1;
  break;
 case 'N':
  *VAR_6 = VAR_2;
  break;
 case 'O':
  *VAR_6 = VAR_3;
  break;
 case 'S':
  *VAR_6 = VAR_4;
  break;
 default:
  return ((void*)0);
 }

 return VAR_5;
}
