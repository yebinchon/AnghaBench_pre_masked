
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cce_user {int mask; int value; int notdone; int done; int name; } ;
typedef int WCHAR ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int ,void*,int*,int,int *) ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static int FUNC_2(HANDLE VAR_0, void* VAR_1, WCHAR* VAR_2, void* VAR_3)
{
    struct cce_user* VAR_4 = (struct cce_user*)VAR_3;

    if (!VAR_4->name || !FUNC_1(VAR_2 + 1, VAR_4->name))
    {
        VAR_2[0] = (VAR_2[0] & ~VAR_4->mask) | (VAR_4->value & VAR_4->mask);
        if (FUNC_0(VAR_0, VAR_1, VAR_2, 1, ((void*)0)))
            VAR_4->done++;
        else
            VAR_4->notdone++;
    }
    return 1;
}
