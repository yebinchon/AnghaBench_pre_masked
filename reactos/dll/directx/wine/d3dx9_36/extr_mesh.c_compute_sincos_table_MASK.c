
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sincos_table {int * cos; int * sin; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (float) ;
 int FUNC_4 (float) ;

__attribute__((used)) static BOOL FUNC_5(struct sincos_table *VAR_2, float VAR_3, float VAR_4, int VAR_5)
{
    float VAR_6;
    int VAR_7;

    VAR_2->sin = FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(*VAR_2->sin));
    if (!VAR_2->sin)
    {
        return VAR_0;
    }
    VAR_2->cos = FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(*VAR_2->cos));
    if (!VAR_2->cos)
    {
        FUNC_2(FUNC_0(), 0, VAR_2->sin);
        return VAR_0;
    }

    VAR_6 = VAR_3;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        VAR_2->sin[VAR_7] = FUNC_4(VAR_6);
        VAR_2->cos[VAR_7] = FUNC_3(VAR_6);
        VAR_6 += VAR_4;
    }

    return VAR_1;
}
