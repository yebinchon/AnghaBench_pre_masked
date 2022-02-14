
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; int z; } ;
typedef TYPE_1__ region ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 TYPE_1__*** VAR_1 ;

__attribute__((used)) static region *FUNC_2(int VAR_2, int VAR_3)
{
   int VAR_4 = VAR_2 & (VAR_0-1);
   int VAR_5 = VAR_3 & (VAR_0-1);
   region *VAR_6;

   VAR_6 = VAR_1[VAR_5][VAR_4];

   if (VAR_6) {
      if (VAR_6->x == VAR_2 && VAR_6->z == VAR_3)
         return VAR_6;
      FUNC_0(VAR_6);
   }

   VAR_6 = FUNC_1(VAR_2, VAR_3);
   VAR_1[VAR_5][VAR_4] = VAR_6;

   return VAR_6;
}
