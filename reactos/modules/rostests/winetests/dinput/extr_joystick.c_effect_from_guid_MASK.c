
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct effect_id {int guid; } ;
typedef int GUID ;


 unsigned int FUNC_0 (struct effect_id const*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 struct effect_id const* VAR_0 ;

__attribute__((used)) static const struct effect_id* FUNC_2(const GUID *VAR_1)
{
    unsigned int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (FUNC_1(VAR_1, VAR_0[VAR_2].guid))
            return &VAR_0[VAR_2];
    return ((void*)0);
}
