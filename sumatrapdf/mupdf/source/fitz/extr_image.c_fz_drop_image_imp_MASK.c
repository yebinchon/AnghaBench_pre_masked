
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_storable ;
struct TYPE_4__ {int (* drop_image ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_image ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, fz_storable *VAR_1)
{
 fz_image *VAR_2 = (fz_image *)VAR_1;

 VAR_2->drop_image(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_2);
}
