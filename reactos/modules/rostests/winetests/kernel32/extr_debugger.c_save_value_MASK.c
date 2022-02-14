
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; scalar_t__ size; int * data; int type; } ;
typedef TYPE_1__ reg_save_value ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int *,int *,scalar_t__*) ;

__attribute__((used)) static DWORD FUNC_3(HKEY VAR_1, const char *VAR_2, reg_save_value *VAR_3)
{
    DWORD VAR_4;
    VAR_3->name=VAR_2;
    VAR_3->data=0;
    VAR_3->size=0;
    VAR_4=FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_3->type, ((void*)0), &VAR_3->size);
    if (VAR_4 == VAR_0)
    {
        VAR_3->data=FUNC_1(FUNC_0(), 0, VAR_3->size);
        FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_3->type, VAR_3->data, &VAR_3->size);
    }
    return VAR_4;
}
