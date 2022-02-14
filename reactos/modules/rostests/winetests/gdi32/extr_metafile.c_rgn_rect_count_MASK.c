
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nCount; } ;
struct TYPE_7__ {TYPE_1__ rdh; } ;
typedef TYPE_2__ RGNDATA ;
typedef int HRGN ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static DWORD FUNC_4(HRGN VAR_0)
{
    DWORD VAR_1;
    RGNDATA *VAR_2;

    if (!VAR_0) return 0;
    if (!(VAR_1 = FUNC_1(VAR_0, 0, ((void*)0)))) return 0;
    if (!(VAR_2 = FUNC_2(FUNC_0(), 0, VAR_1))) return 0;
    FUNC_1(VAR_0, VAR_1, VAR_2);
    VAR_1 = VAR_2->rdh.nCount;
    FUNC_3(FUNC_0(), 0, VAR_2);
    return VAR_1;
}
