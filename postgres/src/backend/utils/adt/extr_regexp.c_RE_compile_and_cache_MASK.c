
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int text ;
typedef int regex_t ;
typedef int pg_wchar ;
typedef int errMsg ;
struct TYPE_5__ {int cre_pat_len; int cre_flags; scalar_t__ cre_collation; int cre_re; int * cre_pat; } ;
typedef TYPE_1__ cached_re_str ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int *,int) ;
 int FUNC_16 (int *,int *,int,int,scalar_t__) ;
 int FUNC_17 (int,int *,char*,int) ;
 int FUNC_18 (int *) ;
 TYPE_1__* VAR_6 ;

regex_t *
FUNC_19(text *VAR_7, int VAR_8, Oid VAR_9)
{
 int VAR_10 = FUNC_4(VAR_7);
 char *VAR_11 = FUNC_3(VAR_7);
 pg_wchar *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 cached_re_str VAR_16;
 char VAR_17[100];






 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
 {
  if (VAR_6[VAR_14].cre_pat_len == VAR_10 &&
   VAR_6[VAR_14].cre_flags == VAR_8 &&
   VAR_6[VAR_14].cre_collation == VAR_9 &&
   FUNC_10(VAR_6[VAR_14].cre_pat, VAR_11, VAR_10) == 0)
  {



   if (VAR_14 > 0)
   {
    VAR_16 = VAR_6[VAR_14];
    FUNC_12(&VAR_6[1], &VAR_6[0], VAR_14 * sizeof(cached_re_str));
    VAR_6[0] = VAR_16;
   }

   return &VAR_6[0].cre_re;
  }
 }







 VAR_12 = (pg_wchar *) FUNC_13((VAR_10 + 1) * sizeof(pg_wchar));
 VAR_13 = FUNC_15(VAR_11,
            VAR_12,
            VAR_10);

 VAR_15 = FUNC_16(&VAR_16.cre_re,
        VAR_12,
        VAR_13,
        VAR_8,
        VAR_9);

 FUNC_14(VAR_12);

 if (VAR_15 != VAR_4)
 {
  FUNC_1();

  FUNC_17(VAR_15, &VAR_16.cre_re, VAR_17, sizeof(VAR_17));
  FUNC_5(VAR_2,
    (FUNC_6(VAR_0),
     FUNC_7("invalid regular expression: %s", VAR_17)));
 }







 VAR_16.cre_pat = FUNC_9(FUNC_2(VAR_10, 1));
 if (VAR_16.cre_pat == ((void*)0))
 {
  FUNC_18(&VAR_16.cre_re);
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("out of memory")));
 }
 FUNC_11(VAR_16.cre_pat, VAR_11, VAR_10);
 VAR_16.cre_pat_len = VAR_10;
 VAR_16.cre_flags = VAR_8;
 VAR_16.cre_collation = VAR_9;





 if (VAR_5 >= VAR_3)
 {
  --VAR_5;
  FUNC_0(VAR_5 < VAR_3);
  FUNC_18(&VAR_6[VAR_5].cre_re);
  FUNC_8(VAR_6[VAR_5].cre_pat);
 }

 if (VAR_5 > 0)
  FUNC_12(&VAR_6[1], &VAR_6[0], VAR_5 * sizeof(cached_re_str));

 VAR_6[0] = VAR_16;
 VAR_5++;

 return &VAR_6[0].cre_re;
}
