
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_tzinfo ;
typedef int timelib_tzdb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned char const**,int *) ;
 int FUNC_1 (unsigned char const**,int *) ;
 int FUNC_2 (unsigned char const**,int *) ;
 int FUNC_3 (unsigned char const**,int *) ;
 int FUNC_4 (unsigned char const**,int *) ;
 int FUNC_5 (unsigned char const**,int *,unsigned int*) ;
 scalar_t__ FUNC_6 (unsigned char const**,char*,int const*) ;
 int FUNC_7 (unsigned char const**,int *) ;
 int FUNC_8 (unsigned char const**,int *) ;
 int FUNC_9 (unsigned char const**,int *) ;
 int FUNC_10 (unsigned char const**,int *) ;
 int FUNC_11 (unsigned char const**,int *) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (int *) ;

timelib_tzinfo *FUNC_14(char *VAR_4, const timelib_tzdb *VAR_5, int *VAR_6)
{
 const unsigned char *VAR_7;
 timelib_tzinfo *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12;

 if (FUNC_6(&VAR_7, VAR_4, VAR_5)) {
  VAR_8 = FUNC_12(VAR_4);

  VAR_9 = FUNC_5(&VAR_7, VAR_8, &VAR_12);
  if (VAR_9 < 2 || VAR_9 > 3) {
   *VAR_6 = VAR_2;
   FUNC_13(VAR_8);
   return ((void*)0);
  }


  FUNC_0(&VAR_7, VAR_8);
  FUNC_8(&VAR_7, VAR_8);
  FUNC_9(&VAR_7, VAR_8);

  if (!FUNC_10(&VAR_7, VAR_8)) {

   *VAR_6 = VAR_0;
   FUNC_13(VAR_8);
   return ((void*)0);
  }
  FUNC_1(&VAR_7, VAR_8);
  if ((VAR_10 = FUNC_2(&VAR_7, VAR_8)) != 0) {

   *VAR_6 = VAR_10;
   FUNC_13(VAR_8);
   return ((void*)0);
  }
  if ((VAR_11 = FUNC_3(&VAR_7, VAR_8)) != 0) {
   *VAR_6 = VAR_11;
   FUNC_13(VAR_8);
   return ((void*)0);
  }
  FUNC_11(&VAR_7, VAR_8);

  if (VAR_12 == VAR_3) {
   FUNC_4(&VAR_7, VAR_8);
  } else {
   FUNC_7(&VAR_7, VAR_8);
  }
 } else {
  *VAR_6 = VAR_1;
  VAR_8 = ((void*)0);
 }

 return VAR_8;
}
