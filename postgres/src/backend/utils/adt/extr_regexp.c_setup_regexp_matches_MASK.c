
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int text ;
struct TYPE_15__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_16__ {int npatterns; int* match_locs; int conv_bufsiz; int * conv_buf; TYPE_1__* wide_str; int nmatches; int * orig_str; } ;
typedef TYPE_2__ regexp_matches_ctx ;
struct TYPE_17__ {int re_nsub; } ;
typedef TYPE_3__ regex_t ;
typedef TYPE_1__ pg_wchar ;
struct TYPE_18__ {scalar_t__ glob; int cflags; } ;
typedef TYPE_5__ pg_re_flags ;
typedef int int64 ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*,int,int,int,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (int*,int) ;

__attribute__((used)) static regexp_matches_ctx *
FUNC_13(text *VAR_3, text *VAR_4, pg_re_flags *VAR_5,
      Oid VAR_6,
      bool VAR_7,
      bool VAR_8,
      bool VAR_9)
{
 regexp_matches_ctx *VAR_10 = FUNC_8(sizeof(regexp_matches_ctx));
 int VAR_11 = FUNC_10();
 int VAR_12;
 pg_wchar *VAR_13;
 int VAR_14;
 regex_t *VAR_15;
 regmatch_t *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23 = 0;


 VAR_10->orig_str = VAR_3;


 VAR_12 = FUNC_3(VAR_3);
 VAR_13 = (pg_wchar *) FUNC_7(sizeof(pg_wchar) * (VAR_12 + 1));
 VAR_14 = FUNC_11(FUNC_2(VAR_3), VAR_13, VAR_12);


 VAR_15 = FUNC_0(VAR_4, VAR_5->cflags, VAR_6);


 if (VAR_7 && VAR_15->re_nsub > 0)
 {
  VAR_10->npatterns = VAR_15->re_nsub;
  VAR_17 = VAR_15->re_nsub + 1;
 }
 else
 {
  VAR_7 = 0;
  VAR_10->npatterns = 1;
  VAR_17 = 1;
 }


 VAR_16 = FUNC_7(sizeof(regmatch_t) * VAR_17);







 VAR_18 = VAR_5->glob ? 255 : 31;
 VAR_10->match_locs = (int *) FUNC_7(sizeof(int) * VAR_18);
 VAR_19 = 0;


 VAR_20 = 0;
 VAR_21 = 0;
 VAR_22 = 0;
 while (FUNC_1(VAR_15, VAR_13, VAR_14, VAR_22,
       VAR_17, VAR_16))
 {





  if (!VAR_8 ||
   (VAR_16[0].rm_so < VAR_14 &&
    VAR_16[0].rm_eo > VAR_20))
  {

   while (VAR_19 + VAR_10->npatterns * 2 + 1 > VAR_18)
   {
    VAR_18 += VAR_18 + 1;
    if (VAR_18 > VAR_2 / sizeof(int))
     FUNC_4(VAR_1,
       (FUNC_5(VAR_0),
        FUNC_6("too many regular expression matches")));
    VAR_10->match_locs = (int *) FUNC_12(VAR_10->match_locs,
              sizeof(int) * VAR_18);
   }


   if (VAR_7)
   {
    int VAR_24;

    for (VAR_24 = 1; VAR_24 <= VAR_10->npatterns; VAR_24++)
    {
     int VAR_25 = VAR_16[VAR_24].rm_so;
     int VAR_26 = VAR_16[VAR_24].rm_eo;

     VAR_10->match_locs[VAR_19++] = VAR_25;
     VAR_10->match_locs[VAR_19++] = VAR_26;
     if (VAR_25 >= 0 && VAR_26 >= 0 && (VAR_26 - VAR_25) > VAR_23)
      VAR_23 = (VAR_26 - VAR_25);
    }
   }
   else
   {
    int VAR_27 = VAR_16[0].rm_so;
    int VAR_28 = VAR_16[0].rm_eo;

    VAR_10->match_locs[VAR_19++] = VAR_27;
    VAR_10->match_locs[VAR_19++] = VAR_28;
    if (VAR_27 >= 0 && VAR_28 >= 0 && (VAR_28 - VAR_27) > VAR_23)
     VAR_23 = (VAR_28 - VAR_27);
   }
   VAR_10->nmatches++;






   if (VAR_9 &&
    VAR_16[0].rm_so >= 0 &&
    (VAR_16[0].rm_so - VAR_21) > VAR_23)
    VAR_23 = (VAR_16[0].rm_so - VAR_21);
   VAR_21 = VAR_16[0].rm_eo;
  }
  VAR_20 = VAR_16[0].rm_eo;


  if (!VAR_5->glob)
   break;







  VAR_22 = VAR_20;
  if (VAR_16[0].rm_so == VAR_16[0].rm_eo)
   VAR_22++;
  if (VAR_22 > VAR_14)
   break;
 }





 if (VAR_9 &&
  (VAR_14 - VAR_21) > VAR_23)
  VAR_23 = (VAR_14 - VAR_21);





 VAR_10->match_locs[VAR_19] = VAR_14;

 if (VAR_11 > 1)
 {
  int64 VAR_29 = VAR_11 * (int64) VAR_23;
  int VAR_30;
  if (VAR_29 > VAR_12)
   VAR_30 = VAR_12 + 1;
  else
   VAR_30 = VAR_29 + 1;

  VAR_10->conv_buf = FUNC_7(VAR_30);
  VAR_10->conv_bufsiz = VAR_30;
  VAR_10->wide_str = VAR_13;
 }
 else
 {

  FUNC_9(VAR_13);
  VAR_10->wide_str = ((void*)0);
  VAR_10->conv_buf = ((void*)0);
  VAR_10->conv_bufsiz = 0;
 }


 FUNC_9(VAR_16);

 return VAR_10;
}
