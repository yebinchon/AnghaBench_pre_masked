
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cEntries; int * pse; } ;
struct TYPE_5__ {size_t cEntries; int * pse; } ;
typedef TYPE_1__ STRTABLEW ;
typedef TYPE_2__ STRTABLEA ;
typedef int STRENTRYW ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static STRTABLEW *FUNC_3(const STRTABLEA *VAR_0)
{
    STRTABLEW *VAR_1;
    DWORD VAR_2;

    VAR_1 = FUNC_1(FUNC_0(), 0, sizeof(STRTABLEW));
    VAR_1->pse = FUNC_1(FUNC_0(), 0, VAR_0->cEntries * sizeof(STRENTRYW));
    VAR_1->cEntries = VAR_0->cEntries;

    for (VAR_2 = 0; VAR_2 < VAR_1->cEntries; VAR_2++)
        FUNC_2(&VAR_0->pse[VAR_2], &VAR_1->pse[VAR_2]);

    return VAR_1;
}
