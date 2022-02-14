
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
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int ) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 char* FUNC_14 (int *,int *) ;

char *
FUNC_15(fz_context *VAR_6, pdf_document *VAR_7, pdf_obj *VAR_8, pdf_obj *VAR_9)
{
 pdf_obj *VAR_10 = ((void*)0);
 const char *VAR_11;
 char *VAR_12;
 char VAR_13[256];

 if (FUNC_10(VAR_6, VAR_8))
  VAR_10 = VAR_8;

 if (FUNC_8(VAR_6, VAR_8)) {



  VAR_10 = FUNC_5(VAR_6, VAR_8, FUNC_0(VAR_5));

  if (!VAR_10)
   VAR_10 = FUNC_6(VAR_6, VAR_8, FUNC_0(VAR_3), FUNC_0(VAR_1));
 }

 if (!FUNC_10(VAR_6, VAR_10))
 {
  FUNC_3(VAR_6, "cannot parse file specification");
  return ((void*)0);
 }

 if (FUNC_7(VAR_6, VAR_9))
  FUNC_2(VAR_13, sizeof VAR_13, "#page=%d", FUNC_4(VAR_6, VAR_9, 0) + 1);
 else if (FUNC_9(VAR_6, VAR_9))
  FUNC_2(VAR_13, sizeof VAR_13, "#%s", FUNC_12(VAR_6, VAR_9));
 else if (FUNC_10(VAR_6, VAR_9))
  FUNC_2(VAR_13, sizeof VAR_13, "#%s", FUNC_13(VAR_6, VAR_9));
 else
  VAR_13[0] = 0;

 VAR_11 = FUNC_14(VAR_6, VAR_10);
 VAR_12 = ((void*)0);
 if (!VAR_12)
  VAR_12 = FUNC_1(VAR_6, "file://%s%s", VAR_11, VAR_13);

 return VAR_12;
}
