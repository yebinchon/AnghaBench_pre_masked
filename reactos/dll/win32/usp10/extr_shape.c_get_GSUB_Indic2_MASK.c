
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int newOtTag; } ;
struct TYPE_4__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int OPENTYPE_TAG ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,int,int *,int*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_2(SCRIPT_ANALYSIS *VAR_1, ScriptCache *VAR_2)
{
    OPENTYPE_TAG VAR_3;
    HRESULT VAR_4;
    int VAR_5 = 0;

    VAR_4 = FUNC_0(VAR_2, VAR_0[VAR_1->eScript].newOtTag, 1, &VAR_3, &VAR_5);

    return(FUNC_1(VAR_4));
}
