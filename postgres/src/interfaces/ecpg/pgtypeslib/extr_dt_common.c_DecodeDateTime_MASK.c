
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; int tm_isdst; int tm_year; int tm_mon; int tm_mday; int tm_wday; } ;
typedef double fsec_t ;



 int VAR_0 ;

 int VAR_1 ;
 int const VAR_2 ;


 int VAR_3 ;



 int FUNC_0 (int const) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int*,struct tm*,int) ;
 int FUNC_2 (int,char*,int,int*,struct tm*,double*,int*,int) ;
 int FUNC_3 (int,char*,int,int*,struct tm*,double*,int*) ;
 int FUNC_4 (char*,int*) ;
 int FUNC_5 (int,char*,int*) ;
 int FUNC_6 (char*,int*,struct tm*,double*) ;
 int FUNC_7 (char*,int*) ;
 int FUNC_8 (struct tm*) ;
 int const VAR_5 ;
 int VAR_6 ;


 int const VAR_7 ;

 int VAR_8 ;

 int const VAR_9 ;


 double VAR_10 ;
 int const VAR_11 ;
 int FUNC_9 (int,int,int) ;
 int** VAR_12 ;
 int FUNC_10 (double,int*,int*,int*,double*) ;
 int FUNC_11 (unsigned char) ;
 int FUNC_12 (unsigned char) ;
 size_t FUNC_13 (int) ;
 int FUNC_14 (int,int*,int*,int*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*) ;
 double FUNC_17 (char*,char**) ;
 int FUNC_18 (char*,char**,int) ;

