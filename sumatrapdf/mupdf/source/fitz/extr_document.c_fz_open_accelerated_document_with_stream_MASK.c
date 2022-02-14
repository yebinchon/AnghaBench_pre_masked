
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_stream ;
struct TYPE_4__ {int * (* open_with_stream ) (int *,int *) ;int * (* open_accel_with_stream ) (int *,int *,int *) ;} ;
typedef TYPE_1__ fz_document_handler ;
typedef int fz_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 TYPE_1__ VAR_1 ;
 int * FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int *,int *) ;

fz_document *
FUNC_5(fz_context *VAR_2, const char *VAR_3, fz_stream *VAR_4, fz_stream *VAR_5)
{
 const fz_document_handler *VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  FUNC_2(VAR_2, VAR_0, "no document to open");

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_6)



  FUNC_2(VAR_2, VAR_0, "cannot find document handler for file type: %s", VAR_3);

 if (VAR_6->open_accel_with_stream)
  if (VAR_5 || VAR_6->open_with_stream == ((void*)0))
   return VAR_6->open_accel_with_stream(VAR_2, VAR_4, VAR_5);
 if (VAR_5)
 {



  FUNC_0(VAR_2, VAR_5);
 }
 return VAR_6->open_with_stream(VAR_2, VAR_4);
}
