
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float dy; float dx; int flags; float x; float y; float dmx; float dmy; } ;
typedef int NVGvertex ;
typedef TYPE_1__ NVGpoint ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,TYPE_1__*,TYPE_1__*,float,float*,float*,float*,float*) ;
 int FUNC_2 (int *,float,float,float,int) ;

__attribute__((used)) static NVGvertex* FUNC_3(NVGvertex* VAR_3, NVGpoint* VAR_4, NVGpoint* VAR_5,
          float VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10)
{
 float VAR_11,VAR_12,VAR_13,VAR_14;
 float VAR_15,VAR_16,VAR_17,VAR_18;
 float VAR_19 = VAR_4->dy;
 float VAR_20 = -VAR_4->dx;
 float VAR_21 = VAR_5->dy;
 float VAR_22 = -VAR_5->dx;
 FUNC_0(VAR_10);

 if (VAR_5->flags & VAR_2) {
  FUNC_1(VAR_5->flags & VAR_0, VAR_4, VAR_5, VAR_6, &VAR_15,&VAR_16, &VAR_17,&VAR_18);

  FUNC_2(VAR_3, VAR_15, VAR_16, VAR_8,1); VAR_3++;
  FUNC_2(VAR_3, VAR_5->x - VAR_19*VAR_7, VAR_5->y - VAR_20*VAR_7, VAR_9,1); VAR_3++;

  if (VAR_5->flags & VAR_1) {
   FUNC_2(VAR_3, VAR_15, VAR_16, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x - VAR_19*VAR_7, VAR_5->y - VAR_20*VAR_7, VAR_9,1); VAR_3++;

   FUNC_2(VAR_3, VAR_17, VAR_18, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x - VAR_21*VAR_7, VAR_5->y - VAR_22*VAR_7, VAR_9,1); VAR_3++;
  } else {
   VAR_11 = VAR_5->x - VAR_5->dmx * VAR_7;
   VAR_12 = VAR_5->y - VAR_5->dmy * VAR_7;

   FUNC_2(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x - VAR_19*VAR_7, VAR_5->y - VAR_20*VAR_7, VAR_9,1); VAR_3++;

   FUNC_2(VAR_3, VAR_11, VAR_12, VAR_9,1); VAR_3++;
   FUNC_2(VAR_3, VAR_11, VAR_12, VAR_9,1); VAR_3++;

   FUNC_2(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x - VAR_21*VAR_7, VAR_5->y - VAR_22*VAR_7, VAR_9,1); VAR_3++;
  }

  FUNC_2(VAR_3, VAR_17, VAR_18, VAR_8,1); VAR_3++;
  FUNC_2(VAR_3, VAR_5->x - VAR_21*VAR_7, VAR_5->y - VAR_22*VAR_7, VAR_9,1); VAR_3++;

 } else {
  FUNC_1(VAR_5->flags & VAR_0, VAR_4, VAR_5, -VAR_7, &VAR_11,&VAR_12, &VAR_13,&VAR_14);

  FUNC_2(VAR_3, VAR_5->x + VAR_19*VAR_6, VAR_5->y + VAR_20*VAR_6, VAR_8,1); VAR_3++;
  FUNC_2(VAR_3, VAR_11, VAR_12, VAR_9,1); VAR_3++;

  if (VAR_5->flags & VAR_1) {
   FUNC_2(VAR_3, VAR_5->x + VAR_19*VAR_6, VAR_5->y + VAR_20*VAR_6, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_11, VAR_12, VAR_9,1); VAR_3++;

   FUNC_2(VAR_3, VAR_5->x + VAR_21*VAR_6, VAR_5->y + VAR_22*VAR_6, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_13, VAR_14, VAR_9,1); VAR_3++;
  } else {
   VAR_15 = VAR_5->x + VAR_5->dmx * VAR_6;
   VAR_16 = VAR_5->y + VAR_5->dmy * VAR_6;

   FUNC_2(VAR_3, VAR_5->x + VAR_19*VAR_6, VAR_5->y + VAR_20*VAR_6, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;

   FUNC_2(VAR_3, VAR_15, VAR_16, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_15, VAR_16, VAR_8,1); VAR_3++;

   FUNC_2(VAR_3, VAR_5->x + VAR_21*VAR_6, VAR_5->y + VAR_22*VAR_6, VAR_8,1); VAR_3++;
   FUNC_2(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;
  }

  FUNC_2(VAR_3, VAR_5->x + VAR_21*VAR_6, VAR_5->y + VAR_22*VAR_6, VAR_8,1); VAR_3++;
  FUNC_2(VAR_3, VAR_13, VAR_14, VAR_9,1); VAR_3++;
 }

 return VAR_3;
}
