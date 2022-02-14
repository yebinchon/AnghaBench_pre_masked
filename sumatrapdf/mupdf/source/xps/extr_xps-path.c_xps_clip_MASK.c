
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_5__ {int * dev; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_xml ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int *,int,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,TYPE_1__*,char*,int*) ;
 int * FUNC_4 (int *,TYPE_1__*,int *,int *,int ,int*) ;

void
FUNC_5(fz_context *VAR_1, xps_document *VAR_2, fz_matrix VAR_3, xps_resource *VAR_4, char *VAR_5, fz_xml *VAR_6)
{
 fz_device *VAR_7 = VAR_2->dev;
 fz_path *VAR_8;
 int VAR_9 = 0;

 if (VAR_5)
  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_5, &VAR_9);
 else if (VAR_6)
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_4, VAR_6, 0, &VAR_9);
 else
  VAR_8 = FUNC_2(VAR_1);
 FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9 == 0, VAR_3, VAR_0);
 FUNC_1(VAR_1, VAR_8);
}
