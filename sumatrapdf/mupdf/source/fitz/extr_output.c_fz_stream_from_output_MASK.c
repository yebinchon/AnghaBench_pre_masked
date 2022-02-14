
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_stream ;
struct TYPE_4__ {int state; int * (* as_stream ) (int *,int ) ;} ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int ) ;

fz_stream *
FUNC_3(fz_context *VAR_1, fz_output *VAR_2)
{
 if (VAR_2->as_stream == ((void*)0))
  FUNC_1(VAR_1, VAR_0, "Cannot derive input stream from output stream");
 FUNC_0(VAR_1, VAR_2);
 return VAR_2->as_stream(VAR_1, VAR_2->state);
}
