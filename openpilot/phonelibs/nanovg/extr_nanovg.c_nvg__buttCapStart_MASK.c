
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; } ;
typedef int NVGvertex ;
typedef TYPE_1__ NVGpoint ;


 int FUNC_0 (int *,float,float,int,int) ;

__attribute__((used)) static NVGvertex* FUNC_1(NVGvertex* VAR_0, NVGpoint* VAR_1,
             float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 float VAR_7 = VAR_1->x - VAR_2*VAR_5;
 float VAR_8 = VAR_1->y - VAR_3*VAR_5;
 float VAR_9 = VAR_3;
 float VAR_10 = -VAR_2;
 FUNC_0(VAR_0, VAR_7 + VAR_9*VAR_4 - VAR_2*VAR_6, VAR_8 + VAR_10*VAR_4 - VAR_3*VAR_6, 0,0); VAR_0++;
 FUNC_0(VAR_0, VAR_7 - VAR_9*VAR_4 - VAR_2*VAR_6, VAR_8 - VAR_10*VAR_4 - VAR_3*VAR_6, 1,0); VAR_0++;
 FUNC_0(VAR_0, VAR_7 + VAR_9*VAR_4, VAR_8 + VAR_10*VAR_4, 0,1); VAR_0++;
 FUNC_0(VAR_0, VAR_7 - VAR_9*VAR_4, VAR_8 - VAR_10*VAR_4, 1,1); VAR_0++;
 return VAR_0;
}
