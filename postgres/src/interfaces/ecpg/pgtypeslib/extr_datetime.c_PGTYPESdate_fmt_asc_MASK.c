
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union un_fmt_comb {char* str_val; int uint_val; } ;
struct tm {int tm_year; int tm_mon; int tm_mday; } ;
typedef scalar_t__ date ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int*,int*,int*) ;
 int FUNC_4 (char*,char*,int ) ;
 char** VAR_1 ;
 char* FUNC_5 (int ) ;
 char** VAR_2 ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

int
FUNC_10(date VAR_3, const char *VAR_4, char *VAR_5)
{
 static struct
 {
  char *format;
  int component;
 } VAR_6[] =
 {




  {
   "ddd", 137
  },
  {
   "dd", 138
  },
  {
   "mmm", 135
  },
  {
   "mm", 136
  },
  {
   "yyyy", 134
  },
  {
   "yy", 133
  },
  {
   ((void*)0), 0
  }
 };

 union un_fmt_comb VAR_7;
 int VAR_8;

 int VAR_9;
 int VAR_10;
 char *VAR_11;
 struct tm VAR_12;


 FUNC_7(VAR_5, VAR_4);


 FUNC_3(VAR_3 + FUNC_1(2000, 1, 1), &(VAR_12.tm_year), &(VAR_12.tm_mon), &(VAR_12.tm_mday));
 VAR_10 = FUNC_0(VAR_3);

 for (VAR_9 = 0; VAR_6[VAR_9].format != ((void*)0); VAR_9++)
 {
  while ((VAR_11 = FUNC_9(VAR_5, VAR_6[VAR_9].format)) != ((void*)0))
  {
   switch (VAR_6[VAR_9].component)
   {
    case 137:
     VAR_7.str_val = VAR_2[VAR_10];
     VAR_8 = 132;
     break;
    case 138:
     VAR_7.uint_val = VAR_12.tm_mday;
     VAR_8 = 129;
     break;
    case 135:
     VAR_7.str_val = VAR_1[VAR_12.tm_mon - 1];
     VAR_8 = 132;
     break;
    case 136:
     VAR_7.uint_val = VAR_12.tm_mon;
     VAR_8 = 129;
     break;
    case 134:
     VAR_7.uint_val = VAR_12.tm_year;
     VAR_8 = 128;
     break;
    case 133:
     VAR_7.uint_val = VAR_12.tm_year % 100;
     VAR_8 = 129;
     break;
    default:




     VAR_7.str_val = " ";
     VAR_8 = 132;
   }
   switch (VAR_8)
   {
    case 131:
    case 132:
     FUNC_4(VAR_11, VAR_7.str_val,
         FUNC_8(VAR_7.str_val));
     if (VAR_8 == 131)
      FUNC_2(VAR_7.str_val);
     break;
    case 130:
     {
      char *VAR_13 = FUNC_5(VAR_0);

      if (!VAR_13)
       return -1;
      FUNC_6(VAR_13, VAR_0,
         "%u", VAR_7.uint_val);
      FUNC_4(VAR_11, VAR_13, FUNC_8(VAR_13));
      FUNC_2(VAR_13);
     }
     break;
    case 129:
     {
      char *VAR_14 = FUNC_5(VAR_0);

      if (!VAR_14)
       return -1;
      FUNC_6(VAR_14, VAR_0,
         "%02u", VAR_7.uint_val);
      FUNC_4(VAR_11, VAR_14, FUNC_8(VAR_14));
      FUNC_2(VAR_14);
     }
     break;
    case 128:
     {
      char *VAR_15 = FUNC_5(VAR_0);

      if (!VAR_15)
       return -1;
      FUNC_6(VAR_15, VAR_0,
         "%04u", VAR_7.uint_val);
      FUNC_4(VAR_11, VAR_15, FUNC_8(VAR_15));
      FUNC_2(VAR_15);
     }
     break;
    default:





     break;
   }
  }
 }
 return 0;
}
