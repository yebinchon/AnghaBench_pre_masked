
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int * rdb; } ;
typedef TYPE_1__ pdf_csi ;
typedef int fz_context ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static pdf_obj *
FUNC_3(fz_context *VAR_1, pdf_csi *VAR_2, pdf_obj *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_3))
  return FUNC_1(VAR_1, FUNC_1(VAR_1, VAR_2->rdb, FUNC_0(VAR_0)), VAR_3);
 else
  return VAR_3;
}
