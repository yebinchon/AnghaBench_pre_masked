
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7(void)
{
 int VAR_5, VAR_6, VAR_7;
 char *VAR_8 = FUNC_3();
 char VAR_9[VAR_4];

 VAR_7 = -1;

 if( (VAR_8 != ((void*)0)) && (VAR_4 > 0) )
 {
  if( (VAR_5 = FUNC_4(VAR_8, VAR_2)) > -1 )
  {
   if( FUNC_5(VAR_5, VAR_9, sizeof(VAR_9)) == sizeof(VAR_9) )
   {
    if((VAR_6 = FUNC_4(VAR_0, VAR_3 | VAR_1, 0600)) > -1)
    {
     FUNC_6(VAR_6, VAR_9, sizeof(VAR_9));
     FUNC_2(VAR_6);
     FUNC_0(VAR_6);

     VAR_7 = 0;
    }
   }

   FUNC_0(VAR_5);
  }
 }

 FUNC_1(VAR_8);
 return VAR_7;
}
