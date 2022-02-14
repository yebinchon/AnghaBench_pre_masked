
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hmmio; } ;
struct TYPE_6__ {TYPE_1__ info; struct TYPE_6__* lpNext; } ;
typedef TYPE_2__* LPWINE_MMIO ;
typedef scalar_t__ HMMIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LPWINE_MMIO FUNC_2(HMMIO VAR_2)
{
    LPWINE_MMIO VAR_3 = ((void*)0);

    FUNC_0(&VAR_1);
    for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->lpNext) {
 if (VAR_3->info.hmmio == VAR_2)
     break;
    }
    FUNC_1(&VAR_1);
    return VAR_3;
}
