
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; } ;
typedef int NVGvertex ;
typedef TYPE_1__ NVGpoint ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 float FUNC_1 (float) ;
 int FUNC_2 (int *,float,float,float,int) ;
 float FUNC_3 (float) ;

__attribute__((used)) static NVGvertex* FUNC_4(NVGvertex* VAR_1, NVGpoint* VAR_2,
            float VAR_3, float VAR_4, float VAR_5, int VAR_6, float VAR_7)
{
 int VAR_8;
 float VAR_9 = VAR_2->x;
 float VAR_10 = VAR_2->y;
 float VAR_11 = VAR_4;
 float VAR_12 = -VAR_3;
 FUNC_0(VAR_7);
 FUNC_2(VAR_1, VAR_9 + VAR_11*VAR_5, VAR_10 + VAR_12*VAR_5, 0,1); VAR_1++;
 FUNC_2(VAR_1, VAR_9 - VAR_11*VAR_5, VAR_10 - VAR_12*VAR_5, 1,1); VAR_1++;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  float VAR_13 = VAR_8/(float)(VAR_6-1)*VAR_0;
  float VAR_14 = FUNC_1(VAR_13) * VAR_5, VAR_15 = FUNC_3(VAR_13) * VAR_5;
  FUNC_2(VAR_1, VAR_9, VAR_10, 0.5f,1); VAR_1++;
  FUNC_2(VAR_1, VAR_9 - VAR_11*VAR_14 + VAR_3*VAR_15, VAR_10 - VAR_12*VAR_14 + VAR_4*VAR_15, 0,1); VAR_1++;
 }
 return VAR_1;
}
