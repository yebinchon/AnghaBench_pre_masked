
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int entry; void* value; void* name; } ;
typedef TYPE_1__ param_prop_t ;
typedef int WCHAR ;
struct TYPE_8__ {int props; } ;
typedef TYPE_2__ PropertyBag ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 void* FUNC_4 (int const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(PropertyBag *VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4)
{
    param_prop_t *VAR_5;

    if(!VAR_3 || !VAR_4)
        return VAR_1;

    FUNC_0("%p %s %s\n", VAR_2, FUNC_1(VAR_3), FUNC_1(VAR_4));

    VAR_5 = FUNC_3(sizeof(*VAR_5));
    if(!VAR_5)
        return VAR_0;

    VAR_5->name = FUNC_4(VAR_3);
    VAR_5->value = FUNC_4(VAR_4);
    if(!VAR_5->name || !VAR_5->value) {
        FUNC_6(&VAR_5->entry);
        FUNC_2(VAR_5);
        return VAR_0;
    }

    FUNC_5(&VAR_2->props, &VAR_5->entry);
    return VAR_1;
}
