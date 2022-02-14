
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int int64_t ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

int64_t
FUNC_4(fz_context *VAR_1, pdf_annot *VAR_2)
{
 pdf_obj *VAR_3 = FUNC_1(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 return VAR_3 ? FUNC_2(VAR_1, FUNC_3(VAR_1, VAR_3)) : 0;
}
