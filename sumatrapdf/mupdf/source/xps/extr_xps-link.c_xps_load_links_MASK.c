
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int doc; } ;
typedef TYPE_1__ xps_page ;
typedef int fz_page ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_context ;


 int FUNC_0 (float,float) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int **) ;

fz_link *
FUNC_2(fz_context *VAR_0, fz_page *VAR_1)
{
 xps_page *VAR_2 = (xps_page*)VAR_1;
 fz_matrix VAR_3;
 fz_link *VAR_4 = ((void*)0);
 VAR_3 = FUNC_0(72.0f / 96.0f, 72.0f / 96.0f);
 FUNC_1(VAR_0, VAR_2->doc, VAR_3, VAR_2, &VAR_4);
 return VAR_4;
}
