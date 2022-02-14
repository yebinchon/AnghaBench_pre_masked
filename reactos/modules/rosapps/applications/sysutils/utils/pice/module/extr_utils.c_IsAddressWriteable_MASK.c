
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PULONG ;
typedef int BOOLEAN ;


 int* FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

BOOLEAN FUNC_2(ULONG VAR_6)
{
 PULONG VAR_7;
 PULONG VAR_8;


 VAR_7 = FUNC_0(VAR_6);
    if(VAR_7 && ((*VAR_7)&VAR_3))
    {

        if(!((*VAR_7)&VAR_2))
  {
      if(!((*VAR_7) & VAR_5))
     return VAR_0;

   VAR_8 = FUNC_1(VAR_6);
   if(VAR_8)
   {
    if( ((*VAR_8)&(VAR_3 | VAR_4)) &&
        ((*VAR_8) & VAR_5))
     return VAR_1;
    else
     return VAR_0;
   }
  }

  else
   return ((*VAR_7) & VAR_5);
 }

 return VAR_0;
}
