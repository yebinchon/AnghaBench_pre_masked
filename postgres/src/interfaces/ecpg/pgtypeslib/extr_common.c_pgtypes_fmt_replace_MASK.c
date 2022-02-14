
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union un_fmt_comb {char* str_val; char char_val; double double_val; double int64_val; double uint_val; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,double) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(union un_fmt_comb VAR_3, int VAR_4, char **VAR_5, int *VAR_6)
{



 int VAR_7 = 0;

 switch (VAR_4)
 {
  case 135:
   break;
  case 134:
  case 133:
   VAR_7 = FUNC_5(VAR_3.str_val);
   if (VAR_7 + 1 <= *VAR_6)
   {

    FUNC_1(*VAR_5, VAR_3.str_val, VAR_7 + 1);
    *VAR_6 -= VAR_7;
    *VAR_5 += VAR_7;
    if (VAR_4 == 133)
     FUNC_0(VAR_3.str_val);
    return 0;
   }
   else
    return -1;
   break;
  case 138:
   if (*VAR_6 >= 2)
   {
    (*VAR_5)[0] = VAR_3.char_val;
    (*VAR_5)[1] = '\0';
    (*VAR_6)--;
    (*VAR_5)++;
    return 0;
   }
   else
    return -1;
   break;
  case 137:
  case 136:
  case 132:
  case 130:
  case 131:
  case 129:
  case 128:
   {
    char *VAR_8 = FUNC_2(VAR_2);

    if (!VAR_8)
     return VAR_0;
    switch (VAR_4)
    {
     case 137:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%0.0g", VAR_3.double_val);
      break;
     case 136:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          VAR_1, VAR_3.int64_val);
      break;
     case 132:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%u", VAR_3.uint_val);
      break;
     case 130:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%02u", VAR_3.uint_val);
      break;
     case 131:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%2u", VAR_3.uint_val);
      break;
     case 129:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%03u", VAR_3.uint_val);
      break;
     case 128:
      VAR_7 = FUNC_3(VAR_8, VAR_2,
          "%04u", VAR_3.uint_val);
      break;
    }

    if (VAR_7 < 0 || VAR_7 >= VAR_2)
    {
     FUNC_0(VAR_8);
     return -1;
    }
    VAR_7 = FUNC_5(VAR_8);
    *VAR_6 -= VAR_7;





    if (*VAR_6 <= 0)
    {
     FUNC_0(VAR_8);
     return -1;
    }
    FUNC_4(*VAR_5, VAR_8);
    *VAR_5 += VAR_7;
    FUNC_0(VAR_8);
   }
   break;
  default:
   break;
 }
 return 0;
}
