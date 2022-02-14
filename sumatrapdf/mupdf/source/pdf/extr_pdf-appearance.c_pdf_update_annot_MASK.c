
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_new_ap; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(fz_context *VAR_0, pdf_annot *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1);

 VAR_2 = VAR_1->has_new_ap;
 VAR_1->has_new_ap = 0;
 return VAR_2;
}
