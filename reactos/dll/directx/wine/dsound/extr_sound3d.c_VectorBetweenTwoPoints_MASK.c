
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ D3DVECTOR ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline D3DVECTOR FUNC_1 (const D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1)
{
 D3DVECTOR VAR_2;
 VAR_2.x = VAR_1->x - VAR_0->x;
 VAR_2.y = VAR_1->y - VAR_0->y;
 VAR_2.z = VAR_1->z - VAR_0->z;
 FUNC_0("A (%f,%f,%f), B (%f,%f,%f), AB = (%f,%f,%f)\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1->x, VAR_1->y,
       VAR_1->z, VAR_2.x, VAR_2.y, VAR_2.z);
 return VAR_2;
}
