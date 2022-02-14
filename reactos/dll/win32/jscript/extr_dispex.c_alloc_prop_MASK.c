
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int prop_type_t ;
struct TYPE_7__ {size_t prop_cnt; TYPE_2__* props; } ;
typedef TYPE_1__ jsdisp_t ;
struct TYPE_8__ {int bucket_head; int bucket_next; int hash; int flags; int type; int name; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef int WCHAR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static inline dispex_prop_t* FUNC_5(jsdisp_t *VAR_0, const WCHAR *VAR_1, prop_type_t VAR_2, DWORD VAR_3)
{
    dispex_prop_t *VAR_4;
    unsigned VAR_5;

    if(FUNC_0(FUNC_3(VAR_0)))
        return ((void*)0);

    VAR_4 = &VAR_0->props[VAR_0->prop_cnt];
    VAR_4->name = FUNC_2(VAR_1);
    if(!VAR_4->name)
        return ((void*)0);
    VAR_4->type = VAR_2;
    VAR_4->flags = VAR_3;
    VAR_4->hash = FUNC_4(VAR_1);

    VAR_5 = FUNC_1(VAR_0, VAR_4->hash);
    VAR_4->bucket_next = VAR_0->props[VAR_5].bucket_head;
    VAR_0->props[VAR_5].bucket_head = VAR_0->prop_cnt++;
    return VAR_4;
}
