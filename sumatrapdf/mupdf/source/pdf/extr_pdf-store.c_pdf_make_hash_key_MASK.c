
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int ptr; int i; } ;
struct TYPE_6__ {TYPE_1__ pi; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_store_hash ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_0, fz_store_hash *VAR_1, void *VAR_2)
{
 pdf_obj *VAR_3 = (pdf_obj *)VAR_2;

 if (!FUNC_1(VAR_0, VAR_3))
  return 0;
 VAR_1->u.pi.i = FUNC_2(VAR_0, VAR_3);
 VAR_1->u.pi.ptr = FUNC_0(VAR_0, VAR_3);
 return 1;
}
