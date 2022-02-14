
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef int text ;
struct pg_tm {int tm_hour; int tm_min; int tm_sec; int tm_year; int tm_mon; int tm_mday; char* tm_zone; } ;
typedef scalar_t__ fsec_t ;
struct TYPE_7__ {int ssss; int ss; int mi; int hh; scalar_t__ clock; int year; int cc; int yysz; int j; int ww; scalar_t__ mode; int ddd; int w; int dd; int mm; int ms; scalar_t__ us; int ff; scalar_t__ tzsign; scalar_t__ tzh; int tzm; scalar_t__ bc; scalar_t__ d; scalar_t__ pm; } ;
typedef TYPE_1__ TmFromChar ;
struct TYPE_8__ {char* format; } ;
typedef char FormatNode ;
typedef TYPE_2__ DCHCacheEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,char*,TYPE_1__*,int,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct pg_tm*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int,int,int,struct pg_tm*) ;
 int VAR_23 ;
 int FUNC_11 (struct pg_tm*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,...) ;
 size_t FUNC_17 (int) ;
 int FUNC_18 (int,int*,int*,int*) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,scalar_t__,int*,int*,int*) ;
 int FUNC_21 (int,int*,int*,int*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (char*,char*,int ,int ,int ,int,int *) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (char*,char,scalar_t__,int) ;
 char* FUNC_26 (int *) ;

__attribute__((used)) static void
FUNC_27(text *VAR_24, text *VAR_25, bool VAR_26,
    struct pg_tm *VAR_27, fsec_t *VAR_28, int *VAR_29,
    uint32 *VAR_30, bool *VAR_31)
{
 FormatNode *VAR_32 = ((void*)0);
 TmFromChar VAR_33;
 int VAR_34;
 char *VAR_35;
 int VAR_36;
 bool VAR_37 = 0;

 VAR_35 = FUNC_26(VAR_24);

 FUNC_12(&VAR_33);
 FUNC_11(VAR_27);
 *VAR_28 = 0;
 VAR_36 = 0;

 VAR_34 = FUNC_9(VAR_25);

 if (VAR_34)
 {
  char *VAR_38;

  VAR_38 = FUNC_26(VAR_25);

  if (VAR_34 > VAR_3)
  {




   VAR_32 = (FormatNode *) FUNC_22((VAR_34 + 1) * sizeof(FormatNode));

   FUNC_23(VAR_32, VAR_38, VAR_6, VAR_7, VAR_5,
       VAR_4 | (VAR_26 ? VAR_21 : 0), ((void*)0));
  }
  else
  {



   DCHCacheEntry *VAR_39 = FUNC_0(VAR_38, VAR_26);

   VAR_37 = 1;
   VAR_32 = VAR_39->format;
  }






  FUNC_2(VAR_32, VAR_35, &VAR_33, VAR_26, VAR_31);
  VAR_0;

  FUNC_24(VAR_38);

  if (VAR_30)
   *VAR_30 = FUNC_1(VAR_32, VAR_31);

  if (!VAR_37)
  {
   FUNC_24(VAR_32);
   VAR_32 = ((void*)0);
  }

  VAR_0;
 }

 FUNC_4(&VAR_33);




 if (VAR_33.ssss)
 {
  int VAR_40 = VAR_33.ssss;

  VAR_27->tm_hour = VAR_40 / VAR_19;
  VAR_40 %= VAR_19;
  VAR_27->tm_min = VAR_40 / VAR_20;
  VAR_40 %= VAR_20;
  VAR_27->tm_sec = VAR_40;
 }

 if (VAR_33.ss)
  VAR_27->tm_sec = VAR_33.ss;
 if (VAR_33.mi)
  VAR_27->tm_min = VAR_33.mi;
 if (VAR_33.hh)
  VAR_27->tm_hour = VAR_33.hh;

 if (VAR_33.clock == VAR_1)
 {
  if (VAR_27->tm_hour < 1 || VAR_27->tm_hour > VAR_14 / 2)
  {
   FUNC_8(FUNC_13(VAR_12,
         (FUNC_14(VAR_11),
          FUNC_16("hour \"%d\" is invalid for the 12-hour clock",
           VAR_27->tm_hour),
          FUNC_15("Use the 24-hour clock, or give an hour between 1 and 12."))));
  }

  if (VAR_33.pm && VAR_27->tm_hour < VAR_14 / 2)
   VAR_27->tm_hour += VAR_14 / 2;
  else if (!VAR_33.pm && VAR_27->tm_hour == VAR_14 / 2)
   VAR_27->tm_hour = 0;
 }

 if (VAR_33.year)
 {






  if (VAR_33.cc && VAR_33.yysz <= 2)
  {
   if (VAR_33.bc)
    VAR_33.cc = -VAR_33.cc;
   VAR_27->tm_year = VAR_33.year % 100;
   if (VAR_27->tm_year)
   {
    if (VAR_33.cc >= 0)
     VAR_27->tm_year += (VAR_33.cc - 1) * 100;
    else
     VAR_27->tm_year = (VAR_33.cc + 1) * 100 - VAR_27->tm_year + 1;
   }
   else
   {

    VAR_27->tm_year = VAR_33.cc * 100 + ((VAR_33.cc >= 0) ? 0 : 1);
   }
  }
  else
  {

   VAR_27->tm_year = VAR_33.year;
   if (VAR_33.bc && VAR_27->tm_year > 0)
    VAR_27->tm_year = -(VAR_27->tm_year - 1);
  }
  VAR_36 |= FUNC_5(VAR_23);
 }
 else if (VAR_33.cc)
 {

  if (VAR_33.bc)
   VAR_33.cc = -VAR_33.cc;
  if (VAR_33.cc >= 0)

   VAR_27->tm_year = (VAR_33.cc - 1) * 100 + 1;
  else

   VAR_27->tm_year = VAR_33.cc * 100 + 1;
  VAR_36 |= FUNC_5(VAR_23);
 }

 if (VAR_33.j)
 {
  FUNC_21(VAR_33.j, &VAR_27->tm_year, &VAR_27->tm_mon, &VAR_27->tm_mday);
  VAR_36 |= VAR_10;
 }

 if (VAR_33.ww)
 {
  if (VAR_33.mode == VAR_13)
  {




   if (VAR_33.d)
    FUNC_20(VAR_33.ww, VAR_33.d, &VAR_27->tm_year, &VAR_27->tm_mon, &VAR_27->tm_mday);
   else
    FUNC_18(VAR_33.ww, &VAR_27->tm_year, &VAR_27->tm_mon, &VAR_27->tm_mday);
   VAR_36 |= VAR_10;
  }
  else
   VAR_33.ddd = (VAR_33.ww - 1) * 7 + 1;
 }

 if (VAR_33.w)
  VAR_33.dd = (VAR_33.w - 1) * 7 + 1;
 if (VAR_33.dd)
 {
  VAR_27->tm_mday = VAR_33.dd;
  VAR_36 |= FUNC_5(VAR_2);
 }
 if (VAR_33.mm)
 {
  VAR_27->tm_mon = VAR_33.mm;
  VAR_36 |= FUNC_5(VAR_17);
 }

 if (VAR_33.ddd && (VAR_27->tm_mon <= 1 || VAR_27->tm_mday <= 1))
 {







  if (!VAR_27->tm_year && !VAR_33.bc)
  {
   FUNC_8(FUNC_13(VAR_12,
         (FUNC_14(VAR_11),
          FUNC_16("cannot calculate day of year without year information"))));
  }

  if (VAR_33.mode == VAR_13)
  {
   int VAR_41;

   VAR_41 = FUNC_19(VAR_27->tm_year, 1) - 1;

   FUNC_21(VAR_41 + VAR_33.ddd, &VAR_27->tm_year, &VAR_27->tm_mon, &VAR_27->tm_mday);
   VAR_36 |= VAR_10;
  }
  else
  {
   const int *VAR_42;
   int VAR_43;

   static const int VAR_44[2][13] = {
    {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
   {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366}};

   VAR_42 = VAR_44[FUNC_17(VAR_27->tm_year)];

   for (VAR_43 = 1; VAR_43 <= VAR_18; VAR_43++)
   {
    if (VAR_33.ddd <= VAR_42[VAR_43])
     break;
   }
   if (VAR_27->tm_mon <= 1)
    VAR_27->tm_mon = VAR_43;

   if (VAR_27->tm_mday <= 1)
    VAR_27->tm_mday = VAR_33.ddd - VAR_42[VAR_43 - 1];

   VAR_36 |= FUNC_5(VAR_17) | FUNC_5(VAR_2);
  }
 }

 if (VAR_33.ms)
  *VAR_28 += VAR_33.ms * 1000;
 if (VAR_33.us)
  *VAR_28 += VAR_33.us;
 if (VAR_29)
  *VAR_29 = VAR_33.ff;


 if (VAR_36 != 0)
 {

  int VAR_45 = FUNC_10(VAR_36, 1, 0, 0, VAR_27);

  if (VAR_45 != 0)
  {





   FUNC_8(FUNC_6(VAR_8, VAR_35, "timestamp"));
  }
 }


 if (VAR_27->tm_hour < 0 || VAR_27->tm_hour >= VAR_14 ||
  VAR_27->tm_min < 0 || VAR_27->tm_min >= VAR_16 ||
  VAR_27->tm_sec < 0 || VAR_27->tm_sec >= VAR_20 ||
  *VAR_28 < FUNC_7(0) || *VAR_28 >= VAR_22)
 {
  FUNC_8(FUNC_6(VAR_8, VAR_35, "timestamp"));
 }


 if (VAR_33.tzsign)
 {
  char *VAR_46;

  if (VAR_33.tzh < 0 || VAR_33.tzh > VAR_15 ||
   VAR_33.tzm < 0 || VAR_33.tzm >= VAR_16)
  {
   FUNC_8(FUNC_6(VAR_9, VAR_35, "timestamp"));
  }

  VAR_46 = FUNC_25("%c%02d:%02d",
       VAR_33.tzsign > 0 ? '+' : '-', VAR_33.tzh, VAR_33.tzm);

  VAR_27->tm_zone = VAR_46;
 }

 FUNC_3(VAR_27);

on_error:

 if (VAR_32 && !VAR_37)
  FUNC_24(VAR_32);

 FUNC_24(VAR_35);
}
