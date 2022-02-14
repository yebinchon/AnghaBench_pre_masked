
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (double,char*,int,double*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (double) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 char* VAR_6 ;
 double FUNC_4 (double) ;
 double FUNC_5 (char const*,char**) ;
 double FUNC_6 (char const*,char**,int ) ;
 char* VAR_7 ;

bool
FUNC_7(const char *VAR_8, int *VAR_9, int VAR_10, const char **VAR_11)
{




 double VAR_12;
 char *VAR_13;


 if (VAR_9)
  *VAR_9 = 0;
 if (VAR_11)
  *VAR_11 = ((void*)0);
 VAR_5 = 0;
 VAR_12 = FUNC_6(VAR_8, &VAR_13, 0);
 if (*VAR_13 == '.' || *VAR_13 == 'e' || *VAR_13 == 'E' ||
  VAR_5 == VAR_0)
 {
  VAR_5 = 0;
  VAR_12 = FUNC_5(VAR_8, &VAR_13);
 }

 if (VAR_13 == VAR_8 || VAR_5 == VAR_0)
  return 0;


 if (FUNC_2(VAR_12))
  return 0;


 while (FUNC_3((unsigned char) *VAR_13))
  VAR_13++;


 if (*VAR_13 != '\0')
 {
  if ((VAR_10 & VAR_1) == 0)
   return 0;

  if (!FUNC_0(VAR_12,
          VAR_13, (VAR_10 & VAR_1),
          &VAR_12))
  {

   if (VAR_11)
   {
    if (VAR_10 & VAR_2)
     *VAR_11 = VAR_6;
    else
     *VAR_11 = VAR_7;
   }
   return 0;
  }
 }


 VAR_12 = FUNC_4(VAR_12);

 if (VAR_12 > VAR_3 || VAR_12 < VAR_4)
 {
  if (VAR_11)
   *VAR_11 = FUNC_1("Value exceeds integer range.");
  return 0;
 }

 if (VAR_9)
  *VAR_9 = (int) VAR_12;
 return 1;
}
