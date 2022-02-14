
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union un_fmt_comb {char* str_val; int uint_val; char char_val; double int64_val; } ;
typedef double timestamp ;
struct tm {size_t tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_yday; int tm_min; int tm_sec; } ;
typedef int date ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 double FUNC_0 () ;
 char** VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 char** VAR_11 ;
 int FUNC_1 (union un_fmt_comb,int,char**,int*) ;
 int FUNC_2 (char*,int,char const*,struct tm*) ;

__attribute__((used)) static int
FUNC_3(timestamp * VAR_12, date VAR_13, int VAR_14, struct tm *VAR_15,
       char *VAR_16, int *VAR_17, const char *VAR_18)
{
 union un_fmt_comb VAR_19;
 int VAR_20;
 int VAR_21;
 const char *VAR_22 = VAR_18;
 char *VAR_23 = VAR_16;

 while (*VAR_22)
 {
  if (*VAR_22 == '%')
  {
   VAR_22++;

   VAR_20 = VAR_2;
   switch (*VAR_22)
   {


    case 'a':
     VAR_19.str_val = VAR_11[VAR_14];
     VAR_20 = VAR_3;
     break;


    case 'A':
     VAR_19.str_val = VAR_8[VAR_14];
     VAR_20 = VAR_3;
     break;


    case 'b':
    case 'h':
     VAR_19.str_val = VAR_9[VAR_15->tm_mon];
     VAR_20 = VAR_3;
     break;


    case 'B':
     VAR_19.str_val = VAR_10[VAR_15->tm_mon];
     VAR_20 = VAR_3;
     break;





    case 'c':

     break;

    case 'C':
     VAR_19.uint_val = VAR_15->tm_year / 100;
     VAR_20 = VAR_6;
     break;

    case 'd':
     VAR_19.uint_val = VAR_15->tm_mday;
     VAR_20 = VAR_6;
     break;

    case 'D':
     VAR_21 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15,
             VAR_23, VAR_17,
             "%m/%d/%y");
     if (VAR_21)
      return VAR_21;
     break;

    case 'e':
     VAR_19.uint_val = VAR_15->tm_mday;
     VAR_20 = VAR_5;
     break;




    case 'E':
     {
      char VAR_24[4] = "%Ex";

      VAR_22++;
      if (*VAR_22 == '\0')
       return -1;
      VAR_24[2] = *VAR_22;




      VAR_15->tm_mon -= 1;
      VAR_21 = FUNC_2(VAR_23, *VAR_17, VAR_24, VAR_15);
      if (VAR_21 == 0)
       return -1;
      while (*VAR_23)
      {
       VAR_23++;
       (*VAR_17)--;
      }
      VAR_15->tm_mon += 1;
      VAR_20 = VAR_2;
      break;
     }





    case 'G':
     {

      const char *VAR_25 = "%G";

      VAR_15->tm_mon -= 1;
      VAR_21 = FUNC_2(VAR_23, *VAR_17, VAR_25, VAR_15);
      if (VAR_21 == 0)
       return -1;
      while (*VAR_23)
      {
       VAR_23++;
       (*VAR_17)--;
      }
      VAR_15->tm_mon += 1;
      VAR_20 = VAR_2;
     }
     break;





    case 'g':
     {
      const char *VAR_26 = "%g";


      VAR_15->tm_mon -= 1;
      VAR_21 = FUNC_2(VAR_23, *VAR_17, VAR_26, VAR_15);
      if (VAR_21 == 0)
       return -1;
      while (*VAR_23)
      {
       VAR_23++;
       (*VAR_17)--;
      }
      VAR_15->tm_mon += 1;
      VAR_20 = VAR_2;
     }
     break;

    case 'H':
     VAR_19.uint_val = VAR_15->tm_hour;
     VAR_20 = VAR_6;
     break;

    case 'I':
     VAR_19.uint_val = VAR_15->tm_hour % 12;
     VAR_20 = VAR_6;
     break;





    case 'j':
     VAR_19.uint_val = VAR_15->tm_yday;
     VAR_20 = VAR_7;
     break;





    case 'k':
     VAR_19.uint_val = VAR_15->tm_hour;
     VAR_20 = VAR_5;
     break;





    case 'l':
     VAR_19.uint_val = VAR_15->tm_hour % 12;
     VAR_20 = VAR_5;
     break;

    case 'm':
     VAR_19.uint_val = VAR_15->tm_mon;
     VAR_20 = VAR_6;
     break;

    case 'M':
     VAR_19.uint_val = VAR_15->tm_min;
     VAR_20 = VAR_6;
     break;

    case 'n':
     VAR_19.char_val = '\n';
     VAR_20 = VAR_0;
     break;


    case 'p':
     if (VAR_15->tm_hour < 12)
      VAR_19.str_val = "AM";
     else
      VAR_19.str_val = "PM";
     VAR_20 = VAR_3;
     break;


    case 'P':
     if (VAR_15->tm_hour < 12)
      VAR_19.str_val = "am";
     else
      VAR_19.str_val = "pm";
     VAR_20 = VAR_3;
     break;


    case 'r':
     VAR_21 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15,
             VAR_23, VAR_17,
             "%I:%M:%S %p");
     if (VAR_21)
      return VAR_21;
     break;

    case 'R':
     VAR_21 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15,
             VAR_23, VAR_17,
             "%H:%M");
     if (VAR_21)
      return VAR_21;
     break;

    case 's':
     VAR_19.int64_val = (*VAR_12 - FUNC_0()) / 1000000.0;
     VAR_20 = VAR_1;
     break;

    case 'S':
     VAR_19.uint_val = VAR_15->tm_sec;
     VAR_20 = VAR_6;
     break;

    case 't':
     VAR_19.char_val = '\t';
     VAR_20 = VAR_0;
     break;

    case 'T':
     VAR_21 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15,
             VAR_23, VAR_17,
             "%H:%M:%S");
     if (VAR_21)
      return VAR_21;
     break;





    case 'u':
     VAR_19.uint_val = VAR_14;
     if (VAR_19.uint_val == 0)
      VAR_19.uint_val = 7;
     VAR_20 = VAR_4;
     break;

    case 'U':
     VAR_15->tm_mon -= 1;
     VAR_21 = FUNC_2(VAR_23, *VAR_17, "%U", VAR_15);
     if (VAR_21 == 0)
      return -1;
     while (*VAR_23)
     {
      VAR_23++;
      (*VAR_17)--;
     }
     VAR_15->tm_mon += 1;
     VAR_20 = VAR_2;
     break;





    case 'V':
     {

      const char *VAR_27 = "%V";

      VAR_21 = FUNC_2(VAR_23, *VAR_17, VAR_27, VAR_15);
      if (VAR_21 == 0)
       return -1;
      while (*VAR_23)
      {
       VAR_23++;
       (*VAR_17)--;
      }
      VAR_20 = VAR_2;
     }
     break;





    case 'w':
     VAR_19.uint_val = VAR_14;
     VAR_20 = VAR_4;
     break;

    case 'W':
     VAR_15->tm_mon -= 1;
     VAR_21 = FUNC_2(VAR_23, *VAR_17, "%U", VAR_15);
     if (VAR_21 == 0)
      return -1;
     while (*VAR_23)
     {
      VAR_23++;
      (*VAR_17)--;
     }
     VAR_15->tm_mon += 1;
     VAR_20 = VAR_2;
     break;





    case 'x':
     {
      const char *VAR_28 = "%x";


      VAR_15->tm_mon -= 1;
      VAR_21 = FUNC_2(VAR_23, *VAR_17, VAR_28, VAR_15);
      if (VAR_21 == 0)
       return -1;
      while (*VAR_23)
      {
       VAR_23++;
       (*VAR_17)--;
      }
      VAR_15->tm_mon += 1;
      VAR_20 = VAR_2;
     }
     break;





    case 'X':
     VAR_15->tm_mon -= 1;
     VAR_21 = FUNC_2(VAR_23, *VAR_17, "%X", VAR_15);
     if (VAR_21 == 0)
      return -1;
     while (*VAR_23)
     {
      VAR_23++;
      (*VAR_17)--;
     }
     VAR_15->tm_mon += 1;
     VAR_20 = VAR_2;
     break;

    case 'y':
     VAR_19.uint_val = VAR_15->tm_year % 100;
     VAR_20 = VAR_6;
     break;

    case 'Y':
     VAR_19.uint_val = VAR_15->tm_year;
     VAR_20 = VAR_4;
     break;

    case 'z':
     VAR_15->tm_mon -= 1;
     VAR_21 = FUNC_2(VAR_23, *VAR_17, "%z", VAR_15);
     if (VAR_21 == 0)
      return -1;
     while (*VAR_23)
     {
      VAR_23++;
      (*VAR_17)--;
     }
     VAR_15->tm_mon += 1;
     VAR_20 = VAR_2;
     break;

    case 'Z':
     VAR_15->tm_mon -= 1;
     VAR_21 = FUNC_2(VAR_23, *VAR_17, "%Z", VAR_15);
     if (VAR_21 == 0)
      return -1;
     while (*VAR_23)
     {
      VAR_23++;
      (*VAR_17)--;
     }
     VAR_15->tm_mon += 1;
     VAR_20 = VAR_2;
     break;

    case '%':
     VAR_19.char_val = '%';
     VAR_20 = VAR_0;
     break;
    case '\0':





     return -1;
    default:




     if (*VAR_17 > 1)
     {
      *VAR_23 = '%';
      VAR_23++;
      (*VAR_17)--;
      if (*VAR_17 > 1)
      {
       *VAR_23 = *VAR_22;
       VAR_23++;
       (*VAR_17)--;
      }
      else
      {
       *VAR_23 = '\0';
       return -1;
      }
      *VAR_23 = '\0';
     }
     else
      return -1;
     break;
   }
   VAR_21 = FUNC_1(VAR_19, VAR_20, &VAR_23, VAR_17);
   if (VAR_21)
    return VAR_21;
  }
  else
  {
   if (*VAR_17 > 1)
   {
    *VAR_23 = *VAR_22;
    (*VAR_17)--;
    VAR_23++;
    *VAR_23 = '\0';
   }
   else
    return -1;
  }
  VAR_22++;
 }
 return 0;
}
