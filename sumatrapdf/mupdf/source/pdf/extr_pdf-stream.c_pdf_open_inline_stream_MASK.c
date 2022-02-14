
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_stream ;
typedef int fz_context ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ fz_compression_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int *,int *,int *,int ,int ,TYPE_1__*) ;
 int * FUNC_2 (int *,int *,int *,int *,int *,int ,int ,TYPE_1__*) ;
 int * FUNC_3 (int *,int *,int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;

fz_stream *
FUNC_8(fz_context *VAR_5, pdf_document *VAR_6, pdf_obj *VAR_7, int VAR_8, fz_stream *VAR_9, fz_compression_params *VAR_10)
{
 pdf_obj *VAR_11 = FUNC_6(VAR_5, VAR_7, FUNC_0(VAR_4), FUNC_0(VAR_2));
 pdf_obj *VAR_12 = FUNC_6(VAR_5, VAR_7, FUNC_0(VAR_1), FUNC_0(VAR_0));

 if (FUNC_7(VAR_5, VAR_11))
  return FUNC_1(VAR_5, VAR_9, VAR_6, VAR_11, VAR_12, 0, 0, VAR_10);
 else if (FUNC_5(VAR_5, VAR_11) > 0)
  return FUNC_2(VAR_5, VAR_9, VAR_6, VAR_11, VAR_12, 0, 0, VAR_10);

 if (VAR_10)
  VAR_10->type = VAR_3;
 return FUNC_3(VAR_5, VAR_9, VAR_8, FUNC_4(VAR_5, VAR_9));
}
