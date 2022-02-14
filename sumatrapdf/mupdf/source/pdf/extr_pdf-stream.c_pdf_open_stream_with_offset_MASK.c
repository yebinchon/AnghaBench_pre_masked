
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int file; } ;
typedef TYPE_1__ pdf_document ;
typedef scalar_t__ int64_t ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *,TYPE_1__*,int ,int *,int,scalar_t__,int *) ;

fz_stream *
FUNC_2(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3, pdf_obj *VAR_4, int64_t VAR_5)
{
 if (VAR_5 == 0)
  FUNC_0(VAR_1, VAR_0, "object is not a stream");
 return FUNC_1(VAR_1, VAR_2, VAR_2->file, VAR_4, VAR_3, VAR_5, ((void*)0));
}
