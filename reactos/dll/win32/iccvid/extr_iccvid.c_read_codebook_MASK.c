
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y0; int y1; int y2; int y3; int u; int v; int* r; int* g; int* b; } ;
typedef TYPE_1__ cvid_codebook ;


 void* FUNC_0 () ;
 void** VAR_0 ;

__attribute__((used)) static inline void FUNC_1(cvid_codebook *VAR_1, int VAR_2)
{
int VAR_3, VAR_4, VAR_5;

    if(VAR_2)
        {
        VAR_1->y0 = FUNC_0();
        VAR_1->y1 = FUNC_0();
        VAR_1->y2 = FUNC_0();
        VAR_1->y3 = FUNC_0();
        VAR_1->u = VAR_1->v = 0;

        VAR_1->r[0] = VAR_1->g[0] = VAR_1->b[0] = VAR_1->y0;
        VAR_1->r[1] = VAR_1->g[1] = VAR_1->b[1] = VAR_1->y1;
        VAR_1->r[2] = VAR_1->g[2] = VAR_1->b[2] = VAR_1->y2;
        VAR_1->r[3] = VAR_1->g[3] = VAR_1->b[3] = VAR_1->y3;
        }
    else
        {
        VAR_1->y0 = FUNC_0();
        VAR_1->y1 = FUNC_0();
        VAR_1->y2 = FUNC_0();
        VAR_1->y3 = FUNC_0();
        VAR_1->u = FUNC_0();
        VAR_1->v = FUNC_0();

        VAR_3 = VAR_1->v << 1;
        VAR_4 = -((VAR_1->u+1) >> 1) - VAR_1->v;
        VAR_5 = VAR_1->u << 1;

        VAR_1->r[0] = VAR_0[VAR_1->y0 + VAR_3]; VAR_1->g[0] = VAR_0[VAR_1->y0 + VAR_4]; VAR_1->b[0] = VAR_0[VAR_1->y0 + VAR_5];
        VAR_1->r[1] = VAR_0[VAR_1->y1 + VAR_3]; VAR_1->g[1] = VAR_0[VAR_1->y1 + VAR_4]; VAR_1->b[1] = VAR_0[VAR_1->y1 + VAR_5];
        VAR_1->r[2] = VAR_0[VAR_1->y2 + VAR_3]; VAR_1->g[2] = VAR_0[VAR_1->y2 + VAR_4]; VAR_1->b[2] = VAR_0[VAR_1->y2 + VAR_5];
        VAR_1->r[3] = VAR_0[VAR_1->y3 + VAR_3]; VAR_1->g[3] = VAR_0[VAR_1->y3 + VAR_4]; VAR_1->b[3] = VAR_0[VAR_1->y3 + VAR_5];
        }
}
