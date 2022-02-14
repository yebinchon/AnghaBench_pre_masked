
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {int * tex; int ra; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ra_hwdec_mapper *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < 4; VAR_1++)
        FUNC_0(VAR_0->ra, &VAR_0->tex[VAR_1]);
}
