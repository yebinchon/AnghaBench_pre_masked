
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int *,scalar_t__) ;
 char* FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 char* FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,int ,int *) ;
 char* FUNC_10 (int *,int *,int *,int *) ;
 char* FUNC_11 (int *,int *,int *) ;
 char* FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (char const*) ;

char *
FUNC_17(fz_context *VAR_13, pdf_document *VAR_14, pdf_obj *VAR_15, int VAR_16)
{
 pdf_obj *VAR_17, *VAR_18, *VAR_19;

 if (!VAR_15)
  return ((void*)0);

 VAR_17 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_11));
 if (FUNC_9(VAR_13, FUNC_0(VAR_3), VAR_17))
 {
  VAR_18 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_0));
  return FUNC_11(VAR_13, VAR_14, VAR_18);
 }
 else if (FUNC_9(VAR_13, FUNC_0(VAR_12), VAR_17))
 {

  const char *VAR_20 = FUNC_7(VAR_13, VAR_15, FUNC_0(VAR_12));
  if (!FUNC_2(VAR_13, VAR_20))
  {
   pdf_obj *VAR_21 = FUNC_8(VAR_13, FUNC_13(VAR_13, VAR_14), "Root/URI/Base");
   const char *VAR_22 = VAR_21 ? FUNC_12(VAR_13, VAR_21) : "file://";
   char *VAR_23 = FUNC_3(VAR_13, FUNC_16(VAR_22) + FUNC_16(VAR_20) + 1);
   FUNC_15(VAR_23, VAR_22);
   FUNC_14(VAR_23, VAR_20);
   return VAR_23;
  }
  return FUNC_4(VAR_13, VAR_20);
 }
 else if (FUNC_9(VAR_13, FUNC_0(VAR_6), VAR_17))
 {
  VAR_19 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_1));
  return FUNC_10(VAR_13, VAR_14, VAR_19, ((void*)0));
 }
 else if (FUNC_9(VAR_13, FUNC_0(VAR_4), VAR_17))
 {
  VAR_18 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_0));
  VAR_19 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_1));
  return FUNC_10(VAR_13, VAR_14, VAR_19, VAR_18);
 }
 else if (FUNC_9(VAR_13, FUNC_0(VAR_8), VAR_17))
 {
  VAR_18 = FUNC_6(VAR_13, VAR_15, FUNC_0(VAR_7));

  if (FUNC_9(VAR_13, FUNC_0(VAR_2), VAR_18))
   VAR_16 = 0;
  else if (FUNC_9(VAR_13, FUNC_0(VAR_5), VAR_18))
   VAR_16 = FUNC_5(VAR_13, VAR_14) - 1;
  else if (FUNC_9(VAR_13, FUNC_0(VAR_10), VAR_18) && VAR_16 >= 0)
  {
   if (VAR_16 > 0)
    VAR_16--;
  }
  else if (FUNC_9(VAR_13, FUNC_0(VAR_9), VAR_18) && VAR_16 >= 0)
  {
   if (VAR_16 < FUNC_5(VAR_13, VAR_14) - 1)
    VAR_16++;
  }
  else
   return ((void*)0);

  return FUNC_1(VAR_13, "#%d", VAR_16 + 1);
 }

 return ((void*)0);
}
