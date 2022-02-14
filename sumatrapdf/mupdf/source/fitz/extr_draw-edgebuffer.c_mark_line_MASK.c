
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int x0; int x1; int y0; int y1; } ;
struct TYPE_6__ {int y0; int y1; } ;
struct TYPE_8__ {TYPE_2__ bbox; TYPE_1__ clip; } ;
struct TYPE_9__ {int* table; int* index; TYPE_3__ super; } ;
typedef TYPE_4__ fz_edgebuffer ;
typedef int fz_context ;
typedef int fixed ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(fz_context *VAR_5, fz_edgebuffer *VAR_6, fixed VAR_7, fixed VAR_8, fixed VAR_9, fixed VAR_10)
{
 int VAR_11 = VAR_6->super.clip.y0;
 int VAR_12 = VAR_6->super.clip.y1 - VAR_6->super.clip.y0;
 int *VAR_13 = VAR_6->table;
 int *VAR_14 = VAR_6->index;
 int VAR_15;
 int VAR_16, VAR_17;
 fixed VAR_18, VAR_19;
 int VAR_20 = VAR_1;
 int *VAR_21;

 if (FUNC_1(VAR_8 + VAR_4-1) == FUNC_1(VAR_10 + VAR_4-1))
  return;
 if (VAR_8 > VAR_10) {
  int VAR_22;
  VAR_22 = VAR_8; VAR_8 = VAR_10; VAR_10 = VAR_22;
  VAR_22 = VAR_7; VAR_7 = VAR_9; VAR_9 = VAR_22;
  VAR_20 = VAR_0;
 }

 if (FUNC_1(VAR_7) < VAR_6->super.bbox.x0)
  VAR_6->super.bbox.x0 = FUNC_1(VAR_7);
 if (FUNC_1(VAR_7 + VAR_3 - 1) > VAR_6->super.bbox.x1)
  VAR_6->super.bbox.x1 = FUNC_1(VAR_7 + VAR_3 - 1);
 if (FUNC_1(VAR_9) < VAR_6->super.bbox.x0)
  VAR_6->super.bbox.x0 = FUNC_1(VAR_9);
 if (FUNC_1(VAR_9 + VAR_3 - 1) > VAR_6->super.bbox.x1)
  VAR_6->super.bbox.x1 = FUNC_1(VAR_9 + VAR_3 - 1);

 if (FUNC_1(VAR_8) < VAR_6->super.bbox.y0)
  VAR_6->super.bbox.y0 = FUNC_1(VAR_8);
 if (FUNC_1(VAR_10 + VAR_3 - 1) > VAR_6->super.bbox.y1)
  VAR_6->super.bbox.y1 = FUNC_1(VAR_10 + VAR_3 - 1);




 VAR_18 = ((VAR_8 + VAR_4 - 1) & ~(VAR_3-1)) | VAR_4;

 VAR_19 = ((VAR_10 - VAR_4 - 1) & ~(VAR_3-1)) | VAR_4;

 if (VAR_18 < FUNC_4(VAR_11) + VAR_4)
  VAR_18 = FUNC_4(VAR_11) + VAR_4;
 if (VAR_10 <= VAR_18)
  return;
 if (VAR_19 > FUNC_4(VAR_11 + VAR_12 - 1) + VAR_4)
  VAR_19 = FUNC_4(VAR_11 + VAR_12 - 1) + VAR_4;
 if (VAR_8 > VAR_19)
  return;
 VAR_15 = VAR_18 - VAR_8;
 if (VAR_15 > 0)
 {
  int VAR_23 = VAR_9 - VAR_7;
  int VAR_24 = VAR_10 - VAR_8;
  int VAR_25 = (int)(((int64_t)VAR_23 * VAR_15 + (VAR_24>>1)) / VAR_24);
  VAR_7 += VAR_25;
  VAR_8 += VAR_15;
 }
 VAR_9 -= VAR_7;
 VAR_10 -= VAR_8;
 VAR_19 -= VAR_18;
 VAR_15 = VAR_10 - VAR_19;
 if (VAR_15 > 0)
 {
  int VAR_26 = (int)(((int64_t)VAR_9 * VAR_15 + (VAR_10>>1)) / VAR_10);
  VAR_9 -= VAR_26;
  VAR_10 -= VAR_15;
 }
 VAR_17 = FUNC_1(VAR_10);
 FUNC_0(VAR_17 >= 0);
 VAR_16 = FUNC_1(VAR_8) - VAR_11;




 FUNC_0(VAR_16 >= 0 && VAR_16 < VAR_12);

 VAR_21 = &VAR_13[VAR_14[VAR_16]];
 *VAR_21 = (*VAR_21)+1;
 VAR_21[*VAR_21] = (VAR_7&~1) | VAR_20;
 if (VAR_17 == 0)
  return;
 if (VAR_9 >= 0) {
  int VAR_27, VAR_28, VAR_29;




  VAR_27 = VAR_9/VAR_17;
  VAR_28 = VAR_9-(VAR_27*VAR_17);
  VAR_29 = VAR_17>>1;
  VAR_15 = VAR_17;
  do {
   int VAR_30;
   VAR_16++;
   VAR_7 += VAR_27;
   VAR_29 -= VAR_28;
   if (VAR_29 < 0) {
    VAR_29 += VAR_17;
    VAR_7++;
   }
   FUNC_0(VAR_16 >= 0 && VAR_16 < VAR_12);
   VAR_21 = &VAR_13[VAR_14[VAR_16]];
   VAR_30 = *VAR_21 = (*VAR_21)+1;
   VAR_21[VAR_30] = (VAR_7&~1) | VAR_20;
  } while (--VAR_15);
 } else {
  int VAR_31, VAR_32, VAR_33;

  VAR_9 = -VAR_9;



  VAR_31 = VAR_9/VAR_17;
  VAR_32 = VAR_9-(VAR_31*VAR_17);
  VAR_33 = VAR_17>>1;
  VAR_15 = VAR_17;
  do {
   int VAR_34;
   VAR_16++;
   VAR_7 -= VAR_31;
   VAR_33 -= VAR_32;
   if (VAR_33 < 0) {
    VAR_33 += VAR_17;
    VAR_7--;
   }
   FUNC_0(VAR_16 >= 0 && VAR_16 < VAR_12);
   VAR_21 = &VAR_13[VAR_14[VAR_16]];
   VAR_34 = *VAR_21 = (*VAR_21)+1;
   VAR_21[VAR_34] = (VAR_7&~1) | VAR_20;
  } while (--VAR_15);
 }
}
