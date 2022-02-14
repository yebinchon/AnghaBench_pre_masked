
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (double,char*,int,double*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 char* VAR_4 ;
 double FUNC_3 (char const*,char**) ;
 char* VAR_5 ;

bool
FUNC_4(const char *VAR_6, double *VAR_7, int VAR_8, const char **VAR_9)
{
 double VAR_10;
 char *VAR_11;


 if (VAR_7)
  *VAR_7 = 0;
 if (VAR_9)
  *VAR_9 = ((void*)0);

 VAR_3 = 0;
 VAR_10 = FUNC_3(VAR_6, &VAR_11);

 if (VAR_11 == VAR_6 || VAR_3 == VAR_0)
  return 0;


 if (FUNC_1(VAR_10))
  return 0;


 while (FUNC_2((unsigned char) *VAR_11))
  VAR_11++;


 if (*VAR_11 != '\0')
 {
  if ((VAR_8 & VAR_1) == 0)
   return 0;

  if (!FUNC_0(VAR_10,
          VAR_11, (VAR_8 & VAR_1),
          &VAR_10))
  {

   if (VAR_9)
   {
    if (VAR_8 & VAR_2)
     *VAR_9 = VAR_4;
    else
     *VAR_9 = VAR_5;
   }
   return 0;
  }
 }

 if (VAR_7)
  *VAR_7 = VAR_10;
 return 1;
}
