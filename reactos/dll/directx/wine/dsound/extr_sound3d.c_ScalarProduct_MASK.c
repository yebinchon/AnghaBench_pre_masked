
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int z; } ;
typedef TYPE_1__ D3DVECTOR ;
typedef int D3DVALUE ;


 int FUNC_0 (char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static inline D3DVALUE FUNC_1 (const D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1)
{
 D3DVALUE VAR_2;
 VAR_2 = (VAR_0->x*VAR_1->x) + (VAR_0->y*VAR_1->y) + (VAR_0->z*VAR_1->z);
 FUNC_0("(%f,%f,%f) * (%f,%f,%f) = %f)\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1->x, VAR_1->y,
       VAR_1->z, VAR_2);
 return VAR_2;
}
