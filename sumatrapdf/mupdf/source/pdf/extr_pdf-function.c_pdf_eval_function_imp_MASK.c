
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ pdf_function ;
typedef int fz_context ;






 int FUNC_0 (int *,TYPE_1__*,float const,float*) ;
 int FUNC_1 (int *,TYPE_1__*,float const*,float*) ;
 int FUNC_2 (int *,TYPE_1__*,float const*,float*) ;
 int FUNC_3 (int *,TYPE_1__*,float const,float*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_function *VAR_1, const float *VAR_2, float *VAR_3)
{
 switch (VAR_1->type)
 {
 case 129: FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3); break;
 case 131: FUNC_0(VAR_0, VAR_1, *VAR_2, VAR_3); break;
 case 128: FUNC_3(VAR_0, VAR_1, *VAR_2, VAR_3); break;
 case 130: FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3); break;
 }
}
