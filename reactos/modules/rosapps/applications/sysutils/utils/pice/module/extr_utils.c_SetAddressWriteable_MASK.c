
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PULONG ;
typedef scalar_t__ BOOLEAN ;


 int* FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOLEAN FUNC_2(ULONG VAR_7,BOOLEAN VAR_8)
{
 PULONG VAR_9;
 PULONG VAR_10;



 VAR_9 = FUNC_0(VAR_7);
    if(VAR_9 && ((*VAR_9)&VAR_4))
    {

        if(!((*VAR_9)&VAR_3))
  {
   VAR_10 = FUNC_1(VAR_7);
   if(VAR_10)
   {
    if( (*VAR_10)&(VAR_4 | VAR_5) )
    {
                    if( VAR_8 ){
      *VAR_10 |= VAR_6;
     }
                    else{
      *VAR_10 &= ~VAR_6;
     }
     VAR_1;
     return VAR_2;
                }
   }
  }

  else
  {
            if( VAR_8 )
                *VAR_9 |= VAR_6;
            else
                *VAR_9 &= ~VAR_6;
   VAR_1;
            return VAR_2;
  }
 }
 return VAR_0;
}
