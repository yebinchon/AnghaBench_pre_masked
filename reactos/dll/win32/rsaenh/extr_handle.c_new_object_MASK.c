
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct handle_table {int dummy; } ;
struct TYPE_6__ {int destructor; scalar_t__ refcount; int dwType; } ;
typedef TYPE_1__ OBJECTHDR ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int DESTRUCTOR ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (struct handle_table*,TYPE_1__*,int *) ;

HCRYPTKEY FUNC_4(struct handle_table *VAR_1, size_t VAR_2, DWORD VAR_3, DESTRUCTOR VAR_4,
                        OBJECTHDR **VAR_5)
{
    OBJECTHDR *VAR_6;
    HCRYPTKEY VAR_7;

    if (VAR_5)
        *VAR_5 = ((void*)0);

    VAR_6 = FUNC_1(FUNC_0(), 0, VAR_2);
    if (!VAR_6)
        return (HCRYPTKEY)VAR_0;

    VAR_6->dwType = VAR_3;
    VAR_6->refcount = 0;
    VAR_6->destructor = VAR_4;

    if (!FUNC_3(VAR_1, VAR_6, &VAR_7))
        FUNC_2(FUNC_0(), 0, VAR_6);
    else
        if (VAR_5)
            *VAR_5 = VAR_6;

    return VAR_7;
}
