
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_write_options ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char**,char*) ;
 int * FUNC_6 (int *,int *,int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int ,char*,char*) ;
 int FUNC_8 (int *,int *,char*) ;
 int VAR_4 ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *,char*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 void* VAR_6 ;
 void* VAR_7 ;

int FUNC_15(int VAR_8, char **VAR_9)
{
 char *VAR_10;
 char *VAR_11 = "out.pdf";
 char *VAR_12 = "";
 int VAR_13;
 pdf_write_options VAR_14 = VAR_4;
 pdf_document *VAR_15;
 fz_context *VAR_16;

 while ((VAR_13 = FUNC_5(VAR_8, VAR_9, "x:y:")) != -1)
 {
  switch (VAR_13)
  {
  case 'p': VAR_12 = VAR_2; break;
  case 'x': VAR_6 = FUNC_0(VAR_2); break;
  case 'y': VAR_7 = FUNC_0(VAR_2); break;
  default: FUNC_14(); break;
  }
 }

 if (VAR_8 - VAR_3 < 1)
  FUNC_14();

 VAR_10 = VAR_9[VAR_3++];

 if (VAR_8 - VAR_3 > 0 &&
  (FUNC_13(VAR_9[VAR_3], ".pdf") || FUNC_13(VAR_9[VAR_3], ".PDF")))
 {
  VAR_11 = VAR_9[VAR_3++];
 }

 VAR_16 = FUNC_6(((void*)0), ((void*)0), VAR_1);
 if (!VAR_16)
 {
  FUNC_3(VAR_5, "cannot initialise context\n");
  FUNC_2(1);
 }

 VAR_15 = FUNC_11(VAR_16, VAR_10);
 if (FUNC_10(VAR_16, VAR_15))
  if (!FUNC_8(VAR_16, VAR_15, VAR_12))
   FUNC_7(VAR_16, VAR_0, "cannot authenticate password: %s", VAR_10);

 FUNC_1(VAR_16, VAR_15);

 FUNC_12(VAR_16, VAR_15, VAR_11, &VAR_14);

 FUNC_9(VAR_16, VAR_15);
 FUNC_4(VAR_16);
 return 0;
}
