
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oletls {int causality_id; } ;
typedef int GUID ;


 struct oletls* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static inline GUID FUNC_3(void)
{
    struct oletls *VAR_1 = FUNC_0();
    if (!VAR_1)
        return VAR_0;
    if (FUNC_2(&VAR_1->causality_id, &VAR_0))
        FUNC_1(&VAR_1->causality_id);
    return VAR_1->causality_id;
}
