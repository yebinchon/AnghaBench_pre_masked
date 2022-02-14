
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int j_flags; int j_errno; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2 (journal_t *VAR_1, int VAR_2)
{
    if (VAR_1->j_flags & VAR_0)
        return;

    if (!VAR_1->j_errno)
        VAR_1->j_errno = VAR_2;

    FUNC_0(VAR_1);

    if (VAR_2)
        FUNC_1(VAR_1, 1);
}
