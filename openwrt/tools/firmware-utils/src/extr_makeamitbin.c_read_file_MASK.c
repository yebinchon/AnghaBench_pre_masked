
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 long FUNC_2 (unsigned char*,int,long,int *) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (long) ;

unsigned char *FUNC_7(const char *VAR_2, long *VAR_3)
{
 FILE *VAR_4;
 unsigned char *VAR_5 = ((void*)0);
 *VAR_3 = 0;
 VAR_4 = FUNC_1(VAR_2, "r");
 if (VAR_4 != ((void*)0))
 {
  if (FUNC_4(VAR_4, 0, VAR_0) == 0)
  {
     *VAR_3 = FUNC_5(VAR_4);
   if (*VAR_3 != -1)
   {
    if (FUNC_4(VAR_4, 0, VAR_1) == 0)
    {
     VAR_5 = (unsigned char *)FUNC_6(*VAR_3);
     if (VAR_5 != ((void*)0))
     {
      if (FUNC_2(VAR_5, sizeof(char), *VAR_3, VAR_4) != *VAR_3)
      {
       FUNC_3(VAR_5);
       VAR_5 = ((void*)0);
      }
     }
    }
   }
  }
  FUNC_0(VAR_4);
 }
 return VAR_5;
}
