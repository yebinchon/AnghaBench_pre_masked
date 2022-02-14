
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_35__ {float fringeWidth; int tessTol; TYPE_3__* cache; } ;
struct TYPE_34__ {scalar_t__ closed; int count; int nbevel; size_t first; int nstroke; TYPE_1__* stroke; scalar_t__ nfill; scalar_t__ fill; } ;
struct TYPE_33__ {int npaths; TYPE_2__* points; TYPE_4__* paths; } ;
struct TYPE_32__ {float x; float y; int flags; float dmx; float dmy; } ;
struct TYPE_31__ {float x; float y; } ;
typedef TYPE_1__ NVGvertex ;
typedef TYPE_2__ NVGpoint ;
typedef TYPE_3__ NVGpathCache ;
typedef TYPE_4__ NVGpath ;
typedef TYPE_5__ NVGcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_5__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*,float,float,int ,int,float) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_2__*,float,float,float,float,float) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,TYPE_2__*,float,float,float,float,float) ;
 int FUNC_4 (TYPE_5__*,float,int,float) ;
 int FUNC_5 (float,int ,int ) ;
 int FUNC_6 (float*,float*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,TYPE_2__*,float,float,float,int,float) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,TYPE_2__*,float,float,float,int,float) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,TYPE_2__*,TYPE_2__*,float,float,int ,int,int,float) ;
 int FUNC_10 (TYPE_1__*,float,float,int,int) ;

__attribute__((used)) static int FUNC_11(NVGcontext* VAR_6, float VAR_7, int VAR_8, int VAR_9, float VAR_10)
{
 NVGpathCache* VAR_11 = VAR_6->cache;
 NVGvertex* VAR_12;
 NVGvertex* VAR_13;
 int VAR_14, VAR_15, VAR_16;
 float VAR_17 = VAR_6->fringeWidth;
 int VAR_18 = FUNC_5(VAR_7, VAR_1, VAR_6->tessTol);

 FUNC_4(VAR_6, VAR_7, VAR_9, VAR_10);


 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_11->npaths; VAR_15++) {
  NVGpath* VAR_19 = &VAR_11->paths[VAR_15];
  int VAR_20 = (VAR_19->closed == 0) ? 0 : 1;
  if (VAR_9 == VAR_4)
   VAR_14 += (VAR_19->count + VAR_19->nbevel*(VAR_18+2) + 1) * 2;
  else
   VAR_14 += (VAR_19->count + VAR_19->nbevel*5 + 1) * 2;
  if (VAR_20 == 0) {

   if (VAR_8 == VAR_4) {
    VAR_14 += (VAR_18*2 + 2)*2;
   } else {
    VAR_14 += (3+3)*2;
   }
  }
 }

 VAR_12 = FUNC_0(VAR_6, VAR_14);
 if (VAR_12 == ((void*)0)) return 0;

 for (VAR_15 = 0; VAR_15 < VAR_11->npaths; VAR_15++) {
  NVGpath* VAR_21 = &VAR_11->paths[VAR_15];
  NVGpoint* VAR_22 = &VAR_11->points[VAR_21->first];
  NVGpoint* VAR_23;
  NVGpoint* VAR_24;
  int VAR_25, VAR_26, VAR_27;
  float VAR_28, VAR_29;

  VAR_21->fill = 0;
  VAR_21->nfill = 0;


  VAR_27 = (VAR_21->closed == 0) ? 0 : 1;
  VAR_13 = VAR_12;
  VAR_21->stroke = VAR_13;

  if (VAR_27) {

   VAR_23 = &VAR_22[VAR_21->count-1];
   VAR_24 = &VAR_22[0];
   VAR_25 = 0;
   VAR_26 = VAR_21->count;
  } else {

   VAR_23 = &VAR_22[0];
   VAR_24 = &VAR_22[1];
   VAR_25 = 1;
   VAR_26 = VAR_21->count-1;
  }

  if (VAR_27 == 0) {

   VAR_28 = VAR_24->x - VAR_23->x;
   VAR_29 = VAR_24->y - VAR_23->y;
   FUNC_6(&VAR_28, &VAR_29);
   if (VAR_8 == VAR_0)
    VAR_13 = FUNC_3(VAR_13, VAR_23, VAR_28, VAR_29, VAR_7, -VAR_17*0.5f, VAR_17);
   else if (VAR_8 == VAR_0 || VAR_8 == VAR_5)
    VAR_13 = FUNC_3(VAR_13, VAR_23, VAR_28, VAR_29, VAR_7, VAR_7-VAR_17, VAR_17);
   else if (VAR_8 == VAR_4)
    VAR_13 = FUNC_8(VAR_13, VAR_23, VAR_28, VAR_29, VAR_7, VAR_18, VAR_17);
  }

  for (VAR_16 = VAR_25; VAR_16 < VAR_26; ++VAR_16) {
   if ((VAR_24->flags & (VAR_3 | VAR_2)) != 0) {
    if (VAR_9 == VAR_4) {
     VAR_13 = FUNC_9(VAR_13, VAR_23, VAR_24, VAR_7, VAR_7, 0, 1, VAR_18, VAR_17);
    } else {
     VAR_13 = FUNC_1(VAR_13, VAR_23, VAR_24, VAR_7, VAR_7, 0, 1, VAR_17);
    }
   } else {
    FUNC_10(VAR_13, VAR_24->x + (VAR_24->dmx * VAR_7), VAR_24->y + (VAR_24->dmy * VAR_7), 0,1); VAR_13++;
    FUNC_10(VAR_13, VAR_24->x - (VAR_24->dmx * VAR_7), VAR_24->y - (VAR_24->dmy * VAR_7), 1,1); VAR_13++;
   }
   VAR_23 = VAR_24++;
  }

  if (VAR_27) {

   FUNC_10(VAR_13, VAR_12[0].x, VAR_12[0].y, 0,1); VAR_13++;
   FUNC_10(VAR_13, VAR_12[1].x, VAR_12[1].y, 1,1); VAR_13++;
  } else {

   VAR_28 = VAR_24->x - VAR_23->x;
   VAR_29 = VAR_24->y - VAR_23->y;
   FUNC_6(&VAR_28, &VAR_29);
   if (VAR_8 == VAR_0)
    VAR_13 = FUNC_2(VAR_13, VAR_24, VAR_28, VAR_29, VAR_7, -VAR_17*0.5f, VAR_17);
   else if (VAR_8 == VAR_0 || VAR_8 == VAR_5)
    VAR_13 = FUNC_2(VAR_13, VAR_24, VAR_28, VAR_29, VAR_7, VAR_7-VAR_17, VAR_17);
   else if (VAR_8 == VAR_4)
    VAR_13 = FUNC_7(VAR_13, VAR_24, VAR_28, VAR_29, VAR_7, VAR_18, VAR_17);
  }

  VAR_21->nstroke = (int)(VAR_13 - VAR_12);

  VAR_12 = VAR_13;
 }

 return 1;
}
