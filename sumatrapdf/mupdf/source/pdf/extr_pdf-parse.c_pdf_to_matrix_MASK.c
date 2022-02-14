
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {void* f; void* e; void* d; void* c; void* b; void* a; } ;
typedef TYPE_1__ fz_matrix ;
typedef int fz_context ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

fz_matrix
FUNC_2(fz_context *VAR_1, pdf_obj *VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_2))
  return VAR_0;
 else
 {
  fz_matrix VAR_3;
  VAR_3.a = FUNC_0(VAR_1, VAR_2, 0);
  VAR_3.b = FUNC_0(VAR_1, VAR_2, 1);
  VAR_3.c = FUNC_0(VAR_1, VAR_2, 2);
  VAR_3.d = FUNC_0(VAR_1, VAR_2, 3);
  VAR_3.e = FUNC_0(VAR_1, VAR_2, 4);
  VAR_3.f = FUNC_0(VAR_1, VAR_2, 5);
  return VAR_3;
 }
}
