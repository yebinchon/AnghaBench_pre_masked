
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_2__ {int n; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(fz_context *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5)
{
 if (!FUNC_1(VAR_5))
  FUNC_2(VAR_3, VAR_0, "key is not a name (%s)", FUNC_4(VAR_5));

 if (VAR_5 < VAR_1)
  FUNC_3(VAR_3, VAR_4, VAR_2[(intptr_t)VAR_5]);
 else
  FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_5)->n);
}
