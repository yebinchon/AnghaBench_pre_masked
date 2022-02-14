
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ hwndEdit; } ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0 (COMBOEX_INFO const *VAR_1)
{
    return VAR_1->hwndEdit && (VAR_1->flags & VAR_0) == VAR_0;
}
