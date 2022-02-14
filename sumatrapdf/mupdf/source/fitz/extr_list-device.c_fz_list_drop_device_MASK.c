
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; int stroke; int colorspace; } ;
typedef TYPE_1__ fz_list_device ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_device *VAR_1)
{
 fz_list_device *VAR_2 = (fz_list_device *)VAR_1;

 FUNC_0(VAR_0, VAR_2->colorspace);
 FUNC_2(VAR_0, VAR_2->stroke);
 FUNC_1(VAR_0, VAR_2->path);
}
