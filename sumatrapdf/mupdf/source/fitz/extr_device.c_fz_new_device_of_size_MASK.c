
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ fz_device ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,int) ;

fz_device *
FUNC_2(fz_context *VAR_0, int VAR_1)
{
 fz_device *VAR_2 = FUNC_0(FUNC_1(VAR_0, 1, VAR_1), "fz_device");
 VAR_2->refs = 1;
 return VAR_2;
}
