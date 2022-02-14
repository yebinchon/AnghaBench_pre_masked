
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t USHORT ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t FUNC_0 (char*) ;
 int VAR_1 ;

BOOLEAN FUNC_1(char VAR_2,LPSTR VAR_3)
{
 USHORT VAR_4 = FUNC_0(VAR_3);
 USHORT VAR_5;
 for(VAR_5=0;VAR_5<VAR_4;VAR_5++)
 {
  if(VAR_2 == VAR_3[VAR_5])
   return VAR_1;
 }
 return VAR_0;
}
