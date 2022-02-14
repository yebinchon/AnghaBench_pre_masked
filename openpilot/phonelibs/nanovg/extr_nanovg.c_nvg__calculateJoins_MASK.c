
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* cache; } ;
struct TYPE_8__ {size_t first; int count; int convex; scalar_t__ nbevel; } ;
struct TYPE_7__ {int npaths; TYPE_1__* points; TYPE_3__* paths; } ;
struct TYPE_6__ {float dy; float dx; float dmx; float dmy; int flags; int len; } ;
typedef TYPE_1__ NVGpoint ;
typedef TYPE_2__ NVGpathCache ;
typedef TYPE_3__ NVGpath ;
typedef TYPE_4__ NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_0 (float,float) ;
 float FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(NVGcontext* VAR_6, float VAR_7, int VAR_8, float VAR_9)
{
 NVGpathCache* VAR_10 = VAR_6->cache;
 int VAR_11, VAR_12;
 float VAR_13 = 0.0f;

 if (VAR_7 > 0.0f) VAR_13 = 1.0f / VAR_7;


 for (VAR_11 = 0; VAR_11 < VAR_10->npaths; VAR_11++) {
  NVGpath* VAR_14 = &VAR_10->paths[VAR_11];
  NVGpoint* VAR_15 = &VAR_10->points[VAR_14->first];
  NVGpoint* VAR_16 = &VAR_15[VAR_14->count-1];
  NVGpoint* VAR_17 = &VAR_15[0];
  int VAR_18 = 0;

  VAR_14->nbevel = 0;

  for (VAR_12 = 0; VAR_12 < VAR_14->count; VAR_12++) {
   float VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
   VAR_19 = VAR_16->dy;
   VAR_20 = -VAR_16->dx;
   VAR_21 = VAR_17->dy;
   VAR_22 = -VAR_17->dx;

   VAR_17->dmx = (VAR_19 + VAR_21) * 0.5f;
   VAR_17->dmy = (VAR_20 + VAR_22) * 0.5f;
   VAR_23 = VAR_17->dmx*VAR_17->dmx + VAR_17->dmy*VAR_17->dmy;
   if (VAR_23 > 0.000001f) {
    float VAR_26 = 1.0f / VAR_23;
    if (VAR_26 > 600.0f) {
     VAR_26 = 600.0f;
    }
    VAR_17->dmx *= VAR_26;
    VAR_17->dmy *= VAR_26;
   }


   VAR_17->flags = (VAR_17->flags & VAR_3) ? VAR_3 : 0;


   VAR_24 = VAR_17->dx * VAR_16->dy - VAR_16->dx * VAR_17->dy;
   if (VAR_24 > 0.0f) {
    VAR_18++;
    VAR_17->flags |= VAR_4;
   }


   VAR_25 = FUNC_0(1.01f, FUNC_1(VAR_16->len, VAR_17->len) * VAR_13);
   if ((VAR_23 * VAR_25*VAR_25) < 1.0f)
    VAR_17->flags |= VAR_1;


   if (VAR_17->flags & VAR_3) {
    if ((VAR_23 * VAR_9*VAR_9) < 1.0f || VAR_8 == VAR_0 || VAR_8 == VAR_5) {
     VAR_17->flags |= VAR_2;
    }
   }

   if ((VAR_17->flags & (VAR_2 | VAR_1)) != 0)
    VAR_14->nbevel++;

   VAR_16 = VAR_17++;
  }

  VAR_14->convex = (VAR_18 == VAR_14->count) ? 1 : 0;
 }
}
