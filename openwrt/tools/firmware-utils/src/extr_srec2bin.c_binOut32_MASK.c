
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bit32u ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,int ) ;

void FUNC_2 ( bit32u VAR_1 )
{




   char VAR_2[4];
   int VAR_3;

   for(VAR_3=0;VAR_3<4;VAR_3++)
    VAR_2[VAR_3]=(char)(VAR_1>>(VAR_3*8));
   FUNC_1( VAR_2, 1, 4, VAR_0);
   FUNC_0("Out32" , VAR_1);
}
