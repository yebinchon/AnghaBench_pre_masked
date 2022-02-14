
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* doc; } ;
typedef TYPE_1__ xps_page ;
struct TYPE_6__ {int * dev; int * cookie; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_page ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_cookie ;
typedef int fz_context ;


 int FUNC_0 (int ,float,float) ;
 int FUNC_1 (int *,TYPE_2__*,int ,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, fz_page *VAR_1, fz_device *VAR_2, fz_matrix VAR_3, fz_cookie *VAR_4)
{
 xps_page *VAR_5 = (xps_page*)VAR_1;
 xps_document *VAR_6 = VAR_5->doc;
 fz_matrix VAR_7;

 VAR_7 = FUNC_0(VAR_3, 72.0f / 96.0f, 72.0f / 96.0f);

 VAR_6->cookie = VAR_4;
 VAR_6->dev = VAR_2;
 FUNC_1(VAR_0, VAR_6, VAR_7, VAR_5);
 VAR_6->cookie = ((void*)0);
 VAR_6->dev = ((void*)0);
}
