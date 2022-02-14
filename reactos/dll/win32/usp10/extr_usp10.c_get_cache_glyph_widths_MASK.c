
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_2__ {int ** widths; } ;
typedef TYPE_1__ ScriptCache ;
typedef scalar_t__ SCRIPT_CACHE ;
typedef int BOOL ;
typedef int ABC ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline BOOL FUNC_2(SCRIPT_CACHE *VAR_4, WORD VAR_5, ABC *VAR_6)
{
    static const ABC VAR_7;
    ABC *VAR_8 = ((ScriptCache *)*VAR_4)->widths[VAR_5 >> VAR_2];

    if (!VAR_8 || !FUNC_0(&VAR_8[VAR_5 & VAR_1], &VAR_7, sizeof(ABC))) return VAR_0;
    FUNC_1(VAR_6, &VAR_8[VAR_5 & VAR_1], sizeof(ABC));
    return VAR_3;
}
