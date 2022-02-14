
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 scalar_t__ FUNC_0 (int) ;

ULONG FUNC_1(char* VAR_0,char* VAR_1)
{
  ULONG VAR_2=1;

 if( FUNC_0((ULONG)VAR_0) && (*VAR_0 == '_' || *VAR_0 == '@'))
   VAR_0++;

 if( FUNC_0((ULONG)VAR_1) && (*VAR_1 == '_' || *VAR_1 == '@'))
   VAR_1++;

 while(FUNC_0((ULONG)VAR_0) && *VAR_0 &&
          FUNC_0((ULONG)VAR_1) && *VAR_1 )
    {
  if( (*VAR_0 != *VAR_1) || *VAR_0=='@' || *VAR_1=='@' )
    break;
        VAR_0++;
        VAR_1++;
    }

 if((*VAR_0==0 || *VAR_0=='@') && (*VAR_1==0 || *VAR_1 =='@')){
        VAR_2=0;
 }
 return VAR_2;
}
