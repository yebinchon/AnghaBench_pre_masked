
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z; int y; int x; } ;
typedef TYPE_1__ D3DVECTOR ;
typedef int D3DVALUE ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline D3DVALUE FUNC_5 (const D3DVECTOR *VAR_0, const D3DVECTOR *VAR_1)
{
 D3DVALUE VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1 (VAR_0,VAR_1);
 VAR_2 = FUNC_3 (VAR_0);
 VAR_3 = FUNC_3 (VAR_1);
 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_6 = VAR_4/(VAR_2*VAR_3);
 VAR_5 = FUNC_4(VAR_6);
 FUNC_2("angle between (%f,%f,%f) and (%f,%f,%f) = %f radians (%f degrees)\n", VAR_0->x, VAR_0->y, VAR_0->z, VAR_1->x,
       VAR_1->y, VAR_1->z, VAR_5, FUNC_0(VAR_5));
 return VAR_5;
}
