
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
struct TYPE_9__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef int pg_wchar ;
typedef int errMsg ;
struct TYPE_10__ {int * data; int len; } ;
typedef TYPE_2__ StringInfoData ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 size_t FUNC_16 (scalar_t__,int *,int) ;
 int FUNC_17 (int,int *,char*,int) ;
 int FUNC_18 (int *,int *,size_t,int,int *,int,TYPE_1__*,int ) ;

text *
FUNC_19(text *VAR_5, void *VAR_6,
     text *VAR_7, bool VAR_8)
{
 text *VAR_9;
 regex_t *VAR_10 = (regex_t *) VAR_6;
 int VAR_11 = FUNC_3(VAR_5);
 StringInfoData VAR_12;
 regmatch_t VAR_13[VAR_2];
 pg_wchar *VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17;
 char *VAR_18;
 bool VAR_19;

 FUNC_13(&VAR_12);


 VAR_14 = (pg_wchar *) FUNC_14((VAR_11 + 1) * sizeof(pg_wchar));
 VAR_15 = FUNC_16(FUNC_1(VAR_5), VAR_14, VAR_11);


 VAR_19 = FUNC_8(VAR_7);


 VAR_18 = (char *) FUNC_1(VAR_5);
 VAR_17 = 0;

 VAR_16 = 0;
 while (VAR_16 <= VAR_15)
 {
  int VAR_20;

  FUNC_0();

  VAR_20 = FUNC_18(VAR_10,
         VAR_14,
         VAR_15,
         VAR_16,
         ((void*)0),
         VAR_2,
         VAR_13,
         0);

  if (VAR_20 == VAR_3)
   break;

  if (VAR_20 != VAR_4)
  {
   char VAR_21[100];

   FUNC_0();
   FUNC_17(VAR_20, VAR_10, VAR_21, sizeof(VAR_21));
   FUNC_10(VAR_1,
     (FUNC_11(VAR_0),
      FUNC_12("regular expression failed: %s", VAR_21)));
  }





  if (VAR_13[0].rm_so - VAR_17 > 0)
  {
   int VAR_22;

   VAR_22 = FUNC_7(VAR_18,
             VAR_13[0].rm_so - VAR_17);
   FUNC_4(&VAR_12, VAR_18, VAR_22);





   VAR_18 += VAR_22;
   VAR_17 = VAR_13[0].rm_so;
  }





  if (VAR_19)
   FUNC_5(&VAR_12, VAR_7, VAR_13,
           VAR_18, VAR_17);
  else
   FUNC_6(&VAR_12, VAR_7);


  VAR_18 += FUNC_7(VAR_18,
          VAR_13[0].rm_eo - VAR_17);
  VAR_17 = VAR_13[0].rm_eo;




  if (!VAR_8)
   break;







  VAR_16 = VAR_17;
  if (VAR_13[0].rm_so == VAR_13[0].rm_eo)
   VAR_16++;
 }




 if (VAR_17 < VAR_15)
 {
  int VAR_23;

  VAR_23 = ((char *) VAR_5 + FUNC_2(VAR_5)) - VAR_18;
  FUNC_4(&VAR_12, VAR_18, VAR_23);
 }

 VAR_9 = FUNC_9(VAR_12.data, VAR_12.len);
 FUNC_15(VAR_12.data);
 FUNC_15(VAR_14);

 return VAR_9;
}
