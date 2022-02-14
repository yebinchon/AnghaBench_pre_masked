
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {int ra; } ;
struct queue_surf {int tex; int stage9; int surf9; int tex9; int stage11; int idle11; int tex11; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct queue_surf*) ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec_mapper *VAR_0,
                         struct queue_surf *VAR_1)
{
    if (!VAR_1)
        return;
    FUNC_0(VAR_1->tex11);
    FUNC_0(VAR_1->idle11);
    FUNC_0(VAR_1->stage11);
    FUNC_0(VAR_1->tex9);
    FUNC_0(VAR_1->surf9);
    FUNC_0(VAR_1->stage9);
    FUNC_1(VAR_0->ra, &VAR_1->tex);
    FUNC_2(VAR_1);
}
