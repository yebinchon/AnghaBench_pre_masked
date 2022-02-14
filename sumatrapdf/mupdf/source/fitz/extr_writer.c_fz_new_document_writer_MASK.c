
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document_writer ;
typedef int fz_context ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,char const*) ;
 int * FUNC_1 (int *,char const*,char const*) ;
 int * FUNC_2 (int *,char const*,char const*) ;
 int * FUNC_3 (int *,char const*,char const*) ;
 int * FUNC_4 (int *,char const*,char const*) ;
 int * FUNC_5 (int *,char const*,char const*) ;
 int * FUNC_6 (int *,char const*,char const*) ;
 int * FUNC_7 (int *,char const*,char const*) ;
 int * FUNC_8 (int *,char const*,char const*) ;
 int * FUNC_9 (int *,char const*,char const*) ;
 int * FUNC_10 (int *,char const*,char const*) ;
 int * FUNC_11 (int *,char const*,char const*) ;
 int * FUNC_12 (int *,char const*,char const*) ;
 int * FUNC_13 (int *,char const*,char const*) ;
 int * FUNC_14 (int *,char const*,char const*,char const*) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (int *,int ,char*,...) ;
 char* FUNC_17 (char const*,char) ;

fz_document_writer *
FUNC_18(fz_context *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (!VAR_3)
 {
  VAR_3 = FUNC_17(VAR_2, '.');
  if (!VAR_3)
   FUNC_16(VAR_1, VAR_0, "cannot detect document format");
  VAR_3 += 1;
 }

 if (!FUNC_15(VAR_3, "cbz"))
  return FUNC_0(VAR_1, VAR_2, VAR_4);




 if (!FUNC_15(VAR_3, "svg"))
  return FUNC_13(VAR_1, VAR_2, VAR_4);

 if (!FUNC_15(VAR_3, "png"))
  return FUNC_8(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pam"))
  return FUNC_1(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pnm"))
  return FUNC_9(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pgm"))
  return FUNC_6(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "ppm"))
  return FUNC_10(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pbm"))
  return FUNC_2(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pkm"))
  return FUNC_7(VAR_1, VAR_2, VAR_4);

 if (!FUNC_15(VAR_3, "pcl"))
  return FUNC_3(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pclm"))
  return FUNC_4(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "ps"))
  return FUNC_11(VAR_1, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "pwg"))
  return FUNC_12(VAR_1, VAR_2, VAR_4);

 if (!FUNC_15(VAR_3, "txt") || !FUNC_15(VAR_3, "text"))
  return FUNC_14(VAR_1, "text", VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "html"))
  return FUNC_14(VAR_1, VAR_3, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "xhtml"))
  return FUNC_14(VAR_1, VAR_3, VAR_2, VAR_4);
 if (!FUNC_15(VAR_3, "stext"))
  return FUNC_14(VAR_1, VAR_3, VAR_2, VAR_4);

 FUNC_16(VAR_1, VAR_0, "unknown output document format: %s", VAR_3);
}
