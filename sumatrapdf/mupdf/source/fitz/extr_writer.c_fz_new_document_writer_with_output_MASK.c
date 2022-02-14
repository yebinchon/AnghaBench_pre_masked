
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_document_writer ;
typedef int fz_context ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,char const*) ;
 int * FUNC_1 (int *,int *,char const*) ;
 int * FUNC_2 (int *,int *,char const*) ;
 int * FUNC_3 (int *,int *,char const*) ;
 int * FUNC_4 (int *,int *,char const*) ;
 int * FUNC_5 (int *,int *,char const*) ;
 int * FUNC_6 (int *,char const*,int *,char const*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,int ,char*,char const*) ;

fz_document_writer *
FUNC_9(fz_context *VAR_1, fz_output *VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (!FUNC_7(VAR_3, "cbz"))
  return FUNC_0(VAR_1, VAR_2, VAR_4);





 if (!FUNC_7(VAR_3, "pcl"))
  return FUNC_1(VAR_1, VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "pclm"))
  return FUNC_2(VAR_1, VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "ps"))
  return FUNC_4(VAR_1, VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "pwg"))
  return FUNC_5(VAR_1, VAR_2, VAR_4);

 if (!FUNC_7(VAR_3, "txt") || !FUNC_7(VAR_3, "text"))
  return FUNC_6(VAR_1, "text", VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "html"))
  return FUNC_6(VAR_1, VAR_3, VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "xhtml"))
  return FUNC_6(VAR_1, VAR_3, VAR_2, VAR_4);
 if (!FUNC_7(VAR_3, "stext"))
  return FUNC_6(VAR_1, VAR_3, VAR_2, VAR_4);

 FUNC_8(VAR_1, VAR_0, "unknown output document format: %s", VAR_3);
}
