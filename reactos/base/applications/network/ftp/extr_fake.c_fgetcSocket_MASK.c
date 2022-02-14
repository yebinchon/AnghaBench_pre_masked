
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int ) ;

int FUNC_1(int VAR_3)
{
   static int VAR_4 = 0;
   static int VAR_5 = 0;
   static char VAR_6[4096];

   if (VAR_4 == VAR_5)
     {
       VAR_4 = 0;
       VAR_5 = FUNC_0(VAR_3, VAR_6, sizeof(VAR_6), 0);

       if (VAR_5 == VAR_2)
     {
       VAR_5 = 0;
       return VAR_1;
     }

       if (VAR_5 == 0)
     return VAR_0;
     }
   return VAR_6[VAR_4++];
}
