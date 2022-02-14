
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *) ;

fz_stream *FUNC_5(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2))
  return FUNC_3(VAR_1, FUNC_1(VAR_1, VAR_2), FUNC_4(VAR_1, VAR_2));
 FUNC_0(VAR_1, VAR_0, "object is not a stream");
}
