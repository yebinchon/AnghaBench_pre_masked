
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cmsVEC3 ;
struct TYPE_7__ {int * v; } ;
typedef TYPE_1__ cmsMAT3 ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_8__ {int X; int Y; int Z; } ;
typedef TYPE_2__ cmsCIEXYZ ;
struct TYPE_9__ {int X; int Y; int Z; } ;


 int FUNC_0 (int ,int *,int,int,int) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, const cmsCIEXYZ* VAR_1,
                                   const cmsCIEXYZ* VAR_2,
                                   cmsMAT3* VAR_3, cmsVEC3* VAR_4)
{
  cmsFloat64Number VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   VAR_11 = VAR_1->X - FUNC_1(VAR_0)->X;
   VAR_12 = VAR_1->Y - FUNC_1(VAR_0)->Y;
   VAR_13 = VAR_1->Z - FUNC_1(VAR_0)->Z;

   VAR_5 = (VAR_2->X - FUNC_1(VAR_0)->X) / VAR_11;
   VAR_6 = (VAR_2->Y - FUNC_1(VAR_0)->Y) / VAR_12;
   VAR_7 = (VAR_2->Z - FUNC_1(VAR_0)->Z) / VAR_13;

   VAR_8 = - FUNC_1(VAR_0)-> X * (VAR_2->X - VAR_1->X) / VAR_11;
   VAR_9 = - FUNC_1(VAR_0)-> Y * (VAR_2->Y - VAR_1->Y) / VAR_12;
   VAR_10 = - FUNC_1(VAR_0)-> Z * (VAR_2->Z - VAR_1->Z) / VAR_13;

   FUNC_0(VAR_0, &VAR_3 ->v[0], VAR_5, 0, 0);
   FUNC_0(VAR_0, &VAR_3 ->v[1], 0, VAR_6, 0);
   FUNC_0(VAR_0, &VAR_3 ->v[2], 0, 0, VAR_7);
   FUNC_0(VAR_0, VAR_4, VAR_8, VAR_9, VAR_10);

}
