
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; int z; } ;
typedef TYPE_1__ D3DVECTOR ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static inline D3DVECTOR FUNC_1 (const D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1)
{
 D3DVECTOR VAR_2;
 VAR_2.x = (VAR_0->y*VAR_1->z) - (VAR_0->z*VAR_1->y);
 VAR_2.y = (VAR_0->z*VAR_1->x) - (VAR_0->x*VAR_1->z);
 VAR_2.z = (VAR_0->x*VAR_1->y) - (VAR_0->y*VAR_1->x);
 FUNC_0("(%f,%f,%f) x (%f,%f,%f) = (%f,%f,%f)\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1->x, VAR_1->y,
       VAR_1->z, VAR_2.x, VAR_2.y, VAR_2.z);
 return VAR_2;
}
