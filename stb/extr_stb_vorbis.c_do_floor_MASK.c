
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* floor_types; TYPE_2__* floor_config; } ;
typedef TYPE_3__ vorb ;
typedef scalar_t__ uint8 ;
typedef int YTYPE ;
struct TYPE_14__ {int floor1_multiplier; int values; int* sorted_order; int* Xlist; } ;
struct TYPE_13__ {int* submap_floor; TYPE_1__* chan; } ;
struct TYPE_11__ {TYPE_5__ floor1; } ;
struct TYPE_10__ {int mux; } ;
typedef TYPE_4__ Mapping ;
typedef TYPE_5__ Floor1 ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (float,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (float*,int,int,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(vorb *VAR_3, Mapping *VAR_4, int VAR_5, int VAR_6, float *VAR_7, YTYPE *VAR_8, uint8 *VAR_9)
{
   int VAR_10 = VAR_6 >> 1;
   int VAR_11 = VAR_4->chan[VAR_5].mux, VAR_12;
   VAR_12 = VAR_4->submap_floor[VAR_11];
   if (VAR_3->floor_types[VAR_12] == 0) {
      return FUNC_3(VAR_3, VAR_1);
   } else {
      Floor1 *VAR_13 = &VAR_3->floor_config[VAR_12].floor1;
      int VAR_14,VAR_15;
      int VAR_16 = 0, VAR_17 = VAR_8[0] * VAR_13->floor1_multiplier;
      for (VAR_15=1; VAR_15 < VAR_13->values; ++VAR_15) {
         VAR_14 = VAR_13->sorted_order[VAR_15];

         if (VAR_8[VAR_14] >= 0)



         {
            int VAR_18 = VAR_8[VAR_14] * VAR_13->floor1_multiplier;
            int VAR_19 = VAR_13->Xlist[VAR_14];
            if (VAR_16 != VAR_19)
               FUNC_2(VAR_7, VAR_16,VAR_17, VAR_19,VAR_18, VAR_10);
            FUNC_0(VAR_3);
            VAR_16 = VAR_19, VAR_17 = VAR_18;
         }
      }
      if (VAR_16 < VAR_10) {

         for (VAR_14=VAR_16; VAR_14 < VAR_10; ++VAR_14)
            FUNC_1(VAR_7[VAR_14], VAR_2[VAR_17]);
         FUNC_0(VAR_3);
      }
   }
   return VAR_0;
}
