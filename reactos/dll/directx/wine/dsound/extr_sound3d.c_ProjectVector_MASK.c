
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z; int y; int x; } ;
typedef TYPE_1__ D3DVECTOR ;
typedef int D3DVALUE ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static inline D3DVALUE FUNC_3 (const D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1)
{
 D3DVALUE VAR_2, VAR_3;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = VAR_2/FUNC_2(VAR_1);
 FUNC_1("length projection of (%f,%f,%f) on (%f,%f,%f) = %f\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1->x,
              VAR_1->y, VAR_1->z, VAR_3);
 return VAR_3;
}
