
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {float fringeWidth; TYPE_3__* cache; } ;
struct TYPE_18__ {int count; int nbevel; size_t first; int nfill; int nstroke; TYPE_1__* stroke; TYPE_1__* fill; int convex; } ;
struct TYPE_17__ {int npaths; TYPE_2__* points; TYPE_4__* paths; } ;
struct TYPE_16__ {int flags; float dy; float dx; float x; float dmx; float y; float dmy; } ;
struct TYPE_15__ {float x; float y; } ;
typedef TYPE_1__ NVGvertex ;
typedef TYPE_2__ NVGpoint ;
typedef TYPE_3__ NVGpathCache ;
typedef TYPE_4__ NVGpath ;
typedef TYPE_5__ NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_5__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*,float,float,float,float,float) ;
 int FUNC_2 (TYPE_5__*,float,int,float) ;
 int FUNC_3 (TYPE_1__*,float,float,float,int) ;

__attribute__((used)) static int FUNC_4(NVGcontext* VAR_3, float VAR_4, int VAR_5, float VAR_6)
{
 NVGpathCache* VAR_7 = VAR_3->cache;
 NVGvertex* VAR_8;
 NVGvertex* VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14 = VAR_3->fringeWidth;
 int VAR_15 = VAR_4 > 0.0f;

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);


 VAR_10 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->npaths; VAR_12++) {
  NVGpath* VAR_16 = &VAR_7->paths[VAR_12];
  VAR_10 += VAR_16->count + VAR_16->nbevel + 1;
  if (VAR_15)
   VAR_10 += (VAR_16->count + VAR_16->nbevel*5 + 1) * 2;
 }

 VAR_8 = FUNC_0(VAR_3, VAR_10);
 if (VAR_8 == ((void*)0)) return 0;

 VAR_11 = VAR_7->npaths == 1 && VAR_7->paths[0].convex;

 for (VAR_12 = 0; VAR_12 < VAR_7->npaths; VAR_12++) {
  NVGpath* VAR_17 = &VAR_7->paths[VAR_12];
  NVGpoint* VAR_18 = &VAR_7->points[VAR_17->first];
  NVGpoint* VAR_19;
  NVGpoint* VAR_20;
  float VAR_21, VAR_22, VAR_23;
  float VAR_24, VAR_25;


  VAR_23 = 0.5f*VAR_14;
  VAR_9 = VAR_8;
  VAR_17->fill = VAR_9;

  if (VAR_15) {

   VAR_19 = &VAR_18[VAR_17->count-1];
   VAR_20 = &VAR_18[0];
   for (VAR_13 = 0; VAR_13 < VAR_17->count; ++VAR_13) {
    if (VAR_20->flags & VAR_1) {
     float VAR_26 = VAR_19->dy;
     float VAR_27 = -VAR_19->dx;
     float VAR_28 = VAR_20->dy;
     float VAR_29 = -VAR_20->dx;
     if (VAR_20->flags & VAR_2) {
      float VAR_30 = VAR_20->x + VAR_20->dmx * VAR_23;
      float VAR_31 = VAR_20->y + VAR_20->dmy * VAR_23;
      FUNC_3(VAR_9, VAR_30, VAR_31, 0.5f,1); VAR_9++;
     } else {
      float VAR_32 = VAR_20->x + VAR_26 * VAR_23;
      float VAR_33 = VAR_20->y + VAR_27 * VAR_23;
      float VAR_34 = VAR_20->x + VAR_28 * VAR_23;
      float VAR_35 = VAR_20->y + VAR_29 * VAR_23;
      FUNC_3(VAR_9, VAR_32, VAR_33, 0.5f,1); VAR_9++;
      FUNC_3(VAR_9, VAR_34, VAR_35, 0.5f,1); VAR_9++;
     }
    } else {
     FUNC_3(VAR_9, VAR_20->x + (VAR_20->dmx * VAR_23), VAR_20->y + (VAR_20->dmy * VAR_23), 0.5f,1); VAR_9++;
    }
    VAR_19 = VAR_20++;
   }
  } else {
   for (VAR_13 = 0; VAR_13 < VAR_17->count; ++VAR_13) {
    FUNC_3(VAR_9, VAR_18[VAR_13].x, VAR_18[VAR_13].y, 0.5f,1);
    VAR_9++;
   }
  }

  VAR_17->nfill = (int)(VAR_9 - VAR_8);
  VAR_8 = VAR_9;


  if (VAR_15) {
   VAR_22 = VAR_4 + VAR_23;
   VAR_21 = VAR_4 - VAR_23;
   VAR_25 = 0;
   VAR_24 = 1;
   VAR_9 = VAR_8;
   VAR_17->stroke = VAR_9;



   if (VAR_11) {
    VAR_22 = VAR_23;
    VAR_25 = 0.5f;
   }


   VAR_19 = &VAR_18[VAR_17->count-1];
   VAR_20 = &VAR_18[0];

   for (VAR_13 = 0; VAR_13 < VAR_17->count; ++VAR_13) {
    if ((VAR_20->flags & (VAR_1 | VAR_0)) != 0) {
     VAR_9 = FUNC_1(VAR_9, VAR_19, VAR_20, VAR_22, VAR_21, VAR_25, VAR_24, VAR_3->fringeWidth);
    } else {
     FUNC_3(VAR_9, VAR_20->x + (VAR_20->dmx * VAR_22), VAR_20->y + (VAR_20->dmy * VAR_22), VAR_25,1); VAR_9++;
     FUNC_3(VAR_9, VAR_20->x - (VAR_20->dmx * VAR_21), VAR_20->y - (VAR_20->dmy * VAR_21), VAR_24,1); VAR_9++;
    }
    VAR_19 = VAR_20++;
   }


   FUNC_3(VAR_9, VAR_8[0].x, VAR_8[0].y, VAR_25,1); VAR_9++;
   FUNC_3(VAR_9, VAR_8[1].x, VAR_8[1].y, VAR_24,1); VAR_9++;

   VAR_17->nstroke = (int)(VAR_9 - VAR_8);
   VAR_8 = VAR_9;
  } else {
   VAR_17->stroke = ((void*)0);
   VAR_17->nstroke = 0;
  }
 }

 return 1;
}
