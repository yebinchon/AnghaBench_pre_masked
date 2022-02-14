
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;
typedef int pg_saslprep_rc ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_4 (char const*) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (unsigned char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (char const*) ;
 int VAR_12 ;
 int* FUNC_12 (int*) ;
 int FUNC_13 (int,unsigned char*) ;
 int FUNC_14 (unsigned char*) ;

pg_saslprep_rc
FUNC_15(const char *VAR_13, char **VAR_14)
{
 pg_wchar *VAR_15 = ((void*)0);
 pg_wchar *VAR_16 = ((void*)0);
 int VAR_17;
 char *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 bool VAR_22;
 unsigned char *VAR_23;
 pg_wchar *VAR_24;


 *VAR_14 = ((void*)0);


 if (FUNC_11(VAR_13) > VAR_3)
 {

  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("password too long")));



 }





 if (FUNC_8(VAR_13))
 {
  *VAR_14 = FUNC_4(VAR_13);
  if (!(*VAR_14))
   goto oom;
  return VAR_8;
 }






 VAR_17 = FUNC_9(VAR_13);
 if (VAR_17 < 0)
  return VAR_5;

 VAR_15 = FUNC_0((VAR_17 + 1) * sizeof(pg_wchar));
 if (!VAR_15)
  goto oom;

 VAR_23 = (unsigned char *) VAR_13;
 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
 {
  VAR_15[VAR_21] = FUNC_14(VAR_23);
  VAR_23 += FUNC_10(VAR_23);
 }
 VAR_15[VAR_21] = (pg_wchar) '\0';
 VAR_20 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
 {
  pg_wchar VAR_25 = VAR_15[VAR_21];

  if (FUNC_3(VAR_25, VAR_10))
   VAR_15[VAR_20++] = 0x0020;
  else if (FUNC_3(VAR_25, VAR_9))
  {

  }
  else
   VAR_15[VAR_20++] = VAR_25;
 }
 VAR_15[VAR_20] = (pg_wchar) '\0';
 VAR_17 = VAR_20;

 if (VAR_17 == 0)
  goto prohibited;





 VAR_16 = FUNC_12(VAR_15);
 if (!VAR_16)
  goto oom;





 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
 {
  pg_wchar VAR_26 = VAR_15[VAR_21];

  if (FUNC_3(VAR_26, VAR_11))
   goto prohibited;
  if (FUNC_3(VAR_26, VAR_12))
   goto prohibited;
 }
 VAR_22 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
 {
  pg_wchar VAR_27 = VAR_15[VAR_21];

  if (FUNC_3(VAR_27, VAR_4))
  {
   VAR_22 = 1;
   break;
  }
 }

 if (VAR_22)
 {
  pg_wchar VAR_28 = VAR_15[0];
  pg_wchar VAR_29 = VAR_15[VAR_17 - 1];

  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
  {
   pg_wchar VAR_30 = VAR_15[VAR_21];

   if (FUNC_3(VAR_30, VAR_2))
    goto prohibited;
  }

  if (!FUNC_3(VAR_28, VAR_4) ||
   !FUNC_3(VAR_29, VAR_4))
   goto prohibited;
 }




 VAR_19 = 0;
 for (VAR_24 = VAR_16; *VAR_24; VAR_24++)
 {
  unsigned char VAR_31[4];

  FUNC_13(*VAR_24, VAR_31);
  VAR_19 += FUNC_10(VAR_31);
 }

 VAR_18 = FUNC_0(VAR_19 + 1);
 if (!VAR_18)
  goto oom;





 VAR_23 = (unsigned char *) VAR_18;
 for (VAR_24 = VAR_16; *VAR_24; VAR_24++)
 {
  FUNC_13(*VAR_24, VAR_23);
  VAR_23 += FUNC_10(VAR_23);
 }
 FUNC_1((char *) VAR_23 == VAR_18 + VAR_19);
 *VAR_23 = '\0';

 FUNC_2(VAR_15);
 FUNC_2(VAR_16);

 *VAR_14 = VAR_18;
 return VAR_8;

prohibited:
 if (VAR_15)
  FUNC_2(VAR_15);
 if (VAR_16)
  FUNC_2(VAR_16);

 return VAR_7;

oom:
 if (VAR_15)
  FUNC_2(VAR_15);
 if (VAR_16)
  FUNC_2(VAR_16);

 return VAR_6;
}
