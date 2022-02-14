
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_stream ;
typedef int fz_context ;


 int * FUNC_0 (int *,unsigned char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int,int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;

fz_stream *
FUNC_7(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_0, VAR_2))
  return FUNC_5(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_6(VAR_0, VAR_2);
 if (FUNC_3(VAR_0, VAR_2))
  return FUNC_4(VAR_0, VAR_1, VAR_3, ((void*)0));

 FUNC_1(VAR_0, "content stream is not a stream (%d 0 R)", VAR_3);
 return FUNC_0(VAR_0, (unsigned char *)"", 0);
}
