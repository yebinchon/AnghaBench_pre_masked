
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* lpNext; } ;
typedef TYPE_1__* LPWINE_MMIO ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(LPWINE_MMIO VAR_4)
{
    LPWINE_MMIO* VAR_5;

    FUNC_0(&VAR_3);

    VAR_5 = &VAR_1;
    while (*VAR_5 && *VAR_5 != VAR_4) VAR_5 = &(*VAR_5)->lpNext;

    if (*VAR_5) {
 *VAR_5 = (*VAR_5)->lpNext;
 FUNC_2(FUNC_1(), 0, VAR_4);
 VAR_4 = ((void*)0);
    }
    FUNC_3(&VAR_3);
    return VAR_4 ? VAR_0 : VAR_2;
}
