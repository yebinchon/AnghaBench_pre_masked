
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* image; } ;
typedef TYPE_2__ fz_image_key ;
typedef int fz_context ;
struct TYPE_3__ {int key_storable; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, void *VAR_1)
{
 fz_image_key *VAR_2 = (fz_image_key *)VAR_1;

 return FUNC_0(VAR_0, &VAR_2->image->key_storable);
}
