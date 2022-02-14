
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned char,char**,char*) ;
 scalar_t__ FUNC_1 (unsigned char,char**,char*) ;
 scalar_t__ FUNC_2 (unsigned char,char**,char*) ;
 int FUNC_3 (unsigned char,char**,char*) ;
 scalar_t__ FUNC_4 (unsigned char,char**,char*) ;
 scalar_t__ FUNC_5 (unsigned char,char**,char*) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (char const*,unsigned char) ;

int FUNC_8(const char *VAR_6, size_t VAR_7, char *VAR_8, size_t VAR_9,
        unsigned int VAR_10, const char *VAR_11)
{
 char *VAR_12 = VAR_8;
 char *VAR_13 = VAR_12 + VAR_9;
 bool VAR_14 = VAR_11 && *VAR_11;

 while (VAR_7--) {
  unsigned char VAR_15 = *VAR_6++;
  if ((VAR_10 & VAR_1 && FUNC_6(VAR_15)) ||
      (VAR_14 && !FUNC_7(VAR_11, VAR_15))) {

  } else {
   if (VAR_10 & VAR_4 && FUNC_4(VAR_15, &VAR_12, VAR_13))
    continue;

   if (VAR_10 & VAR_5 && FUNC_5(VAR_15, &VAR_12, VAR_13))
    continue;

   if (VAR_10 & VAR_2 && FUNC_1(VAR_15, &VAR_12, VAR_13))
    continue;


   if (VAR_10 & VAR_3 && FUNC_2(VAR_15, &VAR_12, VAR_13))
    continue;

   if (VAR_10 & VAR_0 && FUNC_0(VAR_15, &VAR_12, VAR_13))
    continue;
  }

  FUNC_3(VAR_15, &VAR_12, VAR_13);
 }

 return VAR_12 - VAR_8;
}
