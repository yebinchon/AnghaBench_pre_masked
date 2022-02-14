
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float dy; float dx; int flags; float x; float y; } ;
typedef int NVGvertex ;
typedef TYPE_1__ NVGpoint ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_1 (float,float) ;
 scalar_t__ FUNC_2 (float) ;
 float FUNC_3 (float) ;
 int FUNC_4 (int,TYPE_1__*,TYPE_1__*,float,float*,float*,float*,float*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int *,float,float,float,int) ;
 float FUNC_7 (float) ;

__attribute__((used)) static NVGvertex* FUNC_8(NVGvertex* VAR_3, NVGpoint* VAR_4, NVGpoint* VAR_5,
          float VAR_6, float VAR_7, float VAR_8, float VAR_9, int VAR_10, float VAR_11)
{
 int VAR_12, VAR_13;
 float VAR_14 = VAR_4->dy;
 float VAR_15 = -VAR_4->dx;
 float VAR_16 = VAR_5->dy;
 float VAR_17 = -VAR_5->dx;
 FUNC_0(VAR_11);

 if (VAR_5->flags & VAR_2) {
  float VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23;
  FUNC_4(VAR_5->flags & VAR_1, VAR_4, VAR_5, VAR_6, &VAR_18,&VAR_19, &VAR_20,&VAR_21);
  VAR_22 = FUNC_1(-VAR_15, -VAR_14);
  VAR_23 = FUNC_1(-VAR_17, -VAR_16);
  if (VAR_23 > VAR_22) VAR_23 -= VAR_0*2;

  FUNC_6(VAR_3, VAR_18, VAR_19, VAR_8,1); VAR_3++;
  FUNC_6(VAR_3, VAR_5->x - VAR_14*VAR_7, VAR_5->y - VAR_15*VAR_7, VAR_9,1); VAR_3++;

  VAR_13 = FUNC_5((int)FUNC_2(((VAR_22 - VAR_23) / VAR_0) * VAR_10), 2, VAR_10);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   float VAR_24 = VAR_12/(float)(VAR_13-1);
   float VAR_25 = VAR_22 + VAR_24*(VAR_23-VAR_22);
   float VAR_26 = VAR_5->x + FUNC_3(VAR_25) * VAR_7;
   float VAR_27 = VAR_5->y + FUNC_7(VAR_25) * VAR_7;
   FUNC_6(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;
   FUNC_6(VAR_3, VAR_26, VAR_27, VAR_9,1); VAR_3++;
  }

  FUNC_6(VAR_3, VAR_20, VAR_21, VAR_8,1); VAR_3++;
  FUNC_6(VAR_3, VAR_5->x - VAR_16*VAR_7, VAR_5->y - VAR_17*VAR_7, VAR_9,1); VAR_3++;

 } else {
  float VAR_28,VAR_29,VAR_30,VAR_31,VAR_32,VAR_33;
  FUNC_4(VAR_5->flags & VAR_1, VAR_4, VAR_5, -VAR_7, &VAR_28,&VAR_29, &VAR_30,&VAR_31);
  VAR_32 = FUNC_1(VAR_15, VAR_14);
  VAR_33 = FUNC_1(VAR_17, VAR_16);
  if (VAR_33 < VAR_32) VAR_33 += VAR_0*2;

  FUNC_6(VAR_3, VAR_5->x + VAR_14*VAR_7, VAR_5->y + VAR_15*VAR_7, VAR_8,1); VAR_3++;
  FUNC_6(VAR_3, VAR_28, VAR_29, VAR_9,1); VAR_3++;

  VAR_13 = FUNC_5((int)FUNC_2(((VAR_33 - VAR_32) / VAR_0) * VAR_10), 2, VAR_10);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   float VAR_34 = VAR_12/(float)(VAR_13-1);
   float VAR_35 = VAR_32 + VAR_34*(VAR_33-VAR_32);
   float VAR_36 = VAR_5->x + FUNC_3(VAR_35) * VAR_6;
   float VAR_37 = VAR_5->y + FUNC_7(VAR_35) * VAR_6;
   FUNC_6(VAR_3, VAR_36, VAR_37, VAR_8,1); VAR_3++;
   FUNC_6(VAR_3, VAR_5->x, VAR_5->y, 0.5f,1); VAR_3++;
  }

  FUNC_6(VAR_3, VAR_5->x + VAR_16*VAR_7, VAR_5->y + VAR_17*VAR_7, VAR_8,1); VAR_3++;
  FUNC_6(VAR_3, VAR_30, VAR_31, VAR_9,1); VAR_3++;

 }
 return VAR_3;
}
