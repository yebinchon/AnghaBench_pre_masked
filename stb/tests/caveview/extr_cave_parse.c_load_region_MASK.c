
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int z; int ** sector_data; } ;
typedef TYPE_1__ region ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int * VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static region *FUNC_5(int VAR_3, int VAR_4)
{
   region *VAR_5;
   int VAR_6,VAR_7;

   FUNC_3(VAR_3, VAR_4);

   VAR_5 = FUNC_1(sizeof(*VAR_5));

   if (VAR_2 == ((void*)0)) {
      FUNC_2(VAR_5, 0, sizeof(*VAR_5));
   } else {
      FUNC_0(VAR_2, 0, VAR_1);
      for (VAR_7=0; VAR_7 < VAR_0; ++VAR_7)
         for (VAR_6=0; VAR_6 < VAR_0; ++VAR_6)
            VAR_5->sector_data[VAR_7][VAR_6] = FUNC_4(VAR_2);
   }
   VAR_5->x = VAR_3;
   VAR_5->z = VAR_4;

   return VAR_5;
}
