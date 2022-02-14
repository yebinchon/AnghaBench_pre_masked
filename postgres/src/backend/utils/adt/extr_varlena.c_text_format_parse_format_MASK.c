
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const**,char const*,int*) ;

__attribute__((used)) static const char *
FUNC_5(const char *VAR_3, const char *VAR_4,
       int *VAR_5, int *VAR_6,
       int *VAR_7, int *VAR_8)
{
 const char *VAR_9 = VAR_3;
 int VAR_10;


 *VAR_5 = -1;
 *VAR_6 = -1;
 *VAR_7 = 0;
 *VAR_8 = 0;


 if (FUNC_4(&VAR_9, VAR_4, &VAR_10))
 {
  if (*VAR_9 != '$')
  {

   *VAR_8 = VAR_10;
   return VAR_9;
  }

  *VAR_5 = VAR_10;

  if (VAR_10 == 0)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("format specifies argument 0, but arguments are numbered from 1")));
  FUNC_0(VAR_9, VAR_4);
 }


 while (*VAR_9 == '-')
 {
  *VAR_7 |= VAR_2;
  FUNC_0(VAR_9, VAR_4);
 }

 if (*VAR_9 == '*')
 {

  FUNC_0(VAR_9, VAR_4);
  if (FUNC_4(&VAR_9, VAR_4, &VAR_10))
  {

   if (*VAR_9 != '$')
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("width argument position must be ended by \"$\"")));

   *VAR_6 = VAR_10;

   if (VAR_10 == 0)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3("format specifies argument 0, but arguments are numbered from 1")));
   FUNC_0(VAR_9, VAR_4);
  }
  else
   *VAR_6 = 0;
 }
 else
 {

  if (FUNC_4(&VAR_9, VAR_4, &VAR_10))
   *VAR_8 = VAR_10;
 }


 return VAR_9;
}
