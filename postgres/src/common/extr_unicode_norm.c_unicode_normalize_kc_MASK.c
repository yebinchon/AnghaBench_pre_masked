
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint32 ;
typedef char pg_wchar ;
struct TYPE_3__ {int comb_class; } ;
typedef TYPE_1__ pg_unicode_decomposition ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const,char**,int*) ;
 TYPE_1__* FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char,char,char*) ;

pg_wchar *
FUNC_7(const pg_wchar *VAR_0)
{
 pg_wchar *VAR_1;
 pg_wchar *VAR_2;
 int VAR_3,
    VAR_4;
 int VAR_5;
 const pg_wchar *VAR_6;


 int VAR_7;
 int VAR_8;
 int VAR_9;
 uint32 VAR_10;






 VAR_3 = 0;
 for (VAR_6 = VAR_0; *VAR_6; VAR_6++)
  VAR_3 += FUNC_5(*VAR_6);

 VAR_1 = (pg_wchar *) FUNC_0((VAR_3 + 1) * sizeof(pg_wchar));
 if (VAR_1 == ((void*)0))
  return ((void*)0);





 VAR_4 = 0;
 for (VAR_6 = VAR_0; *VAR_6; VAR_6++)
  FUNC_3(*VAR_6, &VAR_1, &VAR_4);
 VAR_1[VAR_3] = '\0';
 FUNC_1(VAR_3 == VAR_4);




 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
 {
  pg_wchar VAR_11 = VAR_1[VAR_5 - 1];
  pg_wchar VAR_12 = VAR_1[VAR_5];
  pg_wchar VAR_13;
  pg_unicode_decomposition *VAR_14 = FUNC_4(VAR_11);
  pg_unicode_decomposition *VAR_15 = FUNC_4(VAR_12);






  if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
   continue;
  if (VAR_15->comb_class == 0x0 || VAR_14->comb_class == 0x0)
   continue;

  if (VAR_14->comb_class <= VAR_15->comb_class)
   continue;


  VAR_13 = VAR_1[VAR_5 - 1];
  VAR_1[VAR_5 - 1] = VAR_1[VAR_5];
  VAR_1[VAR_5] = VAR_13;


  if (VAR_5 > 1)
   VAR_5 -= 2;
 }







 VAR_2 = (pg_wchar *) FUNC_0((VAR_3 + 1) * sizeof(pg_wchar));
 if (!VAR_2)
 {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 VAR_7 = -1;
 VAR_8 = 0;
 VAR_9 = 1;
 VAR_10 = VAR_2[0] = VAR_1[0];

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
 {
  pg_wchar VAR_16 = VAR_1[VAR_5];
  pg_unicode_decomposition *VAR_17 = FUNC_4(VAR_16);
  int VAR_18 = (VAR_17 == ((void*)0)) ? 0 : VAR_17->comb_class;
  pg_wchar VAR_19;

  if (VAR_7 < VAR_18 &&
   FUNC_6(VAR_10, VAR_16, &VAR_19))
  {
   VAR_2[VAR_8] = VAR_19;
   VAR_10 = VAR_19;
  }
  else if (VAR_18 == 0)
  {
   VAR_8 = VAR_9;
   VAR_10 = VAR_16;
   VAR_7 = -1;
   VAR_2[VAR_9++] = VAR_16;
  }
  else
  {
   VAR_7 = VAR_18;
   VAR_2[VAR_9++] = VAR_16;
  }
 }
 VAR_2[VAR_9] = (pg_wchar) '\0';

 FUNC_2(VAR_1);

 return VAR_2;
}
