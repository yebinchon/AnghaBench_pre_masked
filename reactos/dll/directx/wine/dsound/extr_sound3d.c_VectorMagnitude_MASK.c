
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z; int y; int x; } ;
typedef TYPE_1__ D3DVECTOR ;
typedef int D3DVALUE ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline D3DVALUE FUNC_3 (const D3DVECTOR *VAR_0)
{
 D3DVALUE VAR_1;
 VAR_1 = FUNC_2 (FUNC_0 (VAR_0, VAR_0));
 FUNC_1("|(%f,%f,%f)| = %f\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1);
 return VAR_1;
}