int
FUNC_19(char **VAR_13, int *VAR_14, int VAR_15,
      int *VAR_16, struct tm *VAR_17, fsec_t *VAR_18, bool VAR_19)
{
 int VAR_20 = 0,
    VAR_21,
    VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 int VAR_25;
 int VAR_26 = VAR_6;
 bool VAR_27 = 0;
 bool VAR_28 = 0;
 bool VAR_29 = 0;
 int VAR_30 = 0;
 int *VAR_31 = &VAR_30;





 *VAR_16 = 153;
 VAR_17->tm_hour = 0;
 VAR_17->tm_min = 0;
 VAR_17->tm_sec = 0;
 *VAR_18 = 0;

 VAR_17->tm_isdst = -1;
 if (VAR_31 != ((void*)0))
  *VAR_31 = 0;

 for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++)
 {
  switch (VAR_14[VAR_24])
  {
   case 153:





    if (VAR_23 == 150)
    {
     char *VAR_32;
     int VAR_33;

     if (VAR_31 == ((void*)0))
      return -1;

     VAR_33 = FUNC_18(VAR_13[VAR_24], &VAR_32, 10);
     if (*VAR_32 != '-')
      return -1;

     FUNC_14(VAR_33, &VAR_17->tm_year, &VAR_17->tm_mon, &VAR_17->tm_mday);

     if (FUNC_7(VAR_32, VAR_31) != 0)
      return -1;

     VAR_21 = VAR_3 | VAR_4 | FUNC_0(129);
     VAR_23 = 0;
     break;
    }






    else if (((VAR_20 & VAR_3) == VAR_3)
       || (VAR_23 != 0))
    {

     if (VAR_31 == ((void*)0))
      return -1;

     if (FUNC_12((unsigned char) *VAR_13[VAR_24]) || VAR_23 != 0)
     {
      char *VAR_34;

      if (VAR_23 != 0)
      {

       if (VAR_23 != 142)
        return -1;
       VAR_23 = 0;
      }






      if ((VAR_20 & VAR_4) == VAR_4)
       return -1;

      if ((VAR_34 = FUNC_15(VAR_13[VAR_24], '-')) == ((void*)0))
       return -1;


      if (FUNC_7(VAR_34, VAR_31) != 0)
       return -1;
      *VAR_34 = '\0';





      if ((VAR_14[VAR_24] = FUNC_3(FUNC_16(VAR_13[VAR_24]), VAR_13[VAR_24], VAR_20,
                &VAR_21, VAR_17, VAR_18, &VAR_28)) < 0)
       return -1;





      VAR_21 |= FUNC_0(129);
     }
     else
     {
      if (FUNC_4(VAR_13[VAR_24], VAR_31) != 0)
       return -1;

      VAR_14[VAR_24] = 139;
      VAR_21 = FUNC_0(129);
     }
    }
    else if (FUNC_1(VAR_13[VAR_24], VAR_20, &VAR_21, VAR_17, VAR_19) != 0)
     return -1;
    break;

   case 142:
    if (FUNC_6(VAR_13[VAR_24], &VAR_21, VAR_17, VAR_18) != 0)
     return -1;






    if (VAR_17->tm_hour > 24 ||
     (VAR_17->tm_hour == 24 && (VAR_17->tm_min > 0 || VAR_17->tm_sec > 0)))
     return -1;
    break;

   case 139:
    {
     int VAR_35;

     if (VAR_31 == ((void*)0))
      return -1;

     if (FUNC_7(VAR_13[VAR_24], &VAR_35) != 0)
      return -1;





     if (VAR_24 > 0 && (VAR_20 & FUNC_0(129)) != 0 &&
      VAR_14[VAR_24 - 1] == 139 &&
      FUNC_11((unsigned char) *VAR_13[VAR_24 - 1]))
     {
      *VAR_31 -= VAR_35;
      VAR_21 = 0;
     }
     else
     {
      *VAR_31 = VAR_35;
      VAR_21 = FUNC_0(129);
     }
    }
    break;

   case 146:





    if (VAR_23 != 0)
    {
     char *VAR_36;
     int VAR_37;

     VAR_37 = FUNC_18(VAR_13[VAR_24], &VAR_36, 10);





     if (*VAR_36 == '.')
      switch (VAR_23)
      {
       case 150:
       case 142:
       case 145:
        break;
       default:
        return 1;
        break;
      }
     else if (*VAR_36 != '\0')
      return -1;

     switch (VAR_23)
     {
      case 138:
       VAR_17->tm_year = VAR_37;
       VAR_21 = FUNC_0(VAR_11);
       break;

      case 148:





       if ((VAR_20 & FUNC_0(131)) != 0 &&
        (VAR_20 & FUNC_0(VAR_5)) != 0)
       {
        VAR_17->tm_min = VAR_37;
        VAR_21 = FUNC_0(VAR_7);
       }
       else
       {
        VAR_17->tm_mon = VAR_37;
        VAR_21 = FUNC_0(131);
       }
       break;

      case 152:
       VAR_17->tm_mday = VAR_37;
       VAR_21 = FUNC_0(VAR_2);
       break;

      case 151:
       VAR_17->tm_hour = VAR_37;
       VAR_21 = FUNC_0(VAR_5);
       break;

      case 149:
       VAR_17->tm_min = VAR_37;
       VAR_21 = FUNC_0(VAR_7);
       break;

      case 145:
       VAR_17->tm_sec = VAR_37;
       VAR_21 = FUNC_0(VAR_9);
       if (*VAR_36 == '.')
       {
        double VAR_38;

        VAR_38 = FUNC_17(VAR_36, &VAR_36);
        if (*VAR_36 != '\0')
         return -1;
        *VAR_18 = VAR_38 * 1000000;
       }
       break;

      case 139:
       VAR_21 = FUNC_0(129);
       if (FUNC_7(VAR_13[VAR_24], VAR_31) != 0)
        return -1;
       break;

      case 150:



       VAR_21 = VAR_3;
       FUNC_14(VAR_37, &VAR_17->tm_year, &VAR_17->tm_mon, &VAR_17->tm_mday);

       if (*VAR_36 == '.')
       {
        double VAR_39;

        VAR_39 = FUNC_17(VAR_36, &VAR_36);
        if (*VAR_36 != '\0')
         return -1;

        VAR_21 |= VAR_4;
        FUNC_10((VAR_39 * VAR_10), &VAR_17->tm_hour, &VAR_17->tm_min, &VAR_17->tm_sec, VAR_18);
       }
       break;

      case 142:

       if ((VAR_14[VAR_24] = FUNC_3(FUNC_16(VAR_13[VAR_24]), VAR_13[VAR_24], (VAR_20 | VAR_3),
                 &VAR_21, VAR_17, VAR_18, &VAR_28)) < 0)
        return -1;

       if (VAR_21 != VAR_4)
        return -1;
       break;

      default:
       return -1;
       break;
     }

     VAR_23 = 0;
     *VAR_16 = 153;
    }
    else
    {
     char *VAR_40;
     int VAR_41;

     VAR_41 = FUNC_16(VAR_13[VAR_24]);
     VAR_40 = FUNC_15(VAR_13[VAR_24], '.');


     if (VAR_40 != ((void*)0) && !(VAR_20 & VAR_3))
     {
      if (FUNC_1(VAR_13[VAR_24], VAR_20, &VAR_21, VAR_17, VAR_19) != 0)
       return -1;
     }

     else if (VAR_40 != ((void*)0) && VAR_41 - FUNC_16(VAR_40) > 2)
     {





      if ((VAR_14[VAR_24] = FUNC_3(VAR_41, VAR_13[VAR_24], VAR_20,
                &VAR_21, VAR_17, VAR_18, &VAR_28)) < 0)
       return -1;
     }
     else if (VAR_41 > 4)
     {
      if ((VAR_14[VAR_24] = FUNC_3(VAR_41, VAR_13[VAR_24], VAR_20,
                &VAR_21, VAR_17, VAR_18, &VAR_28)) < 0)
       return -1;
     }

     else if (FUNC_2(VAR_41, VAR_13[VAR_24], VAR_20,
            &VAR_21, VAR_17, VAR_18, &VAR_28, VAR_19) != 0)
      return -1;
    }
    break;

   case 143:
   case 144:
    VAR_22 = FUNC_5(VAR_24, VAR_13[VAR_24], &VAR_25);
    if (VAR_22 == 133)
     continue;

    VAR_21 = FUNC_0(VAR_22);
    switch (VAR_22)
    {
     case 130:
      switch (VAR_25)
      {
       case 147:
        VAR_21 = (VAR_3 | VAR_4 | FUNC_0(129));
        *VAR_16 = 153;
        FUNC_8(VAR_17);
        break;

       case 137:
        VAR_21 = VAR_3;
        *VAR_16 = 153;
        FUNC_8(VAR_17);
        FUNC_14(FUNC_9(VAR_17->tm_year, VAR_17->tm_mon, VAR_17->tm_mday) - 1,
            &VAR_17->tm_year, &VAR_17->tm_mon, &VAR_17->tm_mday);
        VAR_17->tm_hour = 0;
        VAR_17->tm_min = 0;
        VAR_17->tm_sec = 0;
        break;

       case 141:
        VAR_21 = VAR_3;
        *VAR_16 = 153;
        FUNC_8(VAR_17);
        VAR_17->tm_hour = 0;
        VAR_17->tm_min = 0;
        VAR_17->tm_sec = 0;
        break;

       case 140:
        VAR_21 = VAR_3;
        *VAR_16 = 153;
        FUNC_8(VAR_17);
        FUNC_14(FUNC_9(VAR_17->tm_year, VAR_17->tm_mon, VAR_17->tm_mday) + 1,
            &VAR_17->tm_year, &VAR_17->tm_mon, &VAR_17->tm_mday);
        VAR_17->tm_hour = 0;
        VAR_17->tm_min = 0;
        VAR_17->tm_sec = 0;
        break;

       case 136:
        VAR_21 = (VAR_4 | FUNC_0(129));
        *VAR_16 = 153;
        VAR_17->tm_hour = 0;
        VAR_17->tm_min = 0;
        VAR_17->tm_sec = 0;
        if (VAR_31 != ((void*)0))
         *VAR_31 = 0;
        break;

       default:
        *VAR_16 = VAR_25;
      }

      break;

     case 131:





      if ((VAR_20 & FUNC_0(131)) && !VAR_27 &&
       !(VAR_20 & FUNC_0(VAR_2)) && VAR_17->tm_mon >= 1 && VAR_17->tm_mon <= 31)
      {
       VAR_17->tm_mday = VAR_17->tm_mon;
       VAR_21 = FUNC_0(VAR_2);
      }
      VAR_27 = 1;
      VAR_17->tm_mon = VAR_25;
      break;

     case 134:





      VAR_21 |= FUNC_0(135);
      VAR_17->tm_isdst = 1;
      if (VAR_31 == ((void*)0))
       return -1;
      *VAR_31 -= VAR_25;
      break;

     case 135:





      VAR_21 |= FUNC_0(129);
      VAR_17->tm_isdst = 1;
      if (VAR_31 == ((void*)0))
       return -1;
      *VAR_31 = -VAR_25;
      VAR_14[VAR_24] = 139;
      break;

     case 129:
      VAR_17->tm_isdst = 0;
      if (VAR_31 == ((void*)0))
       return -1;
      *VAR_31 = -VAR_25;
      VAR_14[VAR_24] = 139;
      break;

     case 133:
      break;

     case 155:
      VAR_26 = VAR_25;
      break;

     case 156:
      VAR_29 = (VAR_25 == VAR_1);
      break;

     case 154:
      VAR_17->tm_wday = VAR_25;
      break;

     case 128:
      VAR_21 = 0;
      VAR_23 = VAR_25;
      break;

     case 132:





      VAR_21 = 0;


      if ((VAR_20 & VAR_3) != VAR_3)
       return -1;







      if (VAR_24 >= VAR_15 - 1 ||
       (VAR_14[VAR_24 + 1] != 146 &&
        VAR_14[VAR_24 + 1] != 142 &&
        VAR_14[VAR_24 + 1] != 153))
       return -1;

      VAR_23 = VAR_25;
      break;

     default:
      return -1;
    }
    break;

   default:
    return -1;
  }

  if (VAR_21 & VAR_20)
   return -1;
  VAR_20 |= VAR_21;
 }


 if (VAR_29)
 {
  if (VAR_17->tm_year > 0)
   VAR_17->tm_year = -(VAR_17->tm_year - 1);
  else
   return -1;
 }
 else if (VAR_28)
 {
  if (VAR_17->tm_year < 70)
   VAR_17->tm_year += 2000;
  else if (VAR_17->tm_year < 100)
   VAR_17->tm_year += 1900;
 }

 if (VAR_26 != VAR_6 && VAR_17->tm_hour > 12)
  return -1;
 if (VAR_26 == VAR_0 && VAR_17->tm_hour == 12)
  VAR_17->tm_hour = 0;
 else if (VAR_26 == VAR_8 && VAR_17->tm_hour != 12)
  VAR_17->tm_hour += 12;


 if (*VAR_16 == 153)
 {
  if ((VAR_20 & VAR_3) != VAR_3)
   return ((VAR_20 & VAR_4) == VAR_4) ? 1 : -1;





  if (VAR_17->tm_mday < 1 || VAR_17->tm_mday > VAR_12[FUNC_13(VAR_17->tm_year)][VAR_17->tm_mon - 1])
   return -1;






  if ((VAR_20 & VAR_3) == VAR_3 && VAR_31 != ((void*)0) && !(VAR_20 & FUNC_0(129)) && (VAR_20 & FUNC_0(134)))
   return -1;
 }

 return 0;
}
