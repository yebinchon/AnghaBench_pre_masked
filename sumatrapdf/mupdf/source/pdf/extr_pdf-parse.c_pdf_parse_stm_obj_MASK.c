
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_token ;
typedef int pdf_obj ;
struct TYPE_6__ {int i; int len; int scratch; int f; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int pdf_document ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *,int *,int *,TYPE_1__*) ;
 int * FUNC_7 (int *,int *,int *,TYPE_1__*) ;

pdf_obj *
FUNC_8(fz_context *VAR_4, pdf_document *VAR_5, fz_stream *VAR_6, pdf_lexbuf *VAR_7)
{
 pdf_token VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7);

 switch (VAR_8)
 {
 case 132:
  return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
 case 131:
  return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
 case 134: return FUNC_3(VAR_4, VAR_7->scratch);
 case 130: return FUNC_4(VAR_4, VAR_7->f);
 case 129: return FUNC_5(VAR_4, VAR_7->scratch, VAR_7->len);
 case 128: return VAR_3;
 case 136: return VAR_1;
 case 133: return VAR_2;
 case 135: return FUNC_2(VAR_4, VAR_7->i);
 default: FUNC_0(VAR_4, VAR_0, "unknown token in object stream");
 }
}
