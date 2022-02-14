
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dir; int section_name; int inf_name; } ;
typedef TYPE_1__ SETUPCOMMAND_PARAMSW ;
typedef scalar_t__ HRESULT ;
typedef int ADVInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(const SETUPCOMMAND_PARAMSW *VAR_1)
{
    ADVInfo VAR_2;
    HRESULT VAR_3;

    FUNC_0("(%p)\n", VAR_1);

    FUNC_1(&VAR_2, sizeof(ADVInfo));

    VAR_3 = FUNC_3(VAR_1->inf_name, VAR_1->section_name, VAR_1->dir, 0, &VAR_2);
    if (VAR_3 != VAR_0)
        goto done;

    VAR_3 = FUNC_5(&VAR_2);
    if (VAR_3 != VAR_0)
        goto done;

    VAR_3 = FUNC_2(&VAR_2);

done:
    FUNC_4(&VAR_2);

    return VAR_0;
}
