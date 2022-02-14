
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule {int r_month; int r_todisstd; int r_todisut; int r_loyear; int r_hiyear; scalar_t__ r_dycode; int r_wday; int r_dayofmonth; int * r_yrtype; int r_hiwasnum; int r_lowasnum; int r_tod; } ;
struct lookup {int l_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;



 void* VAR_4 ;
 void* VAR_5 ;
 char* FUNC_0 (char*) ;
 int VAR_6 ;
 struct lookup* FUNC_1 (char const*,int ) ;
 void* FUNC_2 (char const*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int VAR_8 ;
 scalar_t__** VAR_9 ;
 int FUNC_8 (char) ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_9 (char const*,char*,int*,char*) ;
 int VAR_12 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_13(struct rule *VAR_14, const char *VAR_15, const char *VAR_16,
  const char *VAR_17, const char *VAR_18, const char *VAR_19,
  const char *VAR_20)
{
 const struct lookup *VAR_21;
 const char *VAR_22;
 char *VAR_23;
 char *VAR_24;
 char VAR_25;


 int VAR_26;

 if ((VAR_21 = FUNC_1(VAR_18, VAR_10)) == ((void*)0))
 {
  FUNC_3(FUNC_0("invalid month name"));
  return;
 }
 VAR_14->r_month = VAR_21->l_value;
 VAR_14->r_todisstd = 0;
 VAR_14->r_todisut = 0;
 VAR_23 = FUNC_2(VAR_20);
 if (*VAR_23 != '\0')
 {
  VAR_24 = VAR_23 + FUNC_11(VAR_23) - 1;
  switch (FUNC_8(*VAR_24))
  {
   case 's':
    VAR_14->r_todisstd = 1;
    VAR_14->r_todisut = 0;
    *VAR_24 = '\0';
    break;
   case 'w':
    VAR_14->r_todisstd = 0;
    VAR_14->r_todisut = 0;
    *VAR_24 = '\0';
    break;
   case 'g':
   case 'u':
   case 'z':
    VAR_14->r_todisstd = 1;
    VAR_14->r_todisut = 1;
    *VAR_24 = '\0';
    break;
  }
 }
 VAR_14->r_tod = FUNC_7(VAR_23, FUNC_0("invalid time of day"));
 FUNC_6(VAR_23);




 VAR_22 = VAR_15;
 VAR_21 = FUNC_1(VAR_22, VAR_6);
 VAR_14->r_lowasnum = VAR_21 == ((void*)0);
 if (!VAR_14->r_lowasnum)
  switch (VAR_21->l_value)
  {
   case 129:
    VAR_14->r_loyear = VAR_5;
    break;
   case 130:
    VAR_14->r_loyear = VAR_4;
    break;
   default:
    FUNC_5(VAR_12,
      FUNC_0("%s: panic: Invalid l_value %d\n"),
      VAR_11, VAR_21->l_value);
    FUNC_4(VAR_3);
  }
 else if (FUNC_9(VAR_22, "%d%c", &VAR_26, &VAR_25) == 1)
  VAR_14->r_loyear = VAR_26;
 else
 {
  FUNC_3(FUNC_0("invalid starting year"));
  return;
 }
 VAR_22 = VAR_16;
 VAR_21 = FUNC_1(VAR_22, VAR_7);
 VAR_14->r_hiwasnum = VAR_21 == ((void*)0);
 if (!VAR_14->r_hiwasnum)
  switch (VAR_21->l_value)
  {
   case 129:
    VAR_14->r_hiyear = VAR_5;
    break;
   case 130:
    VAR_14->r_hiyear = VAR_4;
    break;
   case 128:
    VAR_14->r_hiyear = VAR_14->r_loyear;
    break;
   default:
    FUNC_5(VAR_12,
      FUNC_0("%s: panic: Invalid l_value %d\n"),
      VAR_11, VAR_21->l_value);
    FUNC_4(VAR_3);
  }
 else if (FUNC_9(VAR_22, "%d%c", &VAR_26, &VAR_25) == 1)
  VAR_14->r_hiyear = VAR_26;
 else
 {
  FUNC_3(FUNC_0("invalid ending year"));
  return;
 }
 if (VAR_14->r_loyear > VAR_14->r_hiyear)
 {
  FUNC_3(FUNC_0("starting year greater than ending year"));
  return;
 }
 if (*VAR_17 == '\0')
  VAR_14->r_yrtype = ((void*)0);
 else
 {
  if (VAR_14->r_loyear == VAR_14->r_hiyear)
  {
   FUNC_3(FUNC_0("typed single year"));
   return;
  }
  FUNC_12(FUNC_0("year type \"%s\" is obsolete; use \"-\" instead"),
    VAR_17);
  VAR_14->r_yrtype = FUNC_2(VAR_17);
 }





 VAR_23 = FUNC_2(VAR_19);
 if ((VAR_21 = FUNC_1(VAR_23, VAR_8)) != ((void*)0))
 {
  VAR_14->r_dycode = VAR_2;
  VAR_14->r_wday = VAR_21->l_value;
  VAR_14->r_dayofmonth = VAR_9[1][VAR_14->r_month];
 }
 else
 {
  if ((VAR_24 = FUNC_10(VAR_23, '<')) != ((void*)0))
   VAR_14->r_dycode = VAR_2;
  else if ((VAR_24 = FUNC_10(VAR_23, '>')) != ((void*)0))
   VAR_14->r_dycode = VAR_1;
  else
  {
   VAR_24 = VAR_23;
   VAR_14->r_dycode = VAR_0;
  }
  if (VAR_14->r_dycode != VAR_0)
  {
   *VAR_24++ = 0;
   if (*VAR_24++ != '=')
   {
    FUNC_3(FUNC_0("invalid day of month"));
    FUNC_6(VAR_23);
    return;
   }
   if ((VAR_21 = FUNC_1(VAR_23, VAR_13)) == ((void*)0))
   {
    FUNC_3(FUNC_0("invalid weekday name"));
    FUNC_6(VAR_23);
    return;
   }
   VAR_14->r_wday = VAR_21->l_value;
  }
  if (FUNC_9(VAR_24, "%d%c", &VAR_14->r_dayofmonth, &VAR_25) != 1 ||
   VAR_14->r_dayofmonth <= 0 ||
   (VAR_14->r_dayofmonth > VAR_9[1][VAR_14->r_month]))
  {
   FUNC_3(FUNC_0("invalid day of month"));
   FUNC_6(VAR_23);
   return;
  }
 }
 FUNC_6(VAR_23);
}
